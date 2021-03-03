#include<stdio.h>
int main()
{
  int i=0;
  int j=0;
  for(i=2;i<=1000;i++)
  {
    int k=0;
    int sum=0;
    int arr[100];
    for(j=1;j<i;j++)
    {
      if(i%j==0)
      {
        sum=sum+j;
        arr[k]=j;
        k++;
      }
    }
    if(sum==i)
    {
      printf("%d是完数\n因子为：",i);
      int l=0;
      for(l=0;l<k;l++)
      {
        printf("%d ",arr[l]);
      }
      printf("\n");

    }
  }
  return 0;
}
