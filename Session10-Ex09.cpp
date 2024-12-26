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
    for (int i = 0; i < rows - 1 && i < cols - 1; i++) {
        for (int j = i + 1; j < rows && j < cols; j++) {
            if (matrix[i][i] > matrix[j][j]) {
                int temp = matrix[i][i];
                matrix[i][i] = matrix[j][j];
                matrix[j][j] = temp;
            }
        }
    }
    printf("Ma tran sau khi sap xep cac phan tu tren duong cheo chinh tang dan:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
