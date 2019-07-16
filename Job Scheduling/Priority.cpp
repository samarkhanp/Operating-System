#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int process[5],bt[5];
int n;
cout<<"ENTER NO OF PROCESS::";
cin>>n;
cout<<"ENTER Burst Times";
for(int i=0;i<n;i++)
{
  cin>>bt[i];
  process[i]=i+1;
}
int p[5];
cout<<"ENTER PRIORITY::";
for(i=0;i<n;i++)
{
cin>>p[i];
}

for(i=0;i<n;i++)
{
   for(int j=0;j<n-1;j++)
   {
     if(p[j]<p[j+1])
     {
       int temp=p[j],t2=process[j],t3=bt[j];
       p[j]=p[j+1];
       p[j+1]=temp;
       process[j]=process[j+1];
       process[j+1]=t2;
       bt[j]=bt[j+1];
       bt[j+1]=t3;
     }
   }
}
int wt[5];
wt[0]=0;
wt[1]=bt[0];
int sum=wt[1];
for(i=2;i<n;i++)
{
      wt[i]=wt[i-1]+bt[i-1];
      sum=sum+wt[i];
}
float avg=(float)sum/(float)n;
int tat[5];
tat[0]=bt[0];
sum=tat[0];
for(i=1;i<n;i++)
{
 tat[i]=wt[i]+bt[i];
 sum=sum+tat[i];
}
float tavg=(float)sum/(float)n;
cout<<"Process\tBT \t PT \t Wt \t TAT  \n--------------------------\n";
for(i=0;i<n;i++)
{
cout<<process[i]<<"\t"<<bt[i]<<"\t"<<p[i]<<"\t"<<wt[i]<<"\t"<<tat[i]<<endl;
}
cout<<"AVG WT::"<<avg<<"\nAVG TAT::"<<tavg;
getch();
}
