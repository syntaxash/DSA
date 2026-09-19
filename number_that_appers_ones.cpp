#include <bits/stdc++.h>
using namespace std;
int appears_ones(vector<int> &arr)
{
    int XOR = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        XOR = XOR ^ arr[i];
    }
    return XOR;
}
int main()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n ; i++ )
    {
        cin >> arr[i];
    }

    cout<<appears_ones(arr);

    return 0;
}