#include"single_dog.h"

void single_dog(int arr[],int size)
{
  int i=0;
  int j=0;
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
    {
      if(j==i)
        continue;
      if(arr[j]==arr[i])
      {
        break;
      }
    }
    if(j==size)
    {
      printf("%d是单身狗！\n",arr[i]);
    }
  }

}
