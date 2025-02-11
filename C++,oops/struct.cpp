#include<iostream>
using namespace std;
struct emp{
    int eid;
    float salary;
};
  int main(){
    struct emp abhi;
    abhi.eid = 23103211;
    
    abhi.salary = 43.34;

    cout<<"the emp eid is:-"<<abhi.eid<<endl;
   
   cout<<"the emp salary is:-"<<abhi.salary<<endl;
   return 0;
  }