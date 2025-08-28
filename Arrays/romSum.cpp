#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print row-wise
    //  for(int i = 0; i<2; i++){
    //      int sum = 0;
    //     for(int j = 0; j<2; j++){
    //         sum = sum + arr[i][j];

    //     }
    //     cout<<"printing row sum";
    //     cout<<sum;
    //     cout<<endl;
    // }

    // print colume-wise sum
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum = sum + arr[j][i];
        }

        cout << sum;
        cout << endl;
    }
}