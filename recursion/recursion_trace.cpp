#include <iostream>
using namespace std;

void f(int n) {
    cout << "enter " << n << "\n";   // runs on the way DOWN
    if (n > 1) f(n - 1);             // descend
    cout << "exit  " << n << "\n";   // runs on the way UP
}

int main() {
    f(3);
}

