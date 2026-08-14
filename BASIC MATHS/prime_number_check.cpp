#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    if (count == 2||n == 1)
        cout << n << " " << "is a prime nummber";
    else
        cout << n << " " << "is not a prime";

    return 0;
}