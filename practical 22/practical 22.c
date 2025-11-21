//practical 22
#include <stdio.h>

int main() {
    int rows = 5, cols = 10;
    char seat[rows][cols];
    int r, c, n;


    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            seat[i][j] = 'O';

    printf("Enter the number of reserved seats: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i + 1);
        scanf("%d %d", &r, &c);

        if (r >= 1 && r <= rows && c >= 1 && c <= cols)
            seat[r - 1][c - 1] = 'X';

        else
            printf("Invalid seat position!\n");
    }



    printf("\nSeating Chart:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < cols; j++)
            printf("%c ", seat[i][j]);
        printf("\n");
    }
printf("maitry chapadia_25ce013");

    return 0;
}
