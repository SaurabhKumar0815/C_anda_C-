#include <iostream>
using namespace std;

void addTen(int &num) {
    num = num + 10;  // Modifies the actual argument
    cout << "Inside function: " << num << endl;
}

int main() {
    int x = 5;
    addTen(x);  // Passes the reference of x
    cout << "Outside function: " << x << endl;  // x is now 15
    return 0;
}
