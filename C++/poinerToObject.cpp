#include<iostream.h>
#include<conio.h>
class base
{
public:
void display( )
{
cout<<"Display Base"<<endl;
}
virtual void show( )
{
cout<<"Show Base"<<endl;
}
};
class derived:public base
{
public:
void display( )
{
cout<<"Display Derived"<<endl;
}
void show( )
{
cout<<"Show Derived"<<endl;
}
};
int main( )
{
clrscr( );
base b;
derived d;
base *bptr;
cout<<"bptr points to base"<<endl;
bptr=&b;
bptr→display( );
bptr→show( );
cout<<endl;
cout<<"bptr points to derived"<<endl;
bptr=&d;
bptr→display( );
bptr→show( );
getch( );
return 0;
}
