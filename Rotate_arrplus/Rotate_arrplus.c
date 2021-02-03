#include"Rotate_arrplus.h"
void Print(int* arr,int size)
{
  int i=0;
  for(i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void reverse(int* arr,int begin,int end)
{
  while(end>begin)
  {
    int temp=arr[end];
    arr[end]=arr[begin];
    arr[begin]=temp;
    end--;
    begin++;
  }

}

void rotate_arr(int* arr,int size,int k)
{
  k%=size;
  reverse(arr,0,size-1);
  reverse(arr,0,k-1);
  reverse(arr,k,size-1);
}
