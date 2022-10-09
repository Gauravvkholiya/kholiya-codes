


/****singly linked list insertion as well as deletions**/


#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} s1;
s1 *head, *temp;
int insertion_at_first(s1 *newnode, s1 *head, s1 *temp)
{
    //temp = head;
    newnode->next = head ;
    head = newnode;

    // traversing
    temp = head;
    while (temp != 0)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
    return 0;
}
int insertion_at_last(s1 *newnode3, s1 *head, s1 *temp) 
{
    //s1*prevnode;
    //prevnode = 0;
    temp = head ;
    
    while(temp->next !=0)
    {
        temp = temp->next;
        
    }
    temp->next =newnode3;
    temp = newnode3;
    // traversing

    temp = head;
    while (temp != 0)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
    return 0;
}
int deletion_at_last( s1 *head, s1 *temp)
{
    s1*prevnode;
    prevnode = 0;
    temp = head;

    while (temp->next!= 0)
    {
        prevnode = temp;
        temp = temp->next;
    }
    prevnode->next =0;
    free(temp);
    // traversing

    temp = head;
    while (temp != 0)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
    return 0;
}
int deletion_at_first(s1 *head, s1 *temp){
    temp =head;
    head = temp ->next;
    free(temp );
    //traversing
    temp = head;
    while (temp != 0)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
    return 0;
} int main()
{

    head = 0;
    int choice = 1;
    while (choice)
    {
        s1 *newnode = (s1 *)malloc(sizeof(s1));
        printf("enter the data:");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("do you want to continue:(0/1)");
        scanf("%d", &choice);
    }
    //insertion at first 
    s1 *newnode2 = (s1 *)malloc(sizeof(s1));

    printf("enter thenode to be added at the first : ");
    scanf("%d", &newnode2->data);
    insertion_at_first(newnode2, head, temp);

    //insertion at last 
    s1 *newnode3 = (s1 *)malloc(sizeof(s1));
    printf("enter the node to be added at last:");
    scanf("%d", &newnode3->data);
    newnode3->next = 0;
    insertion_at_last(newnode3, head, temp);
    printf("deletion of node from last :\n");
    deletion_at_last( head, temp);
    printf("deletion of node from first :\n");
    deletion_at_first (head, temp);

    return 0;
}
