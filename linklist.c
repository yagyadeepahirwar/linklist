#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start= NULL;

struct node* createNode()// this method make the node and return it.
{
    struct node *temp= (struct node*)malloc(sizeof(struct node));
    printf("Enter a int data to store: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    return(temp);
}

/// inserting methods end ,start ,withid///////////
void insertNodeEnd()
{
    struct node *t= createNode();
    if(start==NULL){
       start=t;
    }else{
        struct node *copy= start;
        while(copy->next!=NULL){
            copy= copy->next;
        }
        copy->next=t;
    }
}
void insertNodeStart()
{
    struct node *t= createNode();
    if(start==NULL)
    {
        start= t;
    }else{
        t->next= start;
        start= t;
    }
}
int insertNodeWithId(int id)
{
    struct node *t =createNode();
    struct node *copy= start;
    while(copy->data!=id){
        copy=copy->next;
        if(copy->next==NULL){
            return(0);
        }
    }
    t->next=copy->next;
    copy->next=t;
    return(1);
}

// read method ///////////////

int readNodeWithId(int id)
{
    struct node *copy= start;
    while(copy->data!=id)
    {
        copy= copy->next;
        if(copy->next==NULL)
        {
            return(0);
        }
    }
    printf("%d id data is %d",id,copy->data);
    return(1);
}

void readNodeslist()
{
    struct node *copy= start;
    printf("\nThis is the all data ");
    while(copy!=NULL)
    {
        printf("\n%d",copy->data);
        copy= copy->next; 
    }
}

//////////// Delete methods /////////////// this delete method is right but space compeleccity is the problem is in it.
void deleteNodeStart()
{
    if(start==NULL){
        printf("\n list is empty");
    }else{
        struct node *r= start;
    if(start->next==NULL)
    {
        start=NULL;
    }else{
        start=start->next;
    }
    free(r);
    }
}

void deleteNodeEnd()
{
    if(start==NULL)
    {
        printf("\n list is empty");
    }else{
        struct node *r= start;
    if(start->next==NULL)
    {
        start=NULL;
        free(r);
    }else{
    struct node *copy= start;
       while(copy->next->next!=NULL)
        {
        copy=copy->next;
        }
        copy=copy->next;
        copy->next=NULL;
        free(copy);
    }
    }

}

/////// update mathods///////////

void updateNodeWithId(int id)
{
     struct node *copy= start;
     while(copy!=NULL)
     {
        if(copy->data==id){
            printf("\n Enter new data to insert in this field: ");
            scanf("%d",&copy->data);
        }
        copy=copy->next;
     }
}

int main()
{
    insertNodeEnd();
    insertNodeEnd();
    insertNodeEnd();
    readNodeWithId(2);
    readNodeslist();
    deleteNodeStart();
    readNodeslist();
    deleteNodeEnd();
    readNodeslist();
    updateNodeWithId(2);
    readNodeslist();
}
