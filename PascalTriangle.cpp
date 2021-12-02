#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Pascal(int rows, vector<vector<int>> &v)
{

    for (int i = 0; i < rows; i++)
    {
        v[i].resize(i + 1);
        v[i][0] = v[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
        }
    }
    return v;
}
int main()
{
    int n;
    cout << "Num of rows"
         << "\n";
    cin >> n;
    vector<vector<int>> v(n);
    Pascal(n, v);
    for (int i = 0; i < n; i++)
    {
        cout << "1"
             << " ";
        for (int j = 1; j < i; j++)
        {

            cout << v[i][j] << " ";
        }
        cout << "1"
             << " ";
        cout << "\n";
    }

    return 0;
}