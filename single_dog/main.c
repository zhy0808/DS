#include"single_dog.h"
int main()
{
  int arr[]={1,2,3,4,5,6,6,5,4,3,8,2,9,1};
  int size=sizeof(arr)/sizeof(arr[0]);
  single_dog(arr,size);
  return 0;
}
