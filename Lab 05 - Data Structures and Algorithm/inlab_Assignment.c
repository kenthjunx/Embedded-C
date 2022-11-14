#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

typedef struct {
    uint8_t *const buffer;
    int head;
    int tail;
    const int maxlen;
} ring_bbuf_t;

bool push(ring_bbuf_t *, uint8_t);
bool pop(ring_bbuf_t *, uint8_t);
bool isFull(ring_bbuf_t *);
bool isEmpty(ring_bbuf_t *);
void print(ring_bbuf_t *);

int main() {
    uint8_t arr[MAX_SIZE];
    ring_bbuf_t buffer = {malloc(sizeof(arr)), -1, -1, MAX_SIZE};

    // print(&buffer);

    // printf("%s\n",push(&buffer, 1)?"true":"false");
    // print(&buffer);
    push(&buffer, 1);
    // printf("%d\n", buffer.buffer[0]);
    print(&buffer);

    return 0;
}

void print(ring_bbuf_t *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    for (int i = q->head; i != q->tail; i = (i + 1) % q->maxlen)
        printf("%d ", q->buffer[i++]);
}

bool isFull(ring_bbuf_t *q) {
    return ((q->head == q->tail + 1) ||
            (q->head == 0 && q->tail == q->maxlen - 1));
}

bool isEmpty(ring_bbuf_t *q) { return (q->head == -1 && q->tail == -1); }

bool push(ring_bbuf_t *q, uint8_t value) {
    if (isFull(q)) return false;

    if (q->head == -1) q->head = 0;
    q->tail = (q->tail + 1) % q->maxlen;
    q->buffer[q->tail] = value;

    return true;
}