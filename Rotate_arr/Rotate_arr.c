#include "Rotate_arr.h"
void Print(int* arr,int size)
{
  int i=0;
  for(i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");

}
void Rotate_arr(int* arr,int size,int k)
{
  while(k)
  {
    int temp=arr[size-1];
    int i=0;
    for(i=size-2;i>=0;i--)
    {
      arr[i+1]=arr[i];
    }
    arr[0]=temp;
    k--;
  }
}
