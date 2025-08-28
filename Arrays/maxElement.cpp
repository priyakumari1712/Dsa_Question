#include<bits/stdc++.h>
using namespace std;

int findMaxElement(int arr[][3], int rows, int cols){
    int maxElem = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
          if(arr[i][j]>maxElem){
            maxElem = arr[i][j];
          }
        }
    }
    return maxElem;
}


int main(){
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

    int ans = findMaxElement(arr, rows, cols);
    cout<<ans;
}