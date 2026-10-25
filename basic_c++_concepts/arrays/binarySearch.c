#include<stdio.h>
int main(){
  int n;
  
   printf("Enter the no. of elements for an array:");
   scanf("%d" , &n);
   int arr[n];
   printf("Enter the elements of a sorted array:");
   for(int i=0;i<n;i++){
    scanf("%d" , &arr[i]);
   }
   int key;
    printf("Enter the key element to search:");
   scanf("%d" , &key);
   int low=0;
   int high=n-1;
    
   
   while(low<=high){
    int mid=(low+high)/2;
     if(key==arr[mid]){
    printf("Element found at %d", mid);
    return 0;
     }
     else if(key<arr[mid]){
      high=mid-1;
     }
     else{
      low=mid+1;
     }

   }
  printf("Element not found");
  return 0;
}