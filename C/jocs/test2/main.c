#include <raylib.h>

int main(void) {

    const int screenWidth = 400;
    const int screenHeigh = 400;

    InitWindow(screenWidth, screenHeigh, "Bon dia joves");

    SetTargetFPS(60);

    Vector2 ballPosition = {screenHeigh/2, screenHeigh/2};
    const float ballSpeed = 4.0f;

    while(!WindowShouldClose()) {

        if (IsKeyDown(KEY_LEFT)) ballPosition.x -= ballSpeed;
        if (IsKeyDown(KEY_RIGHT)) ballPosition.x += ballSpeed;
        if (IsKeyDown(KEY_DOWN)) ballPosition.y += ballSpeed;
        if (IsKeyDown(KEY_UP)) ballPosition.y -= ballSpeed;

        BeginDrawing();

            ClearBackground(WHITE);

            DrawCircleV(ballPosition, 40, RED);
        
        EndDrawing();

    }

    CloseWindow();


    return 0;
}
