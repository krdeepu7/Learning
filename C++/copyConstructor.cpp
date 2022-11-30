#include<iostream.h>
#include<conio.h>
class code
{
int id;
public:
code( ) //Default Constructor
{
}
code(int a) //Parameter Constructor
{
 id=a;
}
code(code &x) //Copy Constructor
{
 id=x.id;
}
void display( )
{
 cout<<id;
}
};
int main( )
{
clrscr( );
code A(100);
code B(A);
code C=A;
code D;
D=A;
cout<<"\n id of A: ";A.display( );
cout<<"\n id of B: ";B.display( );
cout<<"\n id of C: ";C.display( );
cout<<"\n id of D: ";D.display( );
getch( );
return 0;
}
