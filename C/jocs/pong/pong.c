#include <stdio.h>
#include <math.h>
#include <raylib.h>

const int ampladaPantalla = 1000;
const int alturaPantalla = 500;

// Struct jugadors (inicialitazció)
typedef struct {
    Vector2 posició;
    Vector2 mida;
    const float velocitat;
    int punts;
    } Jugador;

// Struct bola (inicialitazció)
typedef struct {
    Vector2 posició;
    const float radi;
    Vector2 velocitat;
    Vector2 maxVel;
    } Bola;

void controls(int key, Jugador *p, float velocitat) {
    if(IsKeyDown(key)) {
        p->posició.y += velocitat * GetFrameTime();
    }

    if (p->posició.y < 0) {
        p->posició.y = 0;
    }

    if (p->posició.y > (alturaPantalla - p->mida.y)) {
        p->posició.y = alturaPantalla - p->mida.y;
    }
}

int main(void) {
    
    const char títol[] = "Joc del pong";

    InitWindow(ampladaPantalla, alturaPantalla, títol);

    SetTargetFPS(240);

    // Struct jugador 1
    Jugador j1 = {
        .posició = {ampladaPantalla / 10, alturaPantalla / 2},
        .mida = {10, 80},
        .velocitat = 900,
        .punts = 0
    };

    // Struct jugador 2
    Jugador j2 = {
        .posició = {ampladaPantalla - (ampladaPantalla / 10), alturaPantalla / 2},
        .mida = {10, 80},
        .velocitat = 900,
        .punts = 0
    };

    // Struct bola
    Bola bola = {
        .posició = {ampladaPantalla/2, alturaPantalla/2},
        .radi = 10.0f,
        .velocitat = {300, 200},
        .maxVel = {900, bola.velocitat.y} // La velocitat Y no importa
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
        if (bola.posició.x >= (ampladaPantalla - bola.radi)) { // Dreta
            bola.velocitat.x *= -1.0f;
            j1.punts ++;
            bola.posició = (Vector2){ampladaPantalla/2, alturaPantalla/2};
        }
        else if (bola.posició.x <= bola.radi) { // Esquerra
            bola.velocitat.x *= -1.0f;
            j2.punts ++;
            bola.posició = (Vector2){ampladaPantalla/2, alturaPantalla/2};
        }

        if (bola.posició.y >= (alturaPantalla - bola.radi) || bola.posició.y <= bola.radi) { // Rebotar verticalment
            bola.velocitat.y *= -1.0f;
        }

        BeginDrawing();

                ClearBackground(BLACK);

                //Dibuixar bola
                DrawCircleV(bola.posició, bola.radi, WHITE);

                // Dibuixar jugador 1 i 2
                DrawRectangleV(j1.posició, j1.mida, WHITE);
                DrawRectangleV(j2.posició, j2.mida, WHITE);

                // Col·lisió bola amb jugadors
                if (CheckCollisionCircleRec(bola.posició, bola.radi, (Rectangle){j1.posició.x, j1.posició.y, j1.mida.x, j1.mida.y})){ // Jugador 1
                    // Limitar velocitat
                    if (fabs(bola.velocitat.x) < bola.maxVel.x) {
                        bola.velocitat.x *= -1.05f;
                    }
                    else {
                        bola.velocitat.x *= -1.0f;
                    }
                    bola.posició.x = j1.posició.x + j1.mida.x + bola.radi;
                }
                else if (CheckCollisionCircleRec(bola.posició, bola.radi, (Rectangle){j2.posició.x, j2.posició.y, j2.mida.x, j2.mida.y})){ // Jugador 2
                    // Limitar velocitat
                    if (fabs(bola.velocitat.x) < bola.maxVel.x) {
                        bola.velocitat.x *= -1.05f;
                    }
                    else {
                        bola.velocitat.x *= -1.0f;
                    }
                    bola.posició.x = j2.posició.x - bola.radi;
                }
                printf("\nVelocitat X: %f \nVelocitat Y: %f", bola.velocitat.x, bola.velocitat.y);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}