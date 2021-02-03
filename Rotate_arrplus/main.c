#include"Rotate_arrplus.h"

int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int size=sizeof(arr)/sizeof(arr[0]);
  int k=0;
  printf("请输入旋转次数：");
  scanf("%d",&k);
  rotate_arr(arr,size,k);
  Print(arr,size);
  return 0;
}
