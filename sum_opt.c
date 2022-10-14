#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>

#define MAX_NUM 100000000
//#define MAX_NUM 1000000000
//#define MAX_NUM INT_MAX
//#define MAX_NUM 100000

struct vec {
    int len;
    int* data;
};
typedef struct vec vec_t;


int vec_length(vec_t* v)
{
    assert(v);
    return v->len;
}

int combine(vec_t* v)
{
    assert(v);
    int result = 0;
    int len = vec_length(v);
    for (int i = 0; i < len; i+=2) {
        result = result + (v->data[i]+v->data[i+1]);
    }
    return result;
}

void init(vec_t* v)
{
    assert(v);
    v->len = MAX_NUM;
    v->data = (int*)malloc(sizeof(int) * MAX_NUM);

    // init
    for (int i = 0; i < MAX_NUM; i++) {
        v->data[i] = i;
        v->data[i + 1] = i + 1;
    }
}

int main()
{
    
    printf("This is the naive version .. \n");

    vec_t info;
    // init
    init(&info);

    // combine
    printf("combined val = %d\n", combine(&info));
  
    return 0;
}

