// #include <iostream>
// using namespace std;
// 
// int fib(int n){
//     if (n <= 1) return n;
// 
//     return fib(n-1)+ fib(n-2);
// 
//     
// }
// int main(){
//     cout<<fib(6)<<" ";
// }
// 
// #include <iostream>
// using namespace std;
// 
// long long calls = 0;          // global counter
// 
// int fib(int n) {
//     calls++;                  // count every entry
//     if (n <= 1) return n;
//     return fib(n - 1) + fib(n - 2);
// }
// 
// int main() {
//     for (int n : {6, 10, 20, 30}) {
//         calls = 0;
//         int v = fib(n);
//         cout << "fib(" << n << ") = " << v
//              << "   calls = " << calls << "\n";
//     }
// }
// 
#include<iostream>
using namespace std;
long long calls = 0;
int memo[1000];                       // memo[k] = fib(k) once known, else -1

int fib(int n) {
    calls++;
    if (n <= 1) return n;             // base case
    if (memo[n] != -1) return memo[n]; // already solved → reuse
    return memo[n] = fib(n-1) + fib(n-2); // solve once, STORE it
}
int main(){
    cout<<fib(30)<<" ";
}