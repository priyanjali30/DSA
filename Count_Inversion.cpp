#include <bits/stdc++.h>
using namespace std;

class solution
{

public:
    long long int merge(long long arr[], long long temp[], int left, int mid, int right)
    {
        int i, j, k;
        i = left;
        j = mid;
        k = left;
        long long int count = 0;

        while ((i <= mid - 1) && (j <= right))
        {
            if (arr[i] <= arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];

                count += (mid - i);
            }
        }
        while (i <= mid - 1)
            temp[k++] = arr[i++];

        /* Copy the remaining elements of right subarray
       (if there are any) to temp*/
        while (j <= right)
            temp[k++] = arr[j++];

        /*Copy back the merged elements to original array*/
        for (i = left; i <= right; i++)
            arr[i] = temp[i];

        return count;
    }
    long long int _mergeSort(long long arr[], long long temp[], int left, int right)
    {
        int mid;
        long long int count = 0;
        if (right > left)
        {
            mid = (right + left) / 2;
            count += _mergeSort(arr, temp, left, mid);
            count += _mergeSort(arr, temp, mid + 1, right);
            count += merge(arr, temp, left, mid + 1, right);
        }
        return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {

        long long temp[N];
        return _mergeSort(arr, temp, 0, N - 1);
    }
};

int main()
{
    long long int n = 5;
    long long int arr[] = {2, 4, 1, 3, 5};
    solution o;
    cout << "Answer" << o.inversionCount(arr, n);
    return 0;
}
