#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define ROW 100
#define COL 100

void in_array(int arr[][COL], int &row, int &col);
void out_array(int arr[][COL], int row, int col);
void sum_col(int a[][COL], int row);
void sum_row(int a[][COL], int col);

int main()
{
    int arr[ROW][COL];
    int row, col;

    in_array(arr, row, col);
    out_array(arr, row, col);

    sum_col(arr, row);
    sum_row(arr, col);

    return 0;
}

void in_array(int a[][COL], int &row, int &col)
{
    cout << "Enter the amount of row: ";
    cin >> row;
    cout << "Enter the amount of column: ";
    cin >> col;

    srand(time(NULL));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = rand() % 100;
        }
    }
}

void out_array(int a[][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void sum_row(int a[][COL], int col)
{
    int irow, sum = 0;
    cout << "Enter the row want to calculate the sum: ";
    cin >> irow;

    for (int i = 0; i < col; i++)
    {
        sum += a[irow][i];
    }

    cout << "Sum of row = " << sum << endl;
}

void sum_col(int a[][COL], int row)
{
    int icol, sum = 0;
    cout << "Enter the column want to calculate the sum: ";
    cin >> icol;

    for (int i = 0; i < row; i++)
    {
        sum += a[i][icol];
    }

    cout << "Sum of column: " << sum << endl;
}