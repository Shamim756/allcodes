#include<bits/stdc++.h>
using namespace std;
    int main(){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int t;
        cin>>t;
       
        for(int i=n;i>=k;i--){
            arr[i+1]=arr[i];
        }
        arr[k]=t;
        n=n+1;
        cout<<"New array: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }



// TC: O(n)
// SC: O(1)