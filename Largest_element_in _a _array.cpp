#include <bits/stdc++.h>
using namespace std;
int largest_element(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;
    cin >> n;

    vetcor<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << largest_element(arr, n);

    return 0;
}