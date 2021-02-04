#include"mergearr.h"

int main()
{
  int nums1[]={1,2,3};
  int size1=sizeof(nums1)/sizeof(nums1[0]);
  int nums2[]={2,5,6};
  int size2=sizeof(nums2)/sizeof(nums2[0]);
  int size=mergearr(nums1,nums2,size1,size2);
  Print(nums1,size);
}
