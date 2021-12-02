#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void sortcolors(vector<int> &nums)
    {
        int c_0 = 0, c_1 = 0, c_2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            switch (nums[i])
            {
            case 0:
                c_0++;
                break;
            case 1:
                c_1++;
                break;
            case 2:
                c_2++;
                break;
            }
        }

        int j = 0;
        while (c_0 > 0)
        {
            nums[j++] = 0;
            c_0--;
        }
        while (c_1 > 0)
        {
            nums[j++] = 1;
            c_1--;
        }
        while (c_2 > 0)
        {
            nums[j++] = 2;
            c_2--;
        }
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
    o.sortcolors(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}