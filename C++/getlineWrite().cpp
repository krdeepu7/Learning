#include<iostream.h>
#include<conio.h>
#include<string.h>
int main( )
{
int size=5;
char a[20];
clrscr( );
cout<<"Enter any Sentence:"<<endl;
cin.getline(a,size);
int length=strlen(a);
for(int i=0;i<=length;i++)
{
cout.write(a,i);
cout<<endl;
}
getch( );
return 0;
}
