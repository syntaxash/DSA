#include <bits/stdc++.h>
using namespace std;
int consecutive_ones(vector<int> &arr)
{
    int count = 0;
    int maxi = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxi = max(count, maxi);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
}

int main()
{
    int n;

    cin>>n;

    vector<int> arr(n) ;

    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    int result = consecutive_ones(arr);

    cout << result;

    return 0;
}