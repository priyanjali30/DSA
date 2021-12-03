#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    bool search_Matrix(vector<vector<int>> &mat, int target)
    {
        int row = mat.size();
        int col = mat[0].size();

        for (int i = 0; i < row; i++)
        {
            if (mat[i][col - 1] >= target)
            {
                int l = 0;
                int r = col - 1;
                int mid = (l + r) / 2;
                while (l <= r)
                {
                    if (mat[i][mid] == target)
                    {
                        return true;
                    }
                    else if (mat[i][mid] < target)
                    {
                        l = mid + 1;
                    }
                    else
                    {
                        r = mid - 1;
                    }
                }
            }
        }
        return false;
    }
};

int main()
{
    vector<vector<int>> mat;
    mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;

    solution o;
    cout << "Answer:" << o.search_Matrix(mat, target);
    return 0;
}