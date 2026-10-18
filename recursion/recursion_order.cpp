#include <iostream>
using namespace std;

void g(int n) {
    if (n == 0) return;
    g(n - 1);
    cout << n << " ";
}

void h(int n) {
    if (n == 0) return;
    cout << n << " ";
    h(n - 1);
}

int main() {
    cout << "g(4): ";
    g(4);
    cout << "\n";

    cout << "h(4): ";
    h(4);
    cout << "\n";
}
