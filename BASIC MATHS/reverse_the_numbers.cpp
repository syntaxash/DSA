#include <bits/stdc++.h>
using namespace std;
class reversenum
{
public:
    int reversed_num()
    {
        int n;
        cin >> n;
        int revesed_num= 0;
        while (n > 0)
        {
            int digits = n % 10;
            revesed_num=revesed_num*10+digits;
            n = n / 10;
        }
        return revesed_num;
    }
};

int main()
{
    reversenum first;
    cout << "reversed digits are: " << first.reversed_num();
    return 0;
}