#include <iostream>
using namespace std;

// Define an inline function
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;

    // Call the inline function
    int result = add(num1, num2);

    cout << "The sum is: " << result << endl;
    
    return 0;
}
