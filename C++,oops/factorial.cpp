#include <iostream>
using namespace std;
int factorial(int n)
{
  if (n <= 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}
int main()
{
  int a;
  cout << "Enter the number of a ";
  cin >> a;
  cout << "the number a is:" << factorial(a);
  return 0;
}