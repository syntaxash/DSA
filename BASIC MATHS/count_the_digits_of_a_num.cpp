#include <bits/stdc++.h>
using namespace std;
class count_num
{
public:
    void count_the_digits(void)
    {
        int n;
        cin >> n;
        int count = 0;
        while (n > 0)
        {
            int digits= n % 10;
            n=n/10;
            count++;
        }
        cout << count;
    }
};

int main()
{
    count_num first;
    cout << "Total number of digits are:";
    first.count_the_digits();
    return 0;
}