// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;
class solution{
    public:
    void pattern6(int n){
        for (int i=0 ; i < n ; i++)
        { 
            for (int j=n ; j > i ; j--)
            {
              cout<<n-j+1<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {
    int n;
    cin>>n;
    solution sol;
    sol.pattern6(n);
    return 0;
}