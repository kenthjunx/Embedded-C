#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    uint8_t *const buffer;  // constant pointer to a uint8 type variable
    int head;
    int tail;
    const int maxlen;  // maxlen is an int constant
} ring_bbuf_t;

void init(ring_bbuf_t *, int);
bool isEmpty(ring_bbuf_t *);
bool isFull(ring_bbuf_t *);
bool push(ring_bbuf_t *, uint8_t);
int pop(ring_bbuf_t *);

int main() {
    uint8_t buffer = 0;
    ring_bbuf_t queue = {&buffer, -1, -1, 8};
    // ring_bbuf_t *queue = malloc(sizeof(ring_bbuf_t));
    // printf("%s\n", isEmpty(&queue) ? "true" : "false");
    // init(queue, 10);
    // printf("%s\n", isEmpty(&queue) ? "true" : "false");

    push(&queue, 1);
    printf("%d\n", *queue.buffer);
    push(&queue, 2);
    printf("%d\n", *queue.buffer);
    int t = pop(&queue);
    printf("t = %d\n", t);
    // int i = 0;
    // while (i < queue.maxlen) {
    //     i++;
    // }

    return 0;
}

void init(ring_bbuf_t *q, int size) {
    *(q->buffer) = 0;
    q->head = -1;
    q->tail = -1;
    // *(q->maxlen) = size;
}

bool isEmpty(ring_bbuf_t *q) { return (q->head == -1 && q->tail == -1); }

// bool isFull(ring_bbuf_t *q){ return (q->head)}

bool push(ring_bbuf_t *q, uint8_t value) {
    *(q->buffer) = value;
    q->tail = (q->tail + 1) % q->maxlen;

    return true;
}

int pop(ring_bbuf_t *q) {
    int result;
    result = q->buffer;
    q->head = (q->head + 1) % q->maxlen;
    return result;
}