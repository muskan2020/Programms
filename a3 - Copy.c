#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void main()
{
  struct node *head=NULL;
head=(struct node *)malloc(sizeof(struct node));
head->data=10;
head->link=NULL;

}
