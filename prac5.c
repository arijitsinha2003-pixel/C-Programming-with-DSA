#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to print the list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Insert at the beginning
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;   // link new node to old head
    *head = newNode;         // update head
}

// Insert at the end
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {  // if list empty
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {  // go to last node
        temp = temp->next;
    }
    temp->next = newNode;  // link last node to new node
}

// Insert after a given node
void insertAfter(struct Node* prevNode, int value) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Main function
int main() {
    struct Node* head = NULL;

    // Insert elements
    insertAtEnd(&head, 10);     // List: 10
    insertAtBeginning(&head, 5); // List: 5 -> 10
    insertAtEnd(&head, 20);     // List: 5 -> 10 -> 20
    insertAfter(head->next, 15); // Insert after 10 → List: 5 -> 10 -> 15 -> 20

    // Print final list
    printf("Linked List after insertions: ");
    printList(head);

    return 0;
}
