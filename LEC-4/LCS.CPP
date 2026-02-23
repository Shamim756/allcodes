#include <bits/stdc++.h>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int n = A.size();
    int m = B.size();

    // DP table
    vector<vector<int>> L(n + 1, vector<int>(m + 1, 0));

      for (int i = 0; i <= n; i++) L[i][0] = 0;
    for (int j = 0; j <= m; j++) L[0][j] = 0;


/*Base case --> same work as above...

int L[n + 1][m + 1];  // 2D DP table

    for (int i = 0; i <= n; i++)
        L[i][0] = 0;

    for (int j = 0; j <= m; j++)
        L[0][j] = 0;*/




    // Build the DP table (same as pseudocode)
  

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (A[i - 1] == B[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    // LCS length
    cout << "LCS Length = " << L[n][m] << endl;

    // === Reconstruct LCS string ===
    int i = n, j = m;
    string lcs = "";

    while (i > 0 && j > 0) {
        // If characters match → part of LCS
        if (A[i - 1] == B[j - 1]) {
            lcs += A[i - 1];  // or B[j-1]
            i--;
            j--;
        }
        // Move to the direction of the larger value
        else if (L[i - 1][j] >= L[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    // LCS is built backwards → reverse it
    reverse(lcs.begin(), lcs.end());

    cout << "LCS = " << lcs << endl;

    return 0;
}



//TC: O(n*m)
//SC: O(n*m)