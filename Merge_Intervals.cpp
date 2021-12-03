#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    vector<vector<int>> Merge_Intervalsx(vector<vector<int>> &intervals, int r, int c, vector<vector<int>> &a)
    {
        sort(intervals.begin(), intervals.end());
        if (intervals.size() == 0)
        {
            return a;
        }
        vector<int> temp = intervals[0];
        for (auto it : intervals)
        {
            if (it[0] <= temp[1])
            {
                temp[1] = max(it[1], temp[1]);
            }
            else
            {
                a.push_back(temp);
                temp = it;
            }
        }
        //Last resultant interval
        a.push_back(temp);
        return a;
    }
};

int main()
{
    vector<vector<int>> ans;
    vector<vector<int>> a;
    int input;
    int r, c;
    cout << "Enter the size of the rows: "
         << "\n";
    cin >> r;
    cout << "Enter the size of the columns: "
         << "\n";
    cin >> c;
    cout << "Enter the values: "
         << "\n";
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
    o.Merge_Intervalsx(ans, r, c, a);
    cout << "Results: "
         << "\n";
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}