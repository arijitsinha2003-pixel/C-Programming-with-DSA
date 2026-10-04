#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

typedef struct {
    char arr[MAX];
    int top;
} Stack;

void init(Stack *s) { s->top = -1; }
int empty(Stack *s) { return s->top == -1; }
void push(Stack *s, char c) { s->arr[++s->top] = c; }
char pop(Stack *s) { return empty(s) ? '\0' : s->arr[s->top--]; }
char peek(Stack *s) { return empty(s) ? '\0' : s->arr[s->top]; }

int prec(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

void infixToPostfix(char *infix, char *postfix) {
    Stack s; init(&s);
    int k = 0;
    for (int i = 0; infix[i]; i++) {
        char c = infix[i];
        if (isspace(c)) continue;
        if (isalnum(c)) postfix[k++] = c;
        else if (c == '(') push(&s, c);
        else if (c == ')') {
            while (!empty(&s) && peek(&s) != '(') postfix[k++] = pop(&s);
            if (!empty(&s)) pop(&s); // remove '('
        } else { // operator
            while (!empty(&s) && prec(peek(&s)) >= prec(c)) {
                if (c == '^' && peek(&s) == '^') break; // right-associative
                postfix[k++] = pop(&s);
            }
            push(&s, c);
        }
    }
    while (!empty(&s)) postfix[k++] = pop(&s);
    postfix[k] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];
    printf("Enter infix: ");
    fgets(infix, MAX, stdin);
    infix[strcspn(infix, "\n")] = 0; // remove newline
    infixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);
    return 0;
}
