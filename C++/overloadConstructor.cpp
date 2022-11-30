#include<iostream.h>
#include<conio.h>
class test
{
int a,b;
public :
test( ) //default Constructor
{
a=0;
b=0;
}
test(int x,int y) //parameterised Constructor
{
a=x;
b=y;
cout<<"The Product of two numbers is "<<a*b<<endl;
}
test(float avg,int a,int b) //parameterised Constructor
{
avg=(float)a/b;
cout<<"The average of two numbers is "<<avg<<endl;
}
};
int main( )
{
clrscr( );
test obj1;
test obj2(5,2);
test obj3(0,5,2);
getch( );
return 0;
}
