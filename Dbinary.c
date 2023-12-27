#include<stdio.h>


int binarysearch(int arr[],int size,int element)
{
 
 int low,high;
 low=0;
 high=size-1;
 for(int i=low;i<=high;i++)
//while (low<=high)
{
int  mid=(low+high)/2;
 {
    return mid;
 }
 if(arr[mid]<=element)
 {
    low=mid+1;
 }
 else{

    high=mid-1;
 }
}
 return -1;
};
int main()
{
    int e;
    
    int arr[5] = { 2, 3, 4, 50, 40 };
   
   
    int size = sizeof(arr) / sizeof(arr[0]);


	 printf("enter element\t");
    scanf("%d",& e);
    
    
    int result=binarysearch(arr,size ,e);
    
    
    
    (result == -1) ? printf("Element is not present in array")
				: printf("Element is position %d " ,result);
    
  }
