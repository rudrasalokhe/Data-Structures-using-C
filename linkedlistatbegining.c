#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // for malloc function
typedef struct link_list
{
int data;
struct link_list * next; //next of type link list
}node; //rename structure list
void insert_begin(node **start,int);
void main()
{
int num,i,n;
node *start, *ptr , *temp;
clrscr();
printf("\nEnter number of nodes : ");
scanf("%d",&n);
start=(node*) malloc(sizeof(node)); // get the first node address in start
printf("\nEnter the first element :\n");
scanf("%d",&num);
start->data=num; /* Stores the value of num in the data part of the node
 whose address is stored in pointer start */
start->next=NULL;
temp=start; // in case of single node first and last node are same
printf("\nEnter the remaining elements :\n");
for(i=1;i<n;i++)
{
scanf("%d",&num);
ptr=(node*) malloc(sizeof(node));
ptr->data=num;
ptr->next=NULL;
temp->next=ptr; // since temp is the last node , in order to make the link 


temp=ptr;
}
printf("\nEnter the element to be inserted at the beginning :\n");
scanf("%d",&num);
insert_begin(&start,num);
//traversing a linked list
ptr=start;
printf("\nThe elements of linked list are :\n");
while(ptr!=NULL)

{
printf("%d\t", ptr->data);
ptr=ptr->next;
}
getch();
}
void insert_begin(node **temp,int num)
{
node *ptr;
ptr=(node*) malloc(sizeof(node));
ptr->data=num;
if(temp==NULL) //if linked list is empty
{
ptr->next=NULL; //ptr will be the first node, and put the NULL to its next part
}
else
{
ptr->next=*temp; //ptr will start pointing to the first node
}
*temp=ptr; //ptr becomes the first node
}
