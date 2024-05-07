#include <stdio.h>
#include <stdlib.h>

void draw(int n);

int main(int argc, char **argv) {
    if (argc == 2) {
        int rows = atoi(argv[1]);
        printf("Program Name: %s\n", argv[0]);
        draw(rows);
    } else {
        printf("Please provide a single integer as an argument.\n");
    }
    return 0;
}

void draw(int n) { 
    if (n <= 0) {
        return;
    }
    draw(n - 1);

    for (size_t i = 0; i < n; i++) {
        printf("#");
    }
    printf("\n");
}
