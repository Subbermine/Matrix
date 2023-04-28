#include <iostream>
using namespace std;
double matrix(int, int);
void print(double[5][5], int, int);
double m2X2(double[5][5], int, int, int, int);
double m3X3(double[5][5], int, int, int, int, int, int);
double m4X4(double[5][5], int, int, int, int, int, int, int, int);
double m5X5(double[5][5], int, int, int, int, int, int, int, int, int, int);
int main()
{
    int row, col;
    cout << "Please enter the number of rows:";
    cin >> row;
    cout << "Please enter the number of columns:";
    cin >> col;
    cout << matrix(row, col);
    return 0;
}
double matrix(int row, int col)
{
    double mat[5][5] = {0};
    if (row == 2 && col == 2)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << "Please enter the a[" << i + 1 << "][" << j + 1 << "] element:";
                cin >> mat[i][j];
            }
        }
        print(mat, row, col);
        return m2X2(mat, 0, 1, 0, 1);
    }
    if (row == 3 && col == 3)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "Please enter the a[" << i + 1 << "][" << j + 1 << "] element:";
                cin >> mat[i][j];
            }
        }
        print(mat, row, col);
        return m3X3(mat, 0, 1, 2, 0, 1, 2);
    }
    if (row == 4 && col == 4)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << "Please enter the a[" << i + 1 << "][" << j + 1 << "] element:";
                cin >> mat[i][j];
            }
        }
        print(mat, row, col);
        return m4X4(mat, 0, 1, 2, 3, 0, 1, 2, 3);
    }
    if (row == 5 && col == 5)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "Please enter the a[" << i + 1 << "][" << j + 1 << "] element:";
                cin >> mat[i][j];
            }
        }
        print(mat, row, col);
        return m5X5(mat, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4);
    }
}
double m2X2(double mat[5][5], int row1, int row2, int col1, int col2)
{
    return mat[row1][col1] * mat[row2][col2] - mat[row1][col2] * mat[row2][col1];
}
double m3X3(double mat[5][5], int row1, int row2, int row3, int col1, int col2, int col3)
{
    return mat[row1][col1] * m2X2(mat, row2, row3, col2, col3) - mat[row1][col2] * m2X2(mat, row2, row3, col1, col3) + mat[row1][col3] * m2X2(mat, row2, row3, col1, col2);
}
double m4X4(double mat[5][5], int row1, int row2, int row3, int row4, int col1, int col2, int col3, int col4)
{
    return mat[row1][col1] * m3X3(mat, row2, row3, row4, col2, col3, col4) - mat[row1][col2] * m3X3(mat, row2, row3, row4, col1, col3, col4) + mat[row1][col3] * m3X3(mat, row2, row3, row4, col1, col2, col4) - mat[row1][col4] * m3X3(mat, row2, row3, row4, col1, col2, col3);
}
double m5X5(double mat[5][5], int row1, int row2, int row3, int row4, int row5, int col1, int col2, int col3, int col4, int col5)
{
    return mat[row1][col1] * m4X4(mat, row2, row3, row4, row5, col2, col3, col4, col5) - mat[row1][col2] * m4X4(mat, row2, row3, row4, row5, col1, col3, col4, col5) + mat[row1][col3] * m4X4(mat, row2, row3, row4, row5, col1, col2, col4, col5) - mat[row1][col4] * m4X4(mat, row2, row3, row4, row5, col1, col2, col3, col5) + mat[row1][col5] * m4X4(mat, row2, row3, row4, row5, col1, col2, col3, col4);
}
void print(double mat[5][5], int row, int col)
{
    if (row == 2 && col == 2)
    {
        cout << "The matrix is:" << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << '|';
            for (int j = 0; j < 2; j++)
            {
                cout << mat[i][j];
            }
            cout << '|' << endl;
        }
    }
    if (row == 3 && col == 3)
    {
        cout << "The matrix is:" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << '|';
            for (int j = 0; j < 3; j++)
            {
                cout << mat[i][j];
            }
            cout << '|' << endl;
        }
    }
    if (row == 4 && col == 4)
    {
        cout << "The matrix is:" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << '|';
            for (int j = 0; j < 4; j++)
            {
                cout << mat[i][j];
            }
            cout << '|' << endl;
        }
    }
    if (row == 5 && col == 5)
    {
        cout << "The matrix is:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << '|';
            for (int j = 0; j < 5; j++)
            {
                cout << mat[i][j];
            }
            cout << '|' << endl;
        }
    }
    cout << "The determinant is:";
}
