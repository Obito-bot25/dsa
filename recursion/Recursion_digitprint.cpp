#include <iostream>
using namespace std;

void printdigits(int n){
    if ( n < 10){
        cout<<n<<" ";
        return;
    }

    
    printdigits(n/10);
    cout<< n%10 << " ";
    
}
int main(){
    printdigits(507);
    printdigits(7);
    printdigits(0);
}