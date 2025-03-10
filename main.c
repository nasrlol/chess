#include <stdio.h>
#include <raylib.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

union pieces {
    struct {
        void (*move)(struct king *);

        int x_position;
        int y_position;
        int value_points = 20;
    } king;

    struct {
        void (*move)(struct queen *);

        int x_position;
        int y_position;
        int value_points = 6;
    } queen;

    struct {
        void (*move)(struct pawn *);

        int x_position;
        int y_position;
        int value_points = 1;
    } pawn;

    struct {
        void (*move)(struct knight *);

        int x_position;
        int y_position;
        int value_points = 3;
    } knight;

    struct {
        void (*move)(struct rook *);

        int x_position;
        int y_position;
        int value_points = 5;
    } rook;

    struct {
        void (*move)(struct bishop *);

        int x_position;
        int y_position;
        int value_points = 3;
    } bishop;
};

void king_movement(struct king *, int requested[2]);

void queen_movement(struct queen *, int requested[2]);

void pawn_movement(struct pawn *, int requested[2]);

void knight_movement(struct knight *, int requested[2]);

void rook_movement(struct rook *, int requested[2]);

void bishop_movement(struct bishop *, int requested[2]);

void draw_king(struct king *, int requested[2]);

void draw_queen(struct queen *, int requested[2]);

void draw_pawn(struct pawn *, int requested[2]);

void draw_knight(struct knight *, int requested[2]);

void draw_rook(struct rook *, int requested[2]);

void draw_bishop(struct bishop *, int requested[2]);


    // vertical line
}

/*
 * GRID RULES
 * -- 8x8
 * -- first 2 and last 2 rows are occupied by pawns
 */


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
