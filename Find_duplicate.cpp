#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int duplicate(vector<int> v)
    {
        int n = v.size();
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1] == v[i])
            {
                return v[i];
            }
        }
        return -1;
    }
};

int main()
{
    int n;
    vector<int> v;
    cout << "Enter the size: "
         << "\n";
    cin >> n;
    cout << "Enter the elements: "
         << "\n";
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    solution o;
    cout << "Result :" << o.duplicate(v);
    return 0;
}