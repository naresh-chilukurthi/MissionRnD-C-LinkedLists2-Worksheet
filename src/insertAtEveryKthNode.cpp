/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	if(head==NULL||K<=0)
	return NULL;
	else
    {
        struct node* temp;struct node* p;int counti=0;
        temp=head;
        while(temp!=NULL)
        {
            counti++;
            if(counti%K==0)
            {
                p=(struct node*)malloc(sizeof(struct node));
                p->num=K;
                p->next=temp->next;
                temp->next=p;
                temp=temp->next;
            }
            temp=temp->next;
        }
        return head;
    }
}
