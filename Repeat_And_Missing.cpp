#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = 6;
    unordered_map<int, bool> mp;
    for (auto i : arr)
    {
        if (mp.find(i) == mp.end())
        {
            mp[i] = true;
        }
        else
        {
            cout << "Repeating: " << i;
            cout << "\n";
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (mp.find(i) == mp.end())
        {
            cout << "Missing: " << i;
        }
    }
    return 0;
}