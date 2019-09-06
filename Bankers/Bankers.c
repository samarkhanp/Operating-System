
#include<stdio.h>
void main()
{
int alloc[5][5],max[5][5],need[5][5],avail[5],i,j,k,a,b,p[5]={0,0,0,0,0},pr[5];
char safe[5]={'F','F','F','F','F'};
printf("\nENTER NO OF PROCESS::");
scanf("%d",&a);

printf("\nENTER N0 OF TYPE::");
scanf("%d",&b);

printf("ENTER ALLLOCATED MATRIX::");
for(i=0;i<a;i++)
for(j=0;j<b;j++)
scanf("%d",&alloc[i][j]);

printf("\nENTER MAX MATRIX::");
for(i=0;i<a;i++)
for(j=0;j<b;j++)
{ scanf("%d",&max[i][j]);
 need[i][j]=max[i][j]-alloc[i][j];
}



printf("\nENTER AVAILABLE ARRAY:");
for(i=0;i<b;i++)
scanf("%d",&avail[i]);

printf("\nALLOCATED\n---------------------\n");
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
     printf("%d ",alloc[i][j]);
   }
   printf("\n");
  }

  printf("\nMAX\n---------------------\n");
  for(i=0;i<a;i++)
  {
   for(j=0;j<b;j++)
   {
    printf("%d ",max[i][j]);
   }
   printf("\n");
  }

  printf("\nNEED\n---------------------\n");

  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
    {
     printf("%d ",need[i][j]);
    }
    printf("\n");
   }
i=0;
while(1)
{
  if(i>=a)
  i=0;

  

if(p[i]==0)
  {
   j=0;
     if(need[i][j]<=avail[j] && need[i][j+1]<=avail[j+1] && need[i][j+2]<=avail[j+2])
     {

        printf("\nPROCESS %d SUCCESS",i);
      safe[i]='T';
      printf("\nSAFE\n====\n");
      for(k=0;k<a;k++)
      {printf("%c ",safe[k]);
      }
      avail[0]+=alloc[i][j];
      avail[1]+=alloc[i][j+1];
      avail[2]+=alloc[i][j+2];
            p[i]=1;
     printf("\nAVAIL::\n========\n");
     for(k=0;k<b;k++)
     printf("%d ",avail[k]);
     pr[i]=i;
     }
     else
     {

      printf("\nprocess %d failed \n",i);
        for(k=0;k<a;k++)
         printf("%c ",safe[k]);

     }
  }
  i++;
  if(p[0]==1 && p[1]==1 &&  p[2]==1 &&  p[3]==1 && p[4]==1)
    break;


}


printf("SEQUENCE::\n");
for(i=0;i<a;i++)
printf("%d ",pr[i]);
}
