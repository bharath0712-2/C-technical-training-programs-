
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int numRows;

    printf("Enter string: ");
    scanf("%s", s);

    printf("Enter number of rows: ");
    scanf("%d", &numRows);

    int len = strlen(s);

    if (numRows == 1 || numRows >= len) {
        printf("Zigzag string: %s\n", s);
        return 0;
    }

    char zigzag[100][100] = {0};

    int row = 0, col = 0;
    int direction = 1;

    for (int i = 0; i < len; i++) {
        zigzag[row][col] = s[i];

        if (row == 0)
            direction = 1;
        else if (row == numRows - 1)
            direction = -1;

        row += direction;

        if (direction == -1 || direction == 1)
            col++;
    }

    printf("Zigzag string: ");

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < len; j++) {
            if (zigzag[i][j] != '\0')
                printf("%c", zigzag[i][j]);
        }
    }

    printf("\n");

    return 0;
}
