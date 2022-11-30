#include<iostream.h>
#include<conio.h>
class space
{
int x;
int y;
int z;
public:
 void getdata(int a,int b,int c);
 void display( );
 void operator - ( );
};
void space::getdata(int a,int b,int c)
{
x=a;
y=b;
z=c;
}
void space::display( )
{
cout<<x<<" ";
cout<<y<<" ";
cout<<z<<" "<<endl;
}
void space::operator - ( )
{
x=-x;
y=-y;
z=-z;
}
int main( )
{
clrscr( );
space s;
s.getdata(10,-20,30);
cout<<"s :";
s.display( );
-s; //unary – operator overloading for user defined object s
cout<<"s :";
s.display( );
getch( );
return 0;
}
