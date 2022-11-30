#include<iostream.h>
#include<conio.h>
int a,b,x,m,n,o;
void large(int,int);
int large(int);
void large(int,int,int);
int main( )
{
clrscr( );
int l;
large(5,3);
l=large(6);
cout<<"Largest is :"<<l<<endl;
large(8,5,2);
getch( );
return 0;
}
void large(int a,int b)
{
if(a>b)
cout<<"a is largest :"<<a<<endl;
else
cout<<"b is largest :"<<b<<endl;
}
int large(int x)
{
return x;
}
void large(int m,int n, int o)
{
if((m>n)&&(m>o))
cout<<"m is largest :"<<m<<endl;
else
if(n>o)
cout<<"n is largest :"<<n<<endl;
else
cout<<"o is largest :"<<o<<endl;
}
