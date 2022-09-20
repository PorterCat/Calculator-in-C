#include<stdio.h>

#define STACK_MAX_SIZE 20

int peekchar(void); //signature cin.peek() in C++
void cpush(int ,int);

int main()
{
    char ch;
    ch = peekchar();
    printf("%c", ch);

}

int peekchar(void) //semantic
{
    int c = getchar();
    if (c != EOF) ungetc(c, stdin);  /* puts it back */
    return c;
}

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