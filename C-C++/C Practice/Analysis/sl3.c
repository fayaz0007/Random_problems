#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head=NULL, *tail=NULL;

int *p;

int main(){
    int c,c1;
    create();
    printf("\n\t  Do you want to insert more?\n\n\t\tIf yes || press 1\n\t\tIf no  || press 0\n");
    printf("Ans: ");
    scanf("%d",&c);
    if(c == 1){
        printf("\nchoose 1 for inserting data at the start point\n\t\t\tor\nchoose 0 for inserting data at the end point\n");
        printf("\nAns: ");
        scanf("%d",&c1);
        printf("\n");
        if(c1 == 1)
        {
            insert();
            printf("\n");
            display();
        }
        else{
            insert2();
            printf("\n");
            display2();
        }
    }
    else{
        printf("Display data:\n");
        display();
    }
    printf("\nCredit to\n \tMahi \(ID: 1618\) \n\t    and\n \tUtsho \(ID: 1244\)");
    getch();
}

int create(){
    int nodeNum;
    struct node *newnode,*current;

    printf("How many nodes you want to create? >> ");
    scanf("%d",&nodeNum);
    printf("\n");

    for(int i=1;i<=nodeNum;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Value of X%d: ",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            current=newnode;
        }else
        {
            current->next=newnode;
            current=newnode;
        }

        tail=current;
    }
}

void insert()
{
    int nodeNum;
    struct node *newnode,*current;

    printf("How many nodes you want to create? >> ");
    scanf("%d",&nodeNum);
    printf("\n");
    p=head;
    head=NULL;
    for(int i=1;i<=nodeNum;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Value of X%d: ",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            current=newnode;
        }else
        {
            current->next=newnode;
            current=newnode;
        }

    }

    newnode->next=p;

}

void insert2()
{
    int nodeNum;
    struct node *newnode,*current;

    printf("Enter new Node Number: ");
    scanf("%d",&nodeNum);
    printf("\n");
    p=head;
    head=NULL;
    for(int i=1;i<=nodeNum;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Value of X%d:",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            current=newnode;
        }else
        {
            current->next=newnode;
            current=newnode;
        }

    }

    tail->next=head;

}

void display(){
        struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }

    temp = head;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
}

void display2(){
        struct node *temp;

    if(p == NULL)
    {
        printf("List is empty.");
        return;
    }

    temp = p;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }

}

