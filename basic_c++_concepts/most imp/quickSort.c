#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[] ,int p , int q){
  int x=a[p];
  int i=p;
  int j;
  for(j=p+1;j<=q;j++){
    if(a[j]<=x){
      i++;
      swap(&a[j],&a[i]);
    }
  }
  
  swap(&a[p],&a[i]);

  return i;
}
void quickSort(int a[],int p, int q){
  if(p<q){
 int pivotIndex=partition(a,p,q);
  quickSort(a,p,pivotIndex-1);
  quickSort(a,pivotIndex+1,q);
  }
  
}
int main(){
  int n=9;
  int a[9]={50,80,70,60,35,89,25,66,43};
  quickSort(a,0,n-1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
  return 0;
}