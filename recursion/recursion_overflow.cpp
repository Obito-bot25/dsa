#include <iostream>
using namespace std;

// No base case: nothing ever tells the recursion to stop.
int f(int n) {
    return 1 + f(n + 1);   // non-tail, so it can't be optimized into a loop
}

int main() {
    cout << f(0) << "\n";
}
