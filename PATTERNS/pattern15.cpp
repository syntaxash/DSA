// A B C D E
// A B C D
// A B C
// A B 
// A  

#include <iostream>
using namespace std;
void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char c='A' ; c<='A'+(n-i-1) ;c++)
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