#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dup = n;
    int reversed_num = 0;
    while (n > 0)
    {
        int digits = n % 10;
        reversed_num = reversed_num * 10 + digits;
        n = n / 10;
    }
    if (reversed_num == dup)
        cout << "IT IS A PLAINDRONE";
    else
        cout << "NOT A PALINDROME";

    return 0;
}