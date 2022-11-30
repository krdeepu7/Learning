#include<iostream.h>
#include<conio.h>
void callval(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
}
void callref(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
int main( )
{
int a,b;
clrscr( );
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
callval(a,b);
cout<<"Call by Value"<<endl;
cout<<"Value of a:"<<a<<endl;
cout<<"Value of b:"<<b<<endl;
callref(&a,&b);
cout<<"Call by Reference"<<endl;
cout<<"Value of a:"<<a<<endl;
cout<<"Value of b:"<<b<<endl;
getch( );
return 0;
}
