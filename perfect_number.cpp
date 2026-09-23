#include <bits/stdc++.h>
using namespace std;
bool checkPerfectNumber(int num)
{
    if (num <= 1)
    {
        return false;
    }

    int sum = 1;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
            if (i * i != num)
            {
                sum = sum + (num / i);
            }
        }

        return sum == num;
    }
}
int main()
{

    int num;
    cin >> num;

    bool Value = checkPerfectNumber(num);
    cout << Value;
    return 0;
}