#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout <<i<<" ";
        //   cout<<i<<" "<<"is a divisor"<<endl;
        //   else
        //   cout<<i<<" "<<"this is not divisor of"<<" "<<n<<endl;
    }
    return 0;
}