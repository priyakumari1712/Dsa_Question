#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int>arr = {2,3,5,7};
    int sizea = 4;
    vector<int>brr = {1,4,6,8,11};
    int sizeb = 5;
    vector<int>ans;

    for(int i = 0; i<sizea; i++){
        ans.push_back(arr[i]);
    }

    for(int i = 0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }





}