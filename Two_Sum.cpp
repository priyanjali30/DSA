#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    vector<int> Two_sum(vector<int> nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};

int main()
{
    int n;
    int input;
    vector<int> nums;
    cout << "Enter the size"
         << "\n";
    cin >> n;
    cout << "Enter the elements"
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        nums.push_back(input);
    }
    int target;
    cout << "Enter the target"
         << "\n";
    cin >> target;
    vector<int> a;
    solution o;
    a = o.Two_sum(nums, target);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
