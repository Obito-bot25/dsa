#include <iostream>
using namespace std;

void m(int n) {
    if (n == 0) return;
    cout << "down " << n << " ";
    m(n - 1);
    cout << "up " << n << " ";
}

int main() {
    m(3);
    cout << "\n";
}
