#include <stdio.h>

int main(){
    int maze[16][16];
    for (int r = 0; r < sizeof(maze)/sizeof(maze[0]); r++){
        for (int c = 0; c < sizeof(maze[0]) / sizeof(maze[0][0]); c++){
            if (c == 0 || r == 0 || c == 15 || r == 15){
                maze[r][c] = 1;
                printf("%d %d\n", r, c);
            } else {
                maze[r][c] = 0;
            }
        }
    }
    for (int r = 0; r < sizeof(maze)/sizeof(maze[0]); r++){
        for (int c = 0; c < sizeof(maze[0]) / sizeof(maze[0][0]); c++){
            printf("%d", maze[r][c]);
        }
        printf("\n");
    }
    return 0;
}