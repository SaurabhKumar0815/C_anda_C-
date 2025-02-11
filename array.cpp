#include<iostream>
using namespace std;
 int main(){
   
   
   /*int arr[3];
    arr[0] =10;
    arr[1] =20;
    arr[2] =30;
 
    cout<<"arr[0] (*-*):->  " <<arr[0] <<endl;
    cout<<"arr[1] (*-*):->  " <<arr[1] <<endl;
    cout<<"arr[2] (*-*):->  " <<arr[2] <<endl;
/**/

        int numbers[5];
         
         cout<<"Enter the numbers :" <<endl;
//store input from user to array

         for(int i = 0 ; i < 5 ; i++)
         {
            cin>>numbers [i];
         }
         cout<<" Enter the numbers :"<<endl;
         //print array elements
          for(int n = 0; n < 5; n++)
          cout<< numbers[n]<<" ";
         
    return 0;

 }