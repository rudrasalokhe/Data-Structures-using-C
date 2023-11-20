#include<stdio.h>
#include<conio.h>
void show(int a[], int n);
void insert(int a[], int *n);
void delete(int a[], int *n);
int main(){
  int i,num,pos,n,a[20];
  printf("Enter the number of elements you want to enter :");
  scanf("%d", &n);
  printf("Enter the elements:");
  for(i=0;i<n;i++){
    scanf("%d",&num);
  }
  show(a,n);
  insert(a,&n);
  show(a,n);
  delete(a, &n);
 
 return 0; 
}
void show(int a[], int n){
  int i;
  printf("The elements in the array are\n");
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
}
void insert(int a[], int *n){
  int i,pos,num;
  printf("Enter the position where you want to insert the element:\n");
  scanf("%d", &pos);
  pos=pos-1;
  for(i=*n-1;i>=pos;i--){
    a[i+1]=a[i];      
    *n=(*n)+1;
  }
  printf("Enter the element you want to insert:\n");
  scanf("%d", &num);
  a[pos]=num;
}
void delete(int a[], int *n){
  int i, pos, num;
  printf("Enter the position where you want to delete:\n");
  scanf("%d", &pos);
  pos=pos-1;
  for(i=pos;i<*n-1;i++){
    a[i]=a[i+1];
    *n=(*n)-1;
  }

}
