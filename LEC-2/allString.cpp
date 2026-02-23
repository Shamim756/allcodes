#include<bits/stdc++.h>
using namespace std;
  int main(){
    string s="this a simple operation of all string functions";
    string t="example";
    cout<<"Length of String: "<<s.length()<<endl;
    cout<<"Substring from index 10 of length 7: "<<s.substr(10,7)<<endl;
    cout<<"Original String: "<<s<<endl;
    cout<<"Concatenated String: "<<s + " " + t<<endl;
    cout<<"Length of String: "<<s.length()<<endl;
    cout<<"String after append: "<<s.append(" in C++")<<endl;
    cout<<"String after insert: "<<s.insert(5,"is ")<<endl;
    cout<<"String after erase: "<<s.erase(5,3)<<endl;
    cout<<"String after replace: "<<s.replace(7,6,"complex ")<<endl;
    cout<<"Substring from index 10 of length 7: "<<s.substr(7,7)<<endl;
    cout<<"Find 'string' in the string at index: "<<s.find("string")<<endl;
    cout<<"Character at index 2: "<<s.at(2)<<endl;
    cout<<"First character: "<<s.front()<<endl;
    cout<<"Last character: "<<s.back()<<endl;
    cout<<"String after clear: ";
    cout<<s+t;
    s.clear();
    cout<<s<<endl;
  }

  