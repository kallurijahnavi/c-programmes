#include <stdio.h>

int main()
{
  int arr[10],i,n;
  printf("enter the array size\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
      
  }
  
printf("\n=================\n");

for(i=0;i<n;i++)
{
    printf("%d\t",arr[i]);
}

    return 0;
}

