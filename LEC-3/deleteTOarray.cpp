#include<bits/stdc++.h>
using namespace std;
    int main(){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       
        for(int i=k;i<n-1;i++){
            arr[i]=arr[i+1];
        }
       
        n=n-1;
        cout<<"New array: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }



// TC: O(n)
// SC: O(1)