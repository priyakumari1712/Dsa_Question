#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {10,20,30,40};

    // print all the pairs of an array
    // for(int i = 0; i<arr.size(); i++){
    //     int element = arr[i];
    //     for(int j = i+1; j<arr.size(); j++){
    //         cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    //     }
    // }


    //print  The pairs which give remainder 3 
    // for(int i = 0; i<arr.size(); i++){
    //     int element = arr[i];
    //     for(int j = i+1; j<arr.size(); j++){
    //         if(element%arr[j]==3){
    //             cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    //         }
    //     }
    // }


    //print all the triplet of an array
    // for(int i = 0; i<arr.size(); i++){
    //     int element = arr[i];
    //     for(int j = i+1; j<arr.size(); j++){
    //         for(int k = j+1; k<arr.size(); k++){
    //             cout<<"("<<element<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
    //         }
            
    //     }
    // }

   // print all the triplet sum of an array
   int sum = 80;
    for(int i = 0; i<arr.size(); i++){
        int element = arr[i];
        for(int j = i+1; j<arr.size(); j++){
            for(int k = j+1; k<arr.size(); k++){
                if(element+arr[j]+arr[k]==80){
                    cout<<"("<<element<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                }
                
            }
            
        }
    }

}