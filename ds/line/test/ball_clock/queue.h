#ifndef QUEUE_H__
#define QUEUE_H__

#define MAXSIZE		32

typedef struct
{
	int data[MAXSIZE];
	int front,tail;
}sequeue;

sequeue *queue_create();

int queue_isempty(sequeue *);

int queue_isfull(sequeue *);

int queue_enqueue(sequeue *,int x);

int queue_dequeue(sequeue *,int *x);

void queue_display(sequeue *);

void queue_destroy(sequeue *);

#endif


