#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;           //storer int data in first block of linked list
    struct Node *next; //This is node pointer which are store address of next element.
};
void linkedTriversal(struct Node *ptr)
{
    while (ptr != NULL) //Cheacking condtation 
    {
        printf("Element is::%d\n", ptr->data);
        ptr = ptr->next;  //update ptr to point the linked element.
    }
}
struct Node * reverse(struct Node *head){
      struct Node * ptr, *t1,*t2;
      ptr=NULL;
      t2=head;
      t1=NULL;
      
      while (t2!=NULL)
      {
        t1=t2->next;
        t2->next=t1;
        t1=t2;
        t2=ptr;
        
      }
      head=t1;
      while (ptr!=NULL)
      {
      printf("%d:",ptr->data);
      ptr=ptr->next;
       }
        return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    //Allocate memory for node in the linked list in heap
    //Dynamic memory allocation
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth=(struct Node *) malloc (sizeof(struct Node));

    //linked first and second
    head->data = 7;
    head->next = second;

    //linked seond and third
    second->data = 34;
    second->next = third;

    //Terminate the list at third node
    third->data = 45;
    third->next = forth;

   //Terminate the list at forth node
    forth->data= 87;
    forth->next=NULL;

    linkedTriversal(head);
    
   printf("Reverse linked list is ::");
    reverse(head);

    return 0;
}