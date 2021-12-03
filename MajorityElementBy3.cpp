#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void majorityElement(vector<int> &nums, vector<int> &ans)
    {
        vector<int> v;
        int n = nums.size();
        unordered_map<int, int> mp;
        for (auto i : nums)
        {
            mp[i]++;
        }

        for (auto i : mp)
        {
            if (i.second > (n / 3))
            {
                ans.push_back(i.first);
            }
        }
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
    vector<int> ans;
    Solution o;
    o.majorityElement(v, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Answers: " << ans[i] << " ";
    }
    return 0;
}