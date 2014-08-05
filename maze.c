#include <stdio.h>
#include "maze.h"

int maze[MAX_ROW][MAX_COL] = {
	0, 1, 0, 0, 0,
	0, 1, 0, 1, 0,
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 1, 0,
};


void print_maze(void){
	int i, j;
	printf("max row = %d, max col = %d\n", MAX_ROW, MAX_COL);
	for( i = 0; i < MAX_ROW; i++){
		for( j = 0; j < MAX_COL; j++){
			//printf("%d-%d\n", i,j);
			printf("%d ", maze[i][j]);
		}
		putchar('\n');
	}
	printf("*************************\n");
}
