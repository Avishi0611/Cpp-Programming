#include<stdio.h>
int main(){
   int n;
   printf("Enter the no. of elements for an array:");
   scanf("%d" , &n);
   int arr[n];
   printf("Enter the elements of an array:");
   for(int i=0;i<n;i++){
    scanf("%d" , &arr[i]);
   }
   int key;
    printf("Enter the key element to search:");
   scanf("%d" , &key);
   int found=0;
   for(int i=0;i<n;i++){
    if(arr[i]==key){
      printf("Element found at index %d" ,i);
      found =1;
      break;
    }
  }
  if(found==0){
    printf("Element not found!");
  }
  return 0;
}