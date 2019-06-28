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

void inputMatrix(int row, int col, int mat[row][col])
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("Matrix[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void transpose_firstWay(int m, int arr[m][m]){
    int i, j;
    int temp[m][m];

    for(i=0; i<m; i++){
        for(j=0; j<m; j++){
            temp[i][j] = arr[j][i];
        }
    }
    printMatrix(m,m,temp);
}

void transpose_second(int m, int arr[m][m]){
    int i, j;
    for(i=0; i<m; i++){
        for(j=i+1; j<m; j++){
            int t = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = t;
        }
    }

    printMatrix(m,m,arr);
}


void sumMatrix(int row, int col, int sum[row][col], int a[row][col], int b[row][col])
{
    int i, j;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            sum[i][j] = a[i][j]+b[i][j];
        }
    }
    printMatrix(row, col, sum);
}

int diagonalSum(int row, int matrix[row][row])
{
    int i, j, sum=0;

    for(i=0; i<row; i++)
    {
        for(j=0; j<row; j++)
        {
           if(i==j){
            sum = sum+matrix[i][j];
           }
        }
    }

    return sum;
}

int main()
{
    int m, n;
    printf("Enter row and column: ");
    scanf("%d%d", &m, &n);
    int matrix1[m][n], matrix2[m][n], sum[m][n];

    inputMatrix(m, n, matrix1);
    printMatrix(m,n, matrix1);
    inputMatrix(m, n, matrix2);
    printMatrix(m,n, matrix2);

    transpose_firstWay(m, matrix1);
    transpose_second(m, matrix1);
    int d_sum = diagonalSum(m, matrix1);
    printf("Diagonal sum: %d", d_sum);


}
