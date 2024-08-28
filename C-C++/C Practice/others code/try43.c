#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head=NULL;

int main()
{
    struct node *new_node, *current, *a;
    int n,c;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        new_node = malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next = NULL;
        if(head==NULL)
        {
            head=new_node;
            current = new_node;
        }else{
            current->next = new_node;
            current = new_node;
        }
    }

    display();
    re:
    printf("\n\n1>> for first insert\n2>> for last insert\n3>> for search\n4>> for delete\n5>> for mid before insert\n6>> for mid after insert\n\n");
    scanf("%d",&c);
    if(c==1){
        first_insert();
        display();
        printf("\n");
        goto re;
    }else if(c==2){
        last_insert();
        display();
        printf("\n");
        goto re;
    }else if(c==3){
        search();
        printf("\n");

        goto re;
    }else if(c==4){
        delet();
        display();
        printf("\n");
        goto re;
    }else if(c==5){
        mid_before();
        display();
        printf("\n");
        goto re;
    }else if(c==6){
        mid_after();
        display();
        printf("\n");
        goto re;
    }
}

void display()
{
    struct node *a;
    a=head;
    while(a!=NULL)
    {
        printf("%d-> ",a->data);
        a=a->next;
    }
}

void first_insert()
{
    struct node *new_node, *current;
    new_node=malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;

    current=head;
    new_node->next=current;
    head=new_node;

}

void last_insert()
{
    struct node *new_node, *current;
    new_node=malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;

    current=head;
    while(current->next!=NULL)
    {
        current = current->next;
    }
    current->next=new_node;
}

void search()
{
    struct node *a;
    int n,pos=1;
    printf("Enter value u want to search: ");
    scanf("%d",&n);

    a=head;
    while(a->data!=n)
    {
        a=a->next;
        pos++;
        if(a==NULL)
        {
            printf("value not found\n");
            return 0;
        }
    }
    printf("%d Found at %d\n",n,pos);
}

void delet()
{
    struct node *a;
    int n;
    printf("Enter value u want to delete: ");
    scanf("%d",&n);

    a=head;
    if(a->data==n)
    {
        head=a->next;
    }else{
        while(a->next->data!=n)
        {
            a=a->next;
            if(a->next==NULL)
            {
                printf("value not found\n");
                return 0;
            }
        }
        a->next=a->next->next;
    }
}

void mid_before(){
    struct node *new_node, *current;
    int c;
    new_node=malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;

    printf("pos: ");
    scanf("%d",&c);

    current=head;
    while(current->next->data!=c)
    {
        current = current->next;
        if(current->next==NULL)
            {
                printf("value not found\n");
                return 0;
            }
    }
    new_node->next=current->next;
    current->next=new_node;
}

void mid_after(){
    struct node *new_node, *current;
    int c;
    new_node=malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;

    printf("pos: ");
    scanf("%d",&c);

    current=head;
    while(current->data!=c)
    {
        current = current->next;
        if(current==NULL)
            {
                printf("value not found\n");
                return 0;
            }
    }
    new_node->next=current->next;
    current->next=new_node;
}
