#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *front , *rear , *temp , *r;
    front=rear=NULL;
    if ( front == NULL)
    {
        r= (struct node *)malloc(sizeof(struct node));
        r->data = 10;
        r->link = NULL;
        front = r ;
        rear =r;
    }
    else{
        if(rear->link = NULL)
        {
            //rear enque
          r= (struct node *)malloc(sizeof(struct node));
          r->data = 20 ;
          rear->link = r;
          rear = rear->link;
          rear->link = front ; 
        }
    }

    

return 0;
}