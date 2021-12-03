#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    void rotate_Matrix(vector<vector<int>> &ans, int r, int c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(ans[i][j], ans[j][i]);
            }
        }
        for (int i = 0; i < r; i++)
        {
            reverse(ans[i].begin(), ans[i].end());
        }
    }
};

int main()
{
    vector<vector<int>> ans;
    int input;
    int r, c;
    cout << "Enter the size of the rows: "
         << "\n";
    cin >> r;
    cout << "Enter the size of the columns: "
         << "\n";
    cin >> c;
    for (int i = 0; i < r; i++)
    {
        vector<int> v;
        for (int j = 0; j < c; j++)
        {
            cin >> input;
            v.push_back(input);
        }
        ans.push_back(v);
    }
    solution o;
    o.rotate_Matrix(ans, r, c);
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}