#include <bits/stdc++.h>
using namespace std;
int duplicate_elemnts(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[j] != arr[i])
            {
                arr[i + 1] = arr[j];
                i++;
            }
        }
        return (i + 1);
    }
}
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k = duplicate_elemnts(arr, n);

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}