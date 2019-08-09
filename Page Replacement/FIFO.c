#include<stdio.h>
#include<conio.h>
void main()
{  
   int i,j,flag,nf,p[20],f[20],hit=0,miss=0,pos=0,np;
   clrscr();

   for(int l=0;l<20;l++)
      f[l]=-1;
	
   printf("ENTER NO OF PAGES::");
   scanf("%d",&np);

   printf("ENTER PAGES::");
   for(i=0;i<np;i++)
     scanf("%d",&p[i]);

   printf("ENTER FRAME SIZE::");
   scanf("%d",&nf);

   for(i=0;i<np;i++)
   {
   flag=0;
       for(j=0;j<nf;j++)
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
     printf("\nmiss::%d  hit::%d",miss,hit) ;
      getch();
}
