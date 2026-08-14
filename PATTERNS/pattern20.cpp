// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *

#include <iostream>
using namespace std;
class solution
{
public:
    void pattern20(int n)
    {
        int spaces = 2 * n - 2;
        for (int i = 1; i <= 2 * n - 1 ; i++)
        {
            int stars = i;
            if (i > n)
                stars = 2 * n - i;
            for (int j = 1; j <= stars; j++)
            {
                cout << "*" <<" ";
            }
            for (int j = 1; j <= spaces; j++)
            {
                cout << " " <<" ";
            }
            for (int j = 1; j <= stars; j++)
            {
                cout << "*" <<" ";
            }
            cout << endl;
            if (i < n)
                spaces = spaces - 2;
            else
                spaces = spaces + 2;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    solution sol;
    sol.pattern20(n);
    return 0;
}