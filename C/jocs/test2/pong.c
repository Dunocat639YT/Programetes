#include <raylib.h>

// Struct jugadors (inicialitazció)
typedef struct {
    Vector2 posició;
    Vector2 mida;
    const float velocitat;
    } Jugador;

// Struct bola (inicialitazció)
typedef struct {
    Vector2 posició;
    const float radi;
    Vector2 velocitat;
    Vector2 maxVel;
    } Bola;

void controls(int key, Jugador *c, float velocitat) {

    if(IsKeyDown(key)) c->posició.y += velocitat * GetFrameTime();
}

int main(void) {
    
    const int ampladaPantalla = 1000;
    const int alturaPantalla = 500;
    const char títol[] = "Joc del pong";

    InitWindow(ampladaPantalla, alturaPantalla, títol);

    SetTargetFPS(240);

    // Struct jugador 1
    Jugador j1 = {
        .posició = {ampladaPantalla / 10, alturaPantalla / 2},
        .mida = {10, 80},
        .velocitat = 800
    };

    // Struct jugador 2
    Jugador j2 = {
        .posició = {ampladaPantalla - (ampladaPantalla / 10), alturaPantalla / 2},
        .mida = {10, 80},
        .velocitat = 800
    };

    // Struct bola
    Bola bola = {
        .posició = {ampladaPantalla/2, alturaPantalla/2},
        .radi = 30.0f,
        .velocitat = {300, 200},
        .maxVel = {600, 400}
    };

    while(!WindowShouldClose()){

        // Controls jugadors
        controls(KEY_W, &j1, -j1.velocitat);
        controls(KEY_S, &j1, j1.velocitat);
        controls(KEY_UP, &j2, -j2.velocitat);
        controls(KEY_DOWN, &j2, j2.velocitat);

        // Moviment bola
        bola.posició.x += bola.velocitat.x * GetFrameTime();
        bola.posició.y += bola.velocitat.y * GetFrameTime();

        // Col·lisió bola amb parets
        if (bola.posició.x >= (ampladaPantalla - bola.radi) || bola.posició.x <= bola.radi) { // Rebotar horitzontal
        bola.velocitat.x *= -1.0f;
        }
        if (bola.posició.y >= (alturaPantalla - bola.radi) || bola.posició.y <= bola.radi) { // Rebotar verticalment
            bola.velocitat.y *= -1.0f;
        }

        // Limitar velocitat
        if (bola.maxVel.x =< bola.velocitat.x) {
            bola.velocitat.x = bola.maxVel.x

        }



        BeginDrawing();

                ClearBackground(BLACK);

                //Dibuixar bola
                DrawCircleV(bola.posició, bola.radi, WHITE);

                // Dibuixar jugador 1 i 2
                DrawRectangleV(j1.posició, j1.mida, WHITE);
                DrawRectangleV(j2.posició, j2.mida, WHITE);

                // Col·lisió bola amb jugadors
                if (CheckCollisionCircleRec(bola.posició, bola.radi, (Rectangle){j1.posició.x, j1.posició.y, j1.mida.x, j1.mida.y})){
                    bola.velocitat.x *= -1.1f;
                    bola.posició.x = j1.posició.x + j1.mida.x + bola.radi;
                }
                else if (CheckCollisionCircleRec(bola.posició, bola.radi, (Rectangle){j2.posició.x, j2.posició.y, j2.mida.x, j2.mida.y})){
                    bola.velocitat.x *= -1.1f;
                    bola.posició.x = j2.posició.x - bola.radi;
                }


        

        EndDrawing();
    }

    CloseWindow();




    return 0;
}