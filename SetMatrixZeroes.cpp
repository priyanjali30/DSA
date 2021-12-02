#include <bits/stdc++.h>
using namespace std;

void setZero(vector<vector<int>> &matrix)
{

    int row_size = matrix.size();
    int col_size = matrix[0].size();
    unordered_set<int> r;
    unordered_set<int> c;
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            if (matrix[i][j] == 0)
            {
                r.insert(i);
                c.insert(j);
            }
        }
    }
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            if (r.find(i) != r.end() || c.find(j) != c.end())
            {
                matrix[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> matrix{
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    setZero(matrix);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}