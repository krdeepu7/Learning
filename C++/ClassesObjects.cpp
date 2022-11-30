#include<iostream.h>
#include<conio.h>
class a
{
int n;
public:
void display( )
{
cout<<"Enter a Number"<<endl;
cin>>n;
cout<<"The Number is:"<<n<<endl;
}
};
class b
{
int n,m;
public:
void product( )
{
cout<<"Enter two Number"<<endl;
cin>>n>>m;
cout<<"Product of a Number is:"<<n*m<<endl;
}
};
int main( )
{
clrscr( );
a obj1;
obj1.display( );
b obj2;
obj2.product( );
getch( );
return 0;
}
