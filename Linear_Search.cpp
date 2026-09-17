#include <bits/stdc++.h>
using namespace std;

int check_num(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;

    cout<<check_num(arr,n,num);
    
  return 0;
}