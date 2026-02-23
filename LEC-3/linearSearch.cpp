#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"target found at index "<<i;
            return 0;
        }
    }
    cout<<"target not found";
}



// TC: O(n)
// SC: O(1)