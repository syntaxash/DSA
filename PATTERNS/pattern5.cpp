// * * * * *
// * * * *
// * * *
// * *
// *  

#include <iostream>
using namespace std;
class solution{
    public:
    void pattern5(int n)
    {
        for (int i=0 ; i < n ; i++)
        {
            for (int j=n ; j > i ; j--)
            {
             cout<<"* ";
            }
            cout<<endl;
        }
    }
 };

int main() {
    int n;
    cin>>n;
    solution sol;
    sol.pattern5(n);
    return 0;
}