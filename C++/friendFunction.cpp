#include<iostream.h>
#include<conio.h>
class sample
{
int a,b;
public:
void setvalue( )
{
a=25;
b=40;
}
friend float mean(sample s);
};
float mean(sample s)
{
return float(s.a+s.b)/2.0;
}
int main( )
{
clrscr( );
sample s;
s.setvalue( );
cout<<"Mean Value:"<<mean(s)<<endl;
getch( );
return 0;
}
