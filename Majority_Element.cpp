#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int n = nums.size();
        int m = floor(n / 2);

        for (int i : nums)
        {
            if (mp.find(i) != mp.end())
            {
                mp[i]++;
            }
            else
            {
                mp[i] = 1;
            }
        }
        for (int i : nums)
        {
            if (mp[i] > m)
                return i;
        }
        return 0;
    }
};

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size: "
         << "\n";
    cin >> n;
    int input;
    cout << "Enter the elements: "
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }

    Solution o;
    cout << "Answer: " << o.majorityElement(v);
    return 0;
}