#include <raylib.h>

void controls(int key, float *posició, float velocitat) {

    if(IsKeyDown(key)) *posició += velocitat;
}

int main(void) {

    const int ampladaPantalla = 500;
    const int alturaPantalla = 500;
    const char títol[] = "Proveta sabrosoneta";

    InitWindow(ampladaPantalla, alturaPantalla, títol);

    SetTargetFPS(60);

    Vector2 posicióBola = {ampladaPantalla/2, alturaPantalla/2};

    const float velocitatBola = 40;

    while(!WindowShouldClose()){

        controls(KEY_A, &posicióBola.x, velocitatBola);
        controls(KEY_D, &posicióBola.x, -velocitatBola);
        controls(KEY_W, &posicióBola.y, velocitatBola);
        controls(KEY_S, &posicióBola.y, -velocitatBola);

        BeginDrawing();

        DrawCircleV();
    }

    CloseWindow();




    return 0;
}