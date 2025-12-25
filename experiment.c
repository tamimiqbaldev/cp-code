#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *nxt;
}node;

node *head = NULL;  // Make head global so all functions can access

void Create(){
    head = NULL;
    node *temp = NULL;
    
    printf("How many Node You Wanna create: ");
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int val; scanf("%d", &val);
        
        node *new = malloc(sizeof(node));
        new->data = val;
        new->nxt = NULL;

        if(head == NULL){
            head = temp = new;
        }else{
            temp->nxt = new;
            temp = new;
        }
    }

    printf("Linked List: ");
    temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->nxt;
    }
    printf("\n");
}

void Search(){
    if(head == NULL){
        printf("List is empty!\n");
        return;
    }

    printf("Enter a value to search: ");
    int val; scanf("%d", &val);
    node *temp = head;
    int idx = 1;

    while(temp != NULL){
        if(temp->data == val){
            printf("Found at position: %d\n", idx);
            return;
        }
        temp = temp->nxt;
        idx++;
    }

    printf("Value not found.\n");
}

void Delete(){
    if(head == NULL){
        printf("List is empty!\n");
        return;
    }

    printf("Enter index to delete: ");
    int index; scanf("%d", &index);

    if(index == 1){
        node *del = head;
        head = head->nxt;
        free(del);
    }else{
        node *temp = head;
        for(int i = 1; i < index - 1 && temp->nxt != NULL; i++){
            temp = temp->nxt;
        }

        if(temp->nxt == NULL){
            printf("Index out of range!\n");
            return;
        }

        node *del = temp->nxt;
        temp->nxt = del->nxt;
        free(del);
    }

    printf("Updated List: ");
    node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->nxt;
    }
    printf("\n");
}

void Insert(){
    printf("Enter index to insert at: ");
    int index; scanf("%d", &index);
    printf("Enter value: ");
    int val; scanf("%d", &val);

    node *new = malloc(sizeof(node));
    new->data = val;
    new->nxt = NULL;

    if(index == 1){
        new->nxt = head;
        head = new;
    }else{
        node *temp = head;
        for(int i = 1; i < index - 1 && temp != NULL; i++){
            temp = temp->nxt;
        }

        if(temp == NULL){
            printf("Index out of range!\n");
            free(new);
            return;
        }

        new->nxt = temp->nxt;
        temp->nxt = new;
    }

    printf("Updated List: ");
    node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->nxt;
    }
    printf("\n");
}

int main(){
    int cs = 0;
    printf("---Menu---\n");
    printf("Case %d: Create Linked List\n", ++cs);
    printf("Case %d: Search a Number In Linked List\n", ++cs);
    printf("Case %d: Delete a Number In Linked List\n", ++cs);
    printf("Case %d: Insert a Number In Linked List\n", ++cs);
    printf("Print %d to exit\n", ++cs);

    while(1){
        printf("\nWhat do you want to do?: ");
        int opt;
        scanf("%d", &opt);

        if(opt == 5) break;

        switch(opt){
            case 1: Create(); break;
            case 2: Search(); break;
            case 3: Delete(); break;
            case 4: Insert(); break;
            default: printf("Invalid Option, Try Again.\n");
        }
    }

    return 0;
}
