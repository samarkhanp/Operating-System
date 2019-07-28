#include<stdio.h>
int main()
{
  
  int memsize,n,ossize,np,ps[10],m[10],fp[10],i,j,f;
  printf("\nENTER TOTAL MEMORY SIZE::");
  scanf("%d",&memsize);
  printf("ENTER NO OF PARTITIONS::");
  scanf("%d",&np);
  printf("ENTER PARTITION SIZES::");
  for(i=0;i<np;i++)
    scanf("%d",&ps[i]);
  printf("ENTER OS SIZE::");
  scanf("%d",&ossize);
  printf("ENTER NO OF PROCESS::");
  scanf("%d",&n);
  printf("ENTER MEM REQUIRED BY EACH PROCESS::");
  for(i=0;i<n;i++)
    scanf("%d",&m[i]);
   f=memsize-ossize;
  for(i=0;i<n;i++)
  {
     for(j=0;j<np;j++)
     {
	      if(m[i]<=ps[j])
	      {
	        
	        printf("\nProcess %d allocated in partition %d",(i+1),(j+1));
	        ps[j]-=m[i];
	        fp[i]=1;
	        break;
	      }
     }
  }
  printf("\nFREE MEMORY::");
  for(i=0;i<np;i++)
  {
    
     printf("Partition %d :: %d",(i+1),ps[i]);
  }
  return(0);
  
}
