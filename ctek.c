#include<stdio.h>
#define STACK_MAX_SIZE 20

typedef int T;
typedef struct Stack_tag
{
    T data[STACK_MAX_SIZE];
    size_t size;
} Stack_t;

void cpush(Stack_t*stack, const T value)
{
    stack->data[stack->size] = value;
    stack->size++;
}

int main()
{

}
