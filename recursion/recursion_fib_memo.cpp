#include <iostream>
#include <algorithm>   // for fill
using namespace std;

long long calls = 0;
int memo[1000];                         // memo[k] = fib(k) once known, else -1

int fib(int n) {
    calls++;
    if (n <= 1) return n;               // base case
    if (memo[n] != -1) return memo[n];  // already solved -> reuse
    return memo[n] = fib(n - 1) + fib(n - 2); // solve once, STORE it
}

int main() {
    for (int n : {6, 10, 20, 30}) {
        fill(memo, memo + 1000, -1);    // fresh memo for a fair count
        calls = 0;
        cout << "fib(" << n << ") = " << fib(n)
             << "   calls = " << calls << "\n";
    }
}
