#include <bits/stdc++.h>
using namespace std;

// linear search in 2-D array
bool findElement(int arr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key = 15;
    if (findElement(arr, rows, cols, key))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}