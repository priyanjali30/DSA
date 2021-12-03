#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int N = m + n - 2;
        int r = m - 1;
        double res = 1;
        for (int i = 1; i <= r; i++)
        {
            res = res * (N - r + i) / i;
        }
        return (int)res;
    }
};

int main()
{
    int n, m;
    cout << "Enter the value of m: "
         << "\n";
    cin >> m;
    cout << "Enter the value of n: "
         << "\n";
    cin >> n;
    Solution o;

    cout << "Answer: " << o.uniquePaths(m, n);
    return 0;
}