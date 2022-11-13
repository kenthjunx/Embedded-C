#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct{
    uint8_t* const buffer;
    int head;
    int tail;
    const int maxlen;
} ring_bbuf_t;

int push(ring_bbuf_t *);
int pop(ring_bbuf_t *);
int core(ring_bbuf_t *);

int main(){


    return 0;
}