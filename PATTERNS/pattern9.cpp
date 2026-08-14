// - - - - * - - - -
// - - - * * * - - -
// - - * * * * * - -
// - * * * * * * * -
// * * * * * * * * *
// * * * * * * * * *
// - * * * * * * * -
// - - * * * * * - -
// - - - * * * - - -
// - - - - * - - - -

#include <iostream>
using namespace std;
class solution
{
public:
    void erected_pyramid(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << "-" << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++)
            {
                cout << "*" << " ";
            }
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << "-" << " ";
            }
            cout << endl;
        }
    }
    void inverted_pyramid(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "-" << " ";
            }
            for (int j = 0; j < 2 * n - (2 * i + 1); j++)
            {
                cout << "*" << " ";
            }
            for (int j = 0; j < i; j++)
            {
                cout << "-" << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    solution sol;
    sol.erected_pyramid(n);
    sol.inverted_pyramid(n);
    return 0;
}