#include"mergearr.h"
void Print(int* arr,int size)
{
  int i=0;
  for(i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
int mergearr(int* nums1,int* nums2,int m,int n)
{
  int i=m-1;
  int j=n-1;
  int k=m+n-1;
  while(i!=-1&&j!=-1)
  {
    if(nums1[i]<=nums2[j])
    {
      nums1[k]=nums2[j];
      k--;
      j--;
    }
    else
    {
      nums1[k]=nums1[i];
      k--;
      i--;
    }
  }
  if(i==-1)
  {
    while(j!=-1)
    {
      nums1[k]=nums2[j];
      k--;
      j--;
    }
  }
  return m+n;
}
