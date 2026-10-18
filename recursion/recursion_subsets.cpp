#include <iostream>
#include <vector>
using namespace std;

vector<int> a = {1, 2, 3};
vector<int> cur;              // the subset being built

void printCur() {
    cout << "{";
    for (size_t i = 0; i < cur.size(); i++) {
        if (i) cout << ",";
        cout << cur[i];
    }
    cout << "} ";
}

void go(int i) {
    if (i == (int)a.size()) {
        printCur();
        return;
    }
    go(i + 1);                // decision 1: skip a[i]

    cur.push_back(a[i]);      // decision 2: take a[i]
    go(i + 1);
    cur.pop_back();           // undo
}

int main() {
    go(0);
    cout << "\n";
}
