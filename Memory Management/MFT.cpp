#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int memsize,n,ossize,np,ps[10],m[10];
  cout<<"ENTER TOTAL MEMORY SIZE::";
  cin>>memsize;
  cout<<"ENTER NO OF PARTITIONS::";
  cin>>np;
  cout<<"ENTER PARTITION SIZES::";
  for(int i=0;i<n;i++)
    cin>>ps[i];
  cout<<"ENTER OS SIZE::";
  cin>>ossize;
  cout<<"ENTER NO OF PROCESS::";
  cin>>n;
  cout<<"ENTER MEM REQUIRED BY EACH PROCESS::";
  for(i=0;i<n;i++)
    cin>>m[i];
  int f=memsize-ossize;
  for(i=0;i<n;i++)
  {
     for(int j=0;j<np;j++)
     {
	      if(m[i]<=ps[j])
	      {
	        cout<<"\nProcess "<<i+1<<" allocated in partion "<<j+1;
	        ps[j]-=m[i];
	        fp[i]=1;
	        break;
	      }
     }
  }
  cout<<"\nFREE MEMORY::";
  for(i=0;i<np;i++)
  {
     cout<<"Partition "<<i+1<<" :: "<<ps[i];
  }
  getch();
}
