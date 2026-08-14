#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dup = n;
    int armstrong_number=0;
    while (n != 0)
    {
        int digits = n % 10;
        int armstrong_digit = digits * digits * digits;
        n = n / 10;
        armstrong_number=armstrong_number+armstrong_digit;
    }

    if(armstrong_number==dup)
    cout<<armstrong_number<<" "<<"is a armstrong";
    else
    cout<<dup<<" " <<"is not a armstrong number";

    return 0;
}