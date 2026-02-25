#include <raylib.h>

void controls(int key, float *posició, float velocitat) {

    if(IsKeyDown(key)) *posició += velocitat;
}

int maint(void) {

    const int ampladaPantalla = 500;
    const int alturaPantalla = 500;
    const char títol[] = "Proveta sabrosoneta";

    InitWindow(ampladaPantalla, alturaPantalla, títol);

    SetTargetFPS(60);

    Vector2 posicióBola = {ampladaPantalla/2, alturaPantalla/2};

    const float velocitatBola = 40;

    while(!WindowShouldClose()){

        controls(KEY_A, &posicióBola.x, velocitatBola);
    }




    return 0;
}