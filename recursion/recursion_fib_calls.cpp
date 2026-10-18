#include <iostream>
using namespace std;

long long calls = 0;

int fib(int n) {
    calls++;
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    for (int n : {6, 10, 20, 30}) {
        calls = 0;
        int v = fib(n);
        cout << "fib(" << n << ") = " << v
             << "   calls = " << calls << "\n";
    }
}
