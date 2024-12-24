/* Create a program for matrix operations (addition) */

#include <iostream>
using namespace std;

const int M = 2;
const int N = 2;

void printMatrix(int matrix[][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int matrix1[][N], int matrix2[][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrix1[i][j] += matrix2[i][j];
        }
    }
}

int main()
{
    int matrix1[M][N] = {{1, 2}, {3, 4}};
    int matrix2[M][N] = {{5, 6}, {7, 8}};

    cout << "Matrix 1:" << endl;
    printMatrix(matrix1);
    cout << "Matrix 2:" << endl;
    printMatrix(matrix2);

    addMatrices(matrix1, matrix2);

    cout << "Sum of Matrices:" << endl;
    printMatrix(matrix1);

    return 0;
}
