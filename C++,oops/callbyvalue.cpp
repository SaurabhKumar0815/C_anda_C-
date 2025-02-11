#include <iostream>
using namespace std;

void addTen(int num) {
    num = num + 10;  // Modifies only the local copy
    cout << "Inside function: " << num << endl;
}

int main() {
    int x = 5;
    addTen(x);  // Passes a copy of x
    cout << "Outside function: " << x << endl;  // x is still 5
    return 0;
}
