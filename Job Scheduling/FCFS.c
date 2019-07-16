#include<stdio.h>
#include<conio.h>
void main()
{
  int p[5][4],i,j,c,size,sum=0,e1=0,e2=0,e3=0,e4=0,e5=0,tat1,tat2,tat3,tat4,tat5;
  float avgwt,avgtat;
  int a[50];
  clrscr();
  printf("ENTER PROCESS ARRIVAL TIME::");
  for(i=0;i<5;i++)
  {
   printf("FOR Process %d ::",(i+1));
   scanf("%d",&p[i][0]);
  }
  printf("ENTER PROCESS BURST TIME::");
  for(i=0;i<5;i++)
  {
    printf("For Process %d ::",(i+1));
    scanf("%d",&p[i][1]);
   }
  printf("\nTHE PROCESS ARE::\n");
  printf("\nProcess \t AT \t BT");
  for(i=0;i<5;i++)
  {
     printf("\nprocess %d\t",(i+1));
     for(j=0;j<2;j++)
     {
     printf("%d\t",p[i][j]);
     }
     printf("\n");

  }
  for(i=0,j=0;i<5;i++)
  {
    c=p[i][1];
      while(c!=0)
      {
	a[j]=(i+1);
	j++;
	c--;
    }
  }
  size=j;
  printf("\n-----------------------------------------------------------------\n");
	    for(i=0;i<j;i++)
	      printf("  %d" ,a[i]);

  printf("\n-----------------------------------------------------------------\n");
	 for(i=0;i<size;i++)
	 {
	    if(a[i]==2)
	    { e2=(i+1);
	      break;
	     }
	 }

	 //for 3rd
	 for(i=0;i<size;i++)
	 {
	   if(a[i]==3)
	   {
	     e3=(i+1);
	     break;
	   }
	 }

	 //for 4th
	 for(i=0;i<size;i++)
	 {
	   if(a[i]==4)
	   {
	      e4=(i+1);
	      break;
	   }

	 }


	 //5th

	 for(i=0;i<size;i++)
	 {
	    if(a[i]==5)
	    {
	      e5=(i+1);
	      break;
	    }

	 }



       //	 printf("waiting time for 5th \n %d",e5);


	/* w2=e2-p[1][0];
	 w3=e3-p[2][0];
	 w4=e4-p[2][0];
	 w5=e5-p[2][0];
	*/
	p[0][2]=0;
	p[1][2]=e2-p[1][0];
	p[2][2]=e3-p[2][0];
	p[3][2]=e4-p[3][0];
	p[4][2]=e5-p[4][0];




	for(i=0;i<5;i++)
	{
	   sum=sum+p[i][2];
	}

	avgwt=(float)(sum)/5.0;

  //tAT
 // tat1,tat2,tat3,tat4,tat5;

 for(i=0;i<size;i++)
 {
   if(a[i]==2)
    { tat1=i+1;
      break;

    }
 }


 for(i=0;i<size;i++)
 {
   if(a[i]==3)
    { tat2=i+1;
      break;

    }
 }

 for(i=0;i<size;i++)
 {
   if(a[i]==4)
    { tat3=i+1;
      break;

    }
 }

tat5=size+1;

 for(i=0;i<size;i++)
 {
   if(a[i]==5)
    { tat4=i+1;
      break;

    }
 }


 p[0][3]=tat1-1;
 p[1][3]=tat2-p[1][0]-1;
 p[2][3]=tat3-p[2][0]-1;
 p[3][3]=tat4-p[3][0]-1;
 p[4][3]=tat5-p[4][0]-1;
  sum=0;

		 for(i=0;i<5;i++)
		 {
		   sum=sum+p[i][3];
		 }

 avgtat=(float)(sum)/5.0;
  printf("\nTHE PROCESS ARE::\n");
  printf("Process \t AT \t BT \t WT\t TAT\n----------------------------");
  for(i=0;i<5;i++)
  {
     printf("\nprocess %d\t",(i+1));
     for(j=0;j<4;j++)
     {
     printf("%d\t",p[i][j]);
     }
     printf("\n");

  }


  printf("\n------------------------------\nAVG WAITING TIME  :: %f",avgwt);
    printf("\n------------------------------\nAVG TAT TIME  :: %f",avgtat);






  getch();



}
