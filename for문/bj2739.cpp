#include <iostream>
using namespace std;

int main() {
    short x;
    
    cin>>x;

    for(int i = 1; i <= 9; i++) {
        cout<<x<<" * "<<i<<" = "<<x*i<<endl;
    }
    return 0;
}