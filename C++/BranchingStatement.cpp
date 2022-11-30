#include<iostream.h>
#include<conio.h>
int main( )
{
int a,b;
clrscr( );
cout<<"Enter a number"<<endl;
cin>>a;
if(a%2==0)
{
cout<<"The number is Even"<<endl;
}
else
{
cout<<"The number is Odd"<<endl;
}
cout<<endl;
cout<<"Names of Fruits Available"<<endl;
cout<<"1. Mango"<<endl;
cout<<"2. Orange"<<endl;
cout<<"3. Grapes"<<endl;
cout<<"Enter the fruit number you like"<<endl;
cin>>b;
switch(b)
{
case 1: cout<<"Selected Mango"<<endl;
 break;
case 2: cout<<"Selected Orange"<<endl;
break;
case 3: cout<<"Selected Grapes"<<endl;
break;
default: cout<<"Invalid fruit number"<<endl;
}
getch( );
return 0;
}
