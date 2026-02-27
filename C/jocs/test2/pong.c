#include <raylib.h>

void controls(int key, float *posició, float velocitat) {

    if(IsKeyDown(key)) *posició += velocitat;
}

int main(void) {
    
    const int ampladaPantalla = 1000;
    const int alturaPantalla = 500;
    const char títol[] = "Joc del pong";

    InitWindow(ampladaPantalla, alturaPantalla, títol);

    SetTargetFPS(60);

    typedef struct {
        Vector2 posició = {ampladaPantalla / 10, alturaPantalla / 2};
        Vector2 mida = {10, 80};
        const float velocitat = 15};
    } jugador1

    typedef struct jugador2 {
        Vector2 posició = {ampladaPantalla / 10, alturaPantalla / 2};
        Vector2 mida = {10, 80};
        const float velocitat = 15};
    } jugador2

    // Posició i mida jugador
    Vector2 posicióJugador1 = {ampladaPantalla / 10, alturaPantalla / 2};
    Vector2 posicióJugador2 = {ampladaPantalla - (ampladaPantalla / 10), alturaPantalla / 2};
    Vector2 midaJugadors = {10, 80};

    // Velocitat jugadors
    const float velocitatJugadors = 15;

    // Posició i velocitat de la bola
    Vector2 posicióBola = {ampladaPantalla/2, alturaPantalla/2};
    Vector2 velocitatBola = {5, 4};
    const float radiBola = 30.0f;

    while(!WindowShouldClose()){

        // Controls
        controls(KEY_W, &posicióJugador1.y, -velocitatJugadors);
        controls(KEY_S, &posicióJugador1.y, velocitatJugadors);
        controls(KEY_UP, &posicióJugador2.y, -velocitatJugadors);
        controls(KEY_DOWN, &posicióJugador2.y, velocitatJugadors);

        // Moviment bola
        posicióBola.x += velocitatBola.x;
        posicióBola.y += velocitatBola.y;

        // Físiques bola
        if (posicióBola.x >= (ampladaPantalla - radiBola) || posicióBola.x <= radiBola) {
            velocitatBola.x *= -1.0f;
        }
        if (posicióBola.y >= (alturaPantalla - radiBola) || posicióBola.y <= radiBola) {
            velocitatBola.y *= -1.0f;
        }

        BeginDrawing();

        ClearBackground(BLACK);

        //Dibuixar bola
        DrawCircleV(posicióBola, radiBola, WHITE);

        // Dibuixar jugador 1 i 2
        DrawRectangleV(posicióJugador1, midaJugadors, WHITE);
        DrawRectangleV(posicióJugador2, midaJugadors, WHITE);
        

        EndDrawing();
    }

    CloseWindow();




    return 0;
}