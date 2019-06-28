#include<stdio.h>

void printMatrix(int row, int col, int arr[row][col])
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}

void inputMatrix(int row, int col, int mat[row][col]){
    int i, j;
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("Matrix[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}


void sumMatrix(int row, int col, int sum[row][col], int a[row][col], int b[row][col]){
    int i, j;

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            sum[i][j] = a[i][j]+b[i][j];
        }
    }
    printMatrix(row, col, sum);
}

int main(){
    int m, n;
    printf("Enter row and column: ");
    scanf("%d%d", &m, &n);
    int matrix1[m][n], matrix2[m][n], sum[m][n];

    inputMatrix(m, n, matrix1);
    printMatrix(m,n, matrix1);
    inputMatrix(m, n, matrix2);
    printMatrix(m,n, matrix2);

    sumMatrix(m,n,sum,matrix1,matrix2);


}
