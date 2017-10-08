/*
 JTSK-320112
 a5_p4.c
 long, danni
 d.long@jacobs-university.de
 */
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

static void copy_to_node(Item item, Node *pn);
static void copy_to_item(Node *pn, Item *pi);

void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
    return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    // add missing stuff
    if(queue_is_full(pq)){
        return -1;
    }
    Node *ptr;
    ptr=(Node*)malloc(sizeof(Node));
    if(ptr==NULL){
        return -1;
    }
    copy_to_node(item, ptr);
    ptr->next=NULL;
    if(queue_is_empty(pq)){
        pq->front=pq->rear=ptr;
        pq->items=pq->items+1;
        return 0;
    }
    else{
        pq->rear->next=ptr;
        pq->rear=ptr;
        pq->items=pq->items+1;
        return 0;
    }
}

int dequeue(Item *pitem, Queue *pq)
{
    
    // add missing stuff
    if(queue_is_empty(pq))
        return -1;
    Node *temp;
    temp=(Node*)malloc(sizeof(Node));
    temp=pq->front;
    copy_to_item(temp, pitem);
    pq->front=pq->front->next;
    free(temp);
    pq->items-=1;
    if(queue_is_empty(pq)){
        pq->front=NULL;
        pq->rear=NULL;
    }
    return 0;
}

int printfq(Queue *pq)
{
    printf("content of the queue: ");
    Node *temp;
    temp=(Node*)malloc(sizeof(Node));
    if(temp==NULL)
        return -1;
    temp=pq->front;
    while(temp!=NULL){
        printf("%d ",temp->item);
        temp=temp->next;
    }
    printf("\n");
    free(temp);
    return 0;
}


void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}


static void copy_to_node(Item item, Node *pn)
{
    pn->item = item;
}

static void copy_to_item(Node *pn, Item *pi)
{
    *pi = pn->item;
}
