#include <malloc.h>
#include <stdio.h>
using namespace std;

 int m = 0;
 int stack[500];
 int pop(void)
 {
     if (m > 0)
     {
          return stack[--m];
     }
     else
     {
          fprintf(stderr, "Stack is empty\n");
          return 0;
     }
 };

 void push(int a)
 {
     stack[m++] = a;
 };
 int empty()
 {
     return (m == 0);
 }

 int main()
 {
    
     int i;
     while (!feof(stdin))
     {
         int c = getchar();
         int x;
         switch (c)
         {
             case '\n':
             case ' ' : break;
             case '=' : printf("Result = %d\n", pop()); break;
             case '+' : push(pop() + pop()); break;
             case '-' : push(-pop() + pop()); break;
             case '*' : push(pop() * pop()); break;
             default:
                 ungetc(c, stdin);
                 if (scanf("%d", &x) != 1)
                 {
                     fprintf(stderr, "Can't read integer\n");
                     return -1;
                 } else {
                     push(x);
                 }
                 break;
          }
    }
 result:
     i = 0;
     while (!empty())
     {
         printf("Stack[%d] = %d\n", i,  pop());
         i++;
     }
     return 0;
 }
