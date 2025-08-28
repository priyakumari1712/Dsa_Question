#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1,2,3,3,4,5};
    vector<int> b = {3, 3,4,5,6,7};
    vector<int> ans;

    for(int i = 0; i<a.size(); i++){
        for(int j = 0; j<b.size(); j++){
            if(a[i]==b[j]){
                b[j] = -1;
                ans.push_back(a[i]);
            }
        }
    }

    for(int k = 0; k<ans.size(); k++){
        cout<<ans[k]<<",";
    }


    return 0;

}