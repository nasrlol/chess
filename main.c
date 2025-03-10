#include <stdio.h>
#include <raylib.h>

struct king;
struct queen;
struct pawn;
struct knight;
struct rook;
struct bishop;


void draw_chess_grid();

int main(void) {
    InitWindow(1024, 768, "chess");
    printf("initialized the window");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
}
