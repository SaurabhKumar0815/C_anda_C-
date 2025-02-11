#include<iostream>
#include<string>
using namespace std;
int main(){

    string car[5];
    car[0] = "toyata";
    car[1] = "tata";
    car[2] = "Bmw";
    car[3] = "mustang gt";
    car[4] = "rolls royace";
    for( int i = 0; i< 5 ; i++)
    cout<<car[i]<<"\n";
    cout<<"all cars sell for low price"<<car<<endl;
    return 0;

}
