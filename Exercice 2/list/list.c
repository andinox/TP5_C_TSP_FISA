#include <stdlib.h>
#include <string.h>
#include "list.h"
#include <stdio.h>

struct node* create(const char *element) {
    struct node *new_node = malloc(sizeof(struct node));

    strcpy(new_node->element, element);
    new_node->next = NULL;
    return new_node;
}

void display(struct node* linkedList) {
    struct node* current = linkedList;
    while (current != NULL) {
        printf("%s ", current->element);
        current = current->next;
    }
    printf("\n");
}

struct node *insert(struct node *linkedList, const char *str) {
    struct node* new_node = create(str);
    if (linkedList == NULL) return new_node;
    struct node* current = linkedList;
    struct node* prev = NULL;

    while (current != NULL && strcmp(current->element, str) < 0) {
        prev = current;
        current = current->next;
    }

    if (prev == NULL) {
        new_node->next = linkedList;
        return new_node;
    } else {
        new_node->next = current;
        prev->next = new_node;
    }

    return linkedList;
}


struct node *destroy(struct node *linkedList, const char *str) {
    struct node* current = linkedList;
    struct node* prev = NULL;

    while (current != NULL && strcmp(current->element, str) != 0) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) return linkedList;

    if (prev == NULL) {
        linkedList = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
    return linkedList;
}