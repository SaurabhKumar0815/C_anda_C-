#include<iostream>
using namespace std;
class Animal{
    public:
    void sleep(){
        cout<<"he is sleeping"<<endl;
    }
    void eat(){
            cout<<"he is eating"<<endl;
        }
    };
    class Dog : public Animal{
        public:
        void bark(){
        cout<<"he is bark";

        }
    };
    int main(){
        Dog dog1;
        dog1.sleep();
        dog1.eat();
        dog1.bark();
    return 0;
    }
