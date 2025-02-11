#include<iostream>
using namespace std;
int main (){

   char op;
   int num1 ,num2;
   cout<<"Enter operater : +,-,*,/";
   cin>>op;
   cout<<"Enter the two operands :"<<endl;
   cin >> num1>>num2;
   switch (op)
  {
    case '+':
    cout <<num1 <<"+"<<num2 <<"="<<num1+num2;
    break;

    case '-':
    cout<<num1 <<"-"<<num2 <<"="<<num1 -num2;
    break;

    case '*':
    cout<<num1 <<"*"<<num2 <<"="<<num1 * num2;
    break;

    case '/':
    cout<<num1 <<"/"<< num2 << " ="<<num1 /num2;
    break;

    defualt:
    cout<< "Earrer ! operater is not correct ";
    break;
    }  return 0;
}