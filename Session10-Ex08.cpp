#include <stdio.h>
int main() {
    int matrix[100][100], rows, cols;
    printf("Nhap so dong: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows - 1; i++) {
            for (int k = i + 1; k < rows; k++) {
                if (matrix[i][j] > matrix[k][j]) {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[k][j];
                    matrix[k][j] = temp;
                }
            }
        }
    }
    printf("Ma tran sau khi sap xep tang dan theo tung cot:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
