// wap for selection sort
#include<stdio.h>
#include<conio.h>
int main(){
  int a[100], min, n , i , j , temp;
  printf("Enter the number of elements you want to insert:\n");
  scanf("%d", &n);
  printf("Enter the array elements:\n");
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  for(i=0;i<n-1;i++){
    min=i;
    for(j=i+1;j<n;j++){
      if(j<a[min]){
      min=j;
    }
    }
    
    if(min!=i){
      temp=a[i];
      a[i]=a[min];
      a[min]=temp;
    }
    }
  
  printf("The sorted elements in the array are:");
  for(i=0;i,n;i++){
    printf("%d", &a[i]);
  }
  return 0;

}
