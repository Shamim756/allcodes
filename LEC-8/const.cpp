#include<bits/stdc++.h>
using namespace std;
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int main(){
    int x=100;
    int *const a = &x;
    cout<<*a<<endl;
    x=200;
    cout<<*a;
    int (*funcPtr)(int,int);
    funcPtr=add;
    cout<<endl<<funcPtr(10,20);
    funcPtr=sub;
    cout<<endl<<funcPtr(10,20);
    return 0;
}