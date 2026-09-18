#include <bits/stdc++.h>
using namespace std;
int missing_number(vector<int> &a, int N)
{
    int XOR1 = 0;
    int XOR2 = 0;
    int n = N - 1;
    for (int i = 0; i < n; i++)
    {
        XOR2 = XOR2 ^ a[i];
        XOR1 = XOR1 ^ (i + 1);
    }
    XOR1 = XOR1 ^ N;
    return XOR1 ^ XOR2;
}
int main()
{
    int N;
    cin >> N;

    vector<int> a(N-1);
    for (int i = 0; i < N - 1; i++)
    {
        cin >> a[i];
    }
    
    int num = missing_number(a , N);

    cout<<num;

    return 0;
}