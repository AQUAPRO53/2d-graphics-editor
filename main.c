#include <stdio.h>
#define WIDTH 40
#define HEIGHT 20

char canvas[HEIGHT][WIDTH];

void initCanvas() {
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            canvas[i][j] = '_';
        }
    }
}

void displayPicture() {
    printf("\033[H\033[J"); // Clears screen
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            printf("%c ", canvas[i][j]);
        }
        printf("\n");
    }
}

int main() {
    initCanvas();
    displayPicture();
    printf("\nCanvas loaded successfully!\n");
    return 0;
}