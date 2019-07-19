#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int memsize,n,ossize;
cout<<"ENTER TOTAL MEMORY SIZE::";
cin>>memsize;
cout<<"ENTER OS SIZE::";
cin>>ossize;
cout<<"ENTER NO OF PROCESS::";
cin>>n;
int m[10];
cout<<"ENTER MEM REQUIRED BY EACH PROCESS::";
for(int i=0;i<n;i++)
cin>>m[i];
int f=memsize-ossize;
for(i=0;i<n;i++)
{
  if(m[i]<=f)
   { cout<<"\nProcess "<<i+1<<" in Memory" ;
    f=f-m[i];
    }
    else
      cout<<"\nProcess "<<i+1<<" BLOKED";
}
    cout<<"\nFREE MEMORY::"<<f ;
  getch();
}
