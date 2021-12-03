#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    void Merge2Arrays(vector<int> &nums1, vector<int> &nums2, int m, int n)
    {
        while (m > 0 && n > 0)
        {
            if (nums1[m - 1] < nums2[n - 1])
            {
                nums1[m + n - 1] = nums2[n - 1];
                n--;
            }
            else
            {
                nums1[m + n - 1] = nums1[m - 1];
                m--;
            }
        }
        while (n > 0)
        {
            nums1[n - 1] = nums2[n - 1];
            n--;
        }
    }
};

int main()
{
    int n1, n2;
    vector<int> v1;
    vector<int> v2;
    cout << "Enter the size of first array: "
         << "\n";
    cin >> n1;
    cout << "Enter the size of second array: "
         << "\n";
    cin >> n2;

    cout << "Enter the Elements of first array: "
         << "\n";
    int input1, input2;
    for (int i = 0; i < n1; i++)
    {
        cin >> input1;
        v1.push_back(input1);
    }

    cout << "Enter the Elements of second array: "
         << "\n";

    for (int i = 0; i < n2; i++)
    {
        cin >> input2;
        v2.push_back(input2);
    }
    solution o;
    o.Merge2Arrays(v1, v2, n1, n2);
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << v1[i] << " ";
    }
    cout << "\n";
}