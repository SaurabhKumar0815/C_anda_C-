//arithmatics operaters
/*#include<iostream>
using namespace std;
int main()
{
    int a = 4 , b = 2;
    cout<<"sum = " << (a+b) <<endl;
    cout<<"difrence = " << (a-b) <<endl;
    cout<<"multiply = " << (a*b) <<endl;
    cout<<"devision = " << (a/b) <<endl;
    cout<<"modulo = " << (a%b) <<endl;

    return 0;
}*/

//relational operaters.

/*#include<iostream>
using namespace std;
int main(){

    cout<< (5<6) <<endl;  //ans :- true->  1
    cout<< (5>6) <<endl;  //ans :- false -> 0
    cout<< (5<=5) <<endl;  //ans :- true -> 1

    return 0;
}
*/



//wap to calculate sum of two numbers .
/*#include<iostream>
using namespace std;
int main (){

        int a,b,sum=0;
        cout<<"Enter a :-";
        cin>>a;
        
        cout<<"Enter b :-";
        cin>>b;
        
        sum = a+b;
        cout<<" sum = " << sum <<endl;


}*/


//unary operater (increment ++) & (decrement --)

/*#include<iostream>    (post increament)
using namespace std;
int main (){
    int a = 10;
    int b = a++; // work ; update  
     
     cout<< " b = " << b <<endl;  //10
     cout<< " a = " << a <<endl;  //11
     return 0;
}
*/

//(++a)  --->
 
/*&#include<iostream>      //(pre increament)
using namespace std;
int main (){
    int a = 10;
    int b = ++a; //  update ; work  
     
     cout<< " b = " << b <<endl;  //11
     cout<< " a = " << a <<endl;  //11
     return 0;
}
*/

/*#include<iostream>      //(post dicreament)
using namespace std;
int main (){
    int a = 10;
    int b = a--; // work ; update  
     
     cout<< " b = " << b <<endl;  //10
     cout<< " a = " << a <<endl;  //9
     return 0;
}*/


#include<iostream>      //(pre dicreament)
using namespace std;
int main (){
    int a = 10;
    int b = --a; //  update  ; work
     
     cout<< " b = " << b <<endl;  //9
     cout<< " a = " << a <<endl;  //9
     return 0;
}