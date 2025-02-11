#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"he is eat";
    }
    void sleep(){
        cout<<"he is sleep";
    }
   };
    class Dog: public Animal{
        public:
        void bark(){
            cout<<"he can bark";
        }
    };
    int main(){
       Dog dog1;
       dog1.eat();
       dog1.sleep();
       dog1.bark();
        
        return 0;
    }
