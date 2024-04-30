#include <stdio.h>
#include "raylib.h"

int main(void) {
    int screenWidth = 1280;
    int screenHeight = 720;
    int circleRadius = 30;

    InitWindow(screenWidth, screenHeight, "Bounce ball");
    SetTargetFPS(60);

    Vector2 circlePosition = {screenWidth / 2, screenHeight / 2};
    Vector2 circleVelocity = {2, 2};

    while (!WindowShouldClose()) {
        ClearBackground(BLACK);

        BeginDrawing();
            if (circlePosition.y + circleRadius >= screenHeight) {
                circleVelocity.y *= -1;
            }
            circlePosition.y += circleVelocity.y;
            DrawCircleV(circlePosition, circleRadius, WHITE);
        EndDrawing();
    }
}