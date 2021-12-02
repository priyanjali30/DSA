#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int maxSub(vector<int> v)
    {
        int maxSum = INT_MIN;
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
            maxSum = max(maxSum, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxSum;
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

    cout << "Answer: " << o.maxSub(v);

    return 0;
}