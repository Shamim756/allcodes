#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p;
     cout<<"Enter the main string: ";
     getline(cin,s);
     cout<<"Enter the pattern string: ";
     getline(cin,p);
        size_t found = s.find(p);
        if (found != string::npos) {
            cout << "Pattern found at index: " << found << endl;
        } else {
            cout << "Pattern not found" << endl;
        }
    return 0;
    }