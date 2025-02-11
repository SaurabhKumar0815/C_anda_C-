#include <iostream>
#include <stdexcept>  // For standard exception types

using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division by zero is not allowed!");  // Throw exception if b is zero
    }
    return a / b;
}

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    try {
        int result = divide(num1, num2);  // Call divide function
        cout << "Result of division: " << result << endl;
    } catch (const runtime_error& e) {  // Catch exception of type runtime_error
        cout << "Error: " << e.what() << endl;  // Print error message
    }
    
    return 0;
}
