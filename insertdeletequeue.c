#include<stdio.h>
#include<conio.h>
#define MAX 5
int queue[MAX];
int front = - 1, rear = -1 ;
void insert();
void delete();
void display();
int  main(){
  int choice;
  printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
  scanf("%d", &choice);
  switch(choice){
    case 1:
    insert();
    break;
    case 2:
    delete();
    break;
    case 3: 
    display();
    break;
    case 4:
    exit(0);


  }
}
void insert(){
  int item;
  if(rear = MAX-1){
    printf("Queue is Full");
  }
  else{
  if(rear == - 1 ){
    front  = 0;
  }
  printf("Enter the item you want to insert:\n");
  scanf("%d", &item);
  rear = rear + 1 ;
  queue[rear]=item;
}
}
void display(){
  if( front == -1 || front > rear ){
    printf("Queue is empty");
  }
  else{
  printf("%d is is deleted from ", queue[front]);
  front = front + 1;

}
}
void display() {
  int i;
  if (front == -1)
    printf("\nQueue is empty");
  else {
    printf("\nQueue is: ");
    for (i = front; i <= rear; i++) printf("%d ", queue[i]);
  }
}
