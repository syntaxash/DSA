#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    vector<int> result = intersection(arr1, n, arr2, m);

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}