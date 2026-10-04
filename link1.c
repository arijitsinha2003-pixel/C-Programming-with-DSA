// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };

// int main(){

//     struct Node* head = NULL;
//     struct Node* second = NULL;
//     struct Node* third = NULL;

//     head = (struct Node*)malloc(sizeof(struct Node));
//     second = (struct Node*)malloc(sizeof(struct Node));
//     third = (struct Node*)malloc(sizeof(struct Node));

//     head->data=10;
//     head->next=second;

//     second->data=20;
//     second->next=third;

//     third->data=30;
//     third->next=NULL;

//     struct Node* temp = head;
//     while(temp != NULL){
//         printf("%d -> ",temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main(){

    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data=50;
    head->next=second;

    second->data=40;
    second->next=third;

    third->data=30;
    third->next=NULL;

    struct node* temp = head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    return 0;
}