#include<stdio.h>
#include<conio.h>
int main(){
  int no,n,i,a[50];
  printf("enter the number of elements yuo want to insert:\n");
  scanf("%d", &n);
  return 0;
  printf("Enter the elemets:\n");
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
 printf("Enter the element you want to search :\n");
 scanf("%d", &no);
 for(i=0;i<n;i++){
 if(a[i]==no){
  printf("%d is present at %d", i,no);
 }
 }
 if(i==n){
  printf("elements is not found in the array");
 }
 
