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

    // Posició i mida jugador
    Vector2 posicióJugador1 = {ampladaPantalla / 10, alturaPantalla / 2};
    Vector2 posicióJugador2 = {ampladaPantalla - (ampladaPantalla / 10), alturaPantalla / 2};
    Vector2 midaJugadors = {10, 80};

    // Velocitat jugadors
    const float velocitatJugadors = 15;

    // Posició i velocitat de la bola
    Vector2 posicióBola = {ampladaPantalla/2, alturaPantalla/2};
    const Vector2 velocitatBola = {5, 4};

    while(!WindowShouldClose()){

        // Controls
        controls(KEY_W, &posicióJugador1.y, -velocitatJugadors);
        controls(KEY_S, &posicióJugador1.y, velocitatJugadors);
        controls(KEY_UP, &posicióJugador2.y, -velocitatJugadors);
        controls(KEY_DOWN, &posicióJugador2.y, velocitatJugadors);

        // Moviment bola
        posicióBola.x += velocitatBola.x;
        posicióBola.y += velocitatBola.y;

        BeginDrawing();

        ClearBackground(BLACK);

        //Dibuixar bola
        DrawCircleV(posicióBola, 40, WHITE);

        // Dibuixar jugador 1 i 2
        DrawRectangleV(posicióJugador1, midaJugadors, WHITE);
        DrawRectangleV(posicióJugador2, midaJugadors, WHITE);
        

        EndDrawing();
    }

    CloseWindow();




    return 0;
}