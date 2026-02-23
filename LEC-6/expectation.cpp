#include <bits/stdc++.h>
using namespace std;

int n;
vector<double> timeTaken;
vector<int> isSuccess;
double p;

double constantPart(int i) {
    if (i == n)
        return 0;

    return p * timeTaken[i] + constantPart(i + 1);
}

double coefficientE(int i) {
    if (i == n)
        return 0;

    if (isSuccess[i] == 0)
        return p + coefficientE(i + 1);
    else
        return coefficientE(i + 1);
}

int main() {
    cin >> n;

    timeTaken.resize(n);
    isSuccess.resize(n);

    for (int i = 0; i < n; i++)
        cin >> timeTaken[i];

    for (int i = 0; i < n; i++)
        cin >> isSuccess[i];

    p = 1.0 / n;

    double constant = constantPart(0);
    double coeff = coefficientE(0);

    double E = constant / (1 - coeff);

    cout << "Expected time = " << E << endl;
    return 0;
}



//TC: O(n)
//SC: O(n)