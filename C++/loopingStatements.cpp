#include<iostream.h>
#include<conio.h>
int main( )
{
int num=1,limit,range;
clrscr( );
cout<<"Enter your Limit"<<endl;
cin>>limit;
range=limit;
cout<<"Numbers display from 1 to "<< limit<<endl;
while(num<=limit)
{
cout<<num<<"\t";
num=num+1;
}
num=1;
cout<<endl;
cout<<"No display from"<< limit <<"to "<<num<<endl;
do
{
cout<<limit<<"\t";
limit=limit-1;
}while(limit>=num);
cout<<endl;
cout<<"No of even numbers from 1 to "<<range<<endl;
for(num=1;num<=range;num++)
{
if(num%2==0)
{
cout<<num<<"\t";
}
}
getch( );
return 0;
}
