#include <stdio.h>
#include <stdlib.h>

struct Term { int coeff, exp; struct Term* next; };

void insert(struct Term** poly, int c, int e) {
    struct Term* n = malloc(sizeof(struct Term)), *t=*poly;
    n->coeff=c; n->exp=e; n->next=NULL;
    if(!*poly||(*poly)->exp<e){ n->next=*poly; *poly=n; return; }
    while(t->next && t->next->exp>e) t=t->next;
    if(t->next && t->next->exp==e){ t->next->coeff+=c; free(n); }
    else { n->next=t->next; t->next=n; }
}

void print(struct Term* p){
    if(!p){ printf("0\n"); return; }
    while(p){ printf("%d",p->coeff);
        if(p->exp) printf("x^%d",p->exp);
        if(p->next&&p->next->coeff>0) printf(" + ");
        p=p->next;
    } printf("\n");
}

struct Term* add(struct Term* a, struct Term* b,int s){
    struct Term* r=NULL;
    while(a||b){
        if(!b||(a&&a->exp>b->exp)) { insert(&r,a->coeff,a->exp); a=a->next; }
        else if(!a||b->exp>a->exp) { insert(&r,s*b->coeff,b->exp); b=b->next; }
        else { if(a->coeff+s*b->coeff) insert(&r,a->coeff+s*b->coeff,a->exp);
               a=a->next; b=b->next; }
    }
    return r;
}

int main(){
    struct Term *p1=NULL,*p2=NULL;
    insert(&p1,4,3); insert(&p1,3,2); insert(&p1,2,1); insert(&p1,1,0);
    insert(&p2,3,3); insert(&p2,2,2); insert(&p2,1,1); insert(&p2,5,0);

    printf("Polynomial 1: "); print(p1);
    printf("Polynomial 2: "); print(p2);

    struct Term* sum=add(p1,p2,1);
    printf("\nSum of Polynomials: "); print(sum);

    struct Term* diff=add(p1,p2,-1);
    printf("\nDifference of Polynomials: "); print(diff);
}
