#include<stdio.h>
#include <stek_c.c>


int peekchar(void); //signature cin.peek() in C++


int main()
{
    char ch;
    ch = peekchar();
    printf("%c", ch);

    Stack_new stack;
    push(&stack, 3);


}



int peekchar(void) //semantic
{
    int c = getchar();
    if (c != EOF) ungetc(c, stdin);  /* puts it back */
    return c;
}

