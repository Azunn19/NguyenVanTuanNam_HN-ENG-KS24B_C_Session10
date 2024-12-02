#include <stdio.h>
void sapxep(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
void In(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n, m;
    printf("Nhap so dong cua ma tran: ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &m);
    int matrix[100][100];
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sapxep(matrix[i], m);
    }
    printf("Ma tran sau khi sap xep:\n");
    In(matrix, n, m);
    
    return 0;
}

