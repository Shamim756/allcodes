#include <bits/stdc++.h>
using namespace std;

int main() {
    string T, P;
    
    cout << "Enter the text (T): ";
    getline(cin, T);

    cout << "Enter the pattern (P): ";
    getline(cin, P);

    int S = T.length();
    int R = P.length();

    int K = 0;                 
    int MAX = S - R + 1;
    int INDEX = 0;

    while (K < MAX) {

        int L;
        for (L = 0; L < R; L++) {
            if (P[L ] != T[K + L]) {
                break; 
            }
        }

        if (L == R) {           
            INDEX = K;
            cout << "Pattern found at index : " << INDEX << endl;
            return 0;
        }

        K++;                 
    }

    INDEX = 0;                
    cout << "Pattern not found. INDEX = " << INDEX << endl;

    return 0;
}
