// A
// B B
// C C C
// D D D D
// E E E E E

#include <iostream>
using namespace std;
void pattern14(int n){
    for(int i=0;i<n;i++){
        char c='A'+i;
        for (int j=0 ; j<=i ; j++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    pattern14(n);
    return 0;
}