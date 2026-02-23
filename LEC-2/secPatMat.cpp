#include<bits/stdc++.h>
using namespace std;


void countLps(string p, vector<int>& lps){
    int m=p.length();
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<m){
        if(p[i]==p[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}



    void kmp(string s, string p){
int n=s.length();
int m=p.length();
vector<int> lps(m);
countLps(p,lps);
int i=0;
int j=0;
while(i<n){
    if(p[j]==s[i]){
        i++;
        j++;
    }
    if(j==m){
        cout<<"pattern found at index: "<<i-j<<endl;
        j=lps[j-1];
        return;
    }
    else if(i<n && p[j]!=s[i]){
        if(j!=0){
            j=lps[j-1];
        }
        else{
            i++;
        }
    }
  }
cout<<"pattern not found"<<endl;

}



int main(){
    string s,p;
    cout<<"Enter the main string: ";
    getline(cin,s);
    cout<<"Enter the pattern string: ";
    getline(cin,p);
    kmp(s,p);
    return 0;
}