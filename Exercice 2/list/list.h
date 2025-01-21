#ifndef OPERATION_H
#define OPERATION_H

struct node { char element[256]; struct node *next; };
struct node* create(const char *element);
void display(struct node* linkedList);
struct node *insert(struct node *linkedList, const char *str);
struct node *destroy(struct node *linkedList, const char *str);
#endif