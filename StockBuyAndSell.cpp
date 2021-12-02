#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int maxProfi(vector<int> &v)
    {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for (int i = 0; i < v.size(); i++)
        {
            minPrice = min(minPrice, v[i]);
            maxProfit = max(maxProfit, v[i] - minPrice);
        }
        return maxProfit;
    }
};

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size"
         << "\n";
    cin >> n;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    solution o;
    cout << o.maxProfi(v);
    return 0;
}