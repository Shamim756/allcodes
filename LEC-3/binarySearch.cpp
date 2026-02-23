#include<bits/stdc++.h>
using namespace std;
    int main(){
        int n,target;
        cin>>n>>target;
       int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
      
        int l=0,r=n-1;
      
        while(l<=r){
             int mid=(l+r)/2; 
            if(arr[mid]==target){
                cout<<"target found at index "<<mid;
                return 0;
            }
            else if(arr[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
    }
        cout<<"target not found";
}



// TC: O(log n)
// SC: O(1)