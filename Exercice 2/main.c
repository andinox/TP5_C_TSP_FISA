//
// Created by nicolas on 21/01/25.
//
#include <stdio.h>
#include <string.h>
#include "list/list.h"


int main() {
    struct node *n1 = create("bonjour");
    struct node *n2 = create("monde");

    n1->next = n2;

    printf("%s\n", n1->element);
    printf("%s\n", n1->next->element);

    display(n1);

    struct node *n3 = create("ccc");
    struct node *n4 = insert(n3, "bbb");
    struct node *n5 = insert(n4, "aaa");

    display(n5);

    struct node *list = NULL;
    const char *a[6] = {"que", "la", "force", "soit", "avec", "toi"};
    for (int i = 0; i < 6; i++) {
        list = insert(list, a[i]);
    }

    display(list);

    list = destroy(list, "force");

    display(list);



}