#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i=0;i<=n;i++){
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }

        for (int k=0;k<2*(n-i)-1;k++) {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
