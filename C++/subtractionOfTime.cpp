#include<iostream.h>
#include<conio.h>
class time
{
int hrs,mins,secs;
public:
void set(int x,int y,int z)
{
hrs=x;
mins=y;
secs=z;
}
void display()
{
cout<<hrs<<" Hours "<<mins<<" Minutes "<<secs<<" Seconds"<<endl;
}
void diff(time,time);
};
void time::diff(time t1,time t2)
{
int d=t1.hrs*3600+t1.mins*60+t1.secs;
int e=t2.hrs*3600+t2.mins*60+t2.secs;
int f;
if(d>e)
{
f=d-e;
}
else
{
f=e-d;
}
secs=f%60;
int temp=f/60;
hrs=temp/60;
mins=temp%60;
}
int main( )
{
clrscr( );
time t1,t2,t3;
t1.set(3,45,25);
t1.display( );
t2.set(2,10,10);
t2.display( );
t3.diff(t1,t2);
t3.display( );
getch( );
return 0;
}
