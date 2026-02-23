#include <bits/stdc++.h>
using namespace std;

int slices(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return slices(n - 1) + n;
}
int main()
{
    int n;
    cin >> n;
    cout << "Number of lines in the plane: " << slices(n) << endl;
}


//TC: O(n)
//SC: O(n)