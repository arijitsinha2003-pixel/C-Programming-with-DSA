#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include <string.h> 
#define MAX 100 
typedef struct { 
 char items[MAX]; 
 int top; 
} Stack; 
void initStack(Stack *s) { 
 s->top = -1; 
} 
int isEmpty(Stack *s) { 
 return s->top == -1; 
} 
int isFull(Stack *s) { 
 return s->top == MAX - 1; 
} 
void push(Stack *s, char c) { 
 if (!isFull(s)) { 
 s->items[++(s->top)] = c; 
 } else { 
 printf("Stack overflow\n"); 
 } 
} 
char pop(Stack *s) { 
 if (!isEmpty(s)) { 
 return s->items[(s->top)--]; 
 } else { 
 printf("Stack underflow\n");
 return '\0'; 
 } 
} 
char peek(Stack *s) { 
 if (!isEmpty(s)) { 
 return s->items[s->top]; 
 } else { 
 return '\0'; 
 } 
} 
int precedence(char op) { 
 switch(op) { 
 case '+': 
 case '-': return 1; 
 case '*': 
 case '/': return 2; 
 case '^': return 3;  
 default: return 0; 
 } 
} 
int isOperator(char c) { 
 return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^'); } 
void infixToPostfix(char *infix, char *postfix) {  Stack s; 
 initStack(&s); 
 int i = 0, k = 0; 
 char c; 
 while ((c = infix[i++]) != '\0') { 
 if (isspace(c)) continue;  
 if (isalnum(c)) { 
 postfix[k++] = c; 
 } 
 else if (c == '(') { 
 push(&s, c); 
 } 
 else if (c == ')') { 
 while (!isEmpty(&s) && peek(&s) != '(') {  postfix[k++] = pop(&s); 
 } 
 if (!isEmpty(&s) && peek(&s) == '(')  pop(&s); 
 else { 
 printf("Invalid expression: mismatched parentheses\n");  exit(1); 
 } 
 } 
 else if (isOperator(c)) { 
 while (!isEmpty(&s) && precedence(peek(&s)) >= precedence(c)) {  if (c == '^' && peek(&s) == '^') break; 
 postfix[k++] = pop(&s); 
 } 
 push(&s, c); 
 } 
 else { 
 printf("Invalid character encountered: %c\n", c); 
 exit(1); 
 } 
 } 
 while (!isEmpty(&s)) { 
 if (peek(&s) == '(') { 
 printf("Invalid expression: mismatched parentheses\n");  exit(1); 
 } 
 postfix[k++] = pop(&s); 
 } 
 postfix[k] = '\0';
} 
int main() { 
 char infix[MAX], postfix[MAX]; 
 printf("Enter an infix expression: "); 
 fgets(infix, MAX, stdin); 
 size_t len = strlen(infix); 
 if (len > 0 && infix[len - 1] == '\n') { 
 infix[len - 1] = '\0'; 
 } 
 infixToPostfix(infix, postfix); 
 printf("Postfix expression: %s\n", postfix); 
 return 0; 
} 