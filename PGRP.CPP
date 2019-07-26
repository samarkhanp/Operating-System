#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int p[20],f[20]={0},hit=0,miss=0,pos=0;
   for(int l=0;l<20;l++)
      f[l]=-1;
   cout<<"ENTER NO OF PAGES::";
   int np;
   cin>>np;

   cout<<"ENTER PAGES::";
   for(int i=0;i<np;i++)
     cin>>p[i];

   cout<<"ENTER FRAME SIZE::";
   int nf;
   cin>>nf;

   int flag;
   for(i=0;i<np;i++)
   {
   flag=0;
       for(int j=0;j<nf;j++)
       {
	 if(p[i]==f[j])
	   {  hit=hit+1;
	     flag=1;
	    }
       }
       if(flag==0){
	    if(pos>=nf)
	      pos=0;

	   f[pos]=p[i];
	   pos++;
	   miss++;
	  }


   }
     cout<<"\nmiss::"<<miss<<"  hit::"<<hit ;
      getch();
}