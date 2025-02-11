// Wap to insert the element at any position at any position of array 

#include<iostream>
using namespace std;
int main(){
    int a[10] ,i,pos,item,size;
    cout<<"enter the size of array\n";
    cin>>size;
cout<<"enter array element";

    for( i =0; i<size; i++)
{
    cin>>i;
}
cout<<"enter the position you want to insert";
cin>>pos;
cout<<"enter item you want to insert";
cin>>item;
for(i =size ; i>= pos; i--)
{
    a[i]=a[i-1];

}
a [pos]= item;
size ++;
cout<<"return array element ";
for(i = 0;i<size ; i++)
{
    cout<<a[i];
}
return 0;
}