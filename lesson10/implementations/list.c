#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data; 
    struct list* next; 
    struct list* prev;
};

struct list* init_list(int a) 
{
    struct list* lst = (struct list*)malloc(sizeof(struct list));
    lst->data = a;
    lst->next = NULL;
    lst->prev = NULL;
    return lst;
}

void add_elem_first(list** head, int a) {
    struct list* newlst = (struct list*)malloc(sizeof(struct list));
    newlst->data = a;
    newlst->prev = NULL;
    newlst->next = *head;
    if ((*head) != NULL)
        (*head)->prev = newlst;
    (*head) = newlst;

}

void add_elem_last(list* head, int a) {
    struct list* current = head;
    while (current->next != NULL)
        current = current->next;

    current->next = (struct list*)malloc(sizeof(struct list));
    current->next->data = a;
    current->next->next = NULL;
    current->next->prev = current;
}


void del_elem_first(list** head) 
{
    list* next_node = NULL;
    next_node = (*head)->next;
    int retval = (*head)->data;
    free(*head);
    *head = next_node;

}

void del_elem_last(list* head)
{
    int retval = 0;
    if (head->next == NULL) {
        free(head);
    }

    list* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    free(current->next);
    current->next = NULL;

}

void del_elem_by_index(list** head, int n) {
    int i = 0;
    list* current = *head;
    list* temp_node = NULL;

    if (n == 0) {
        return del_elem_first(head);
    }

    for (i = 0; i < n - 1; i++) {
        if (current->next == NULL) {
            exit(-1);
        }
        current = current->next;
    }

    if (current->next == NULL) {
        exit(-1);
    }

    temp_node = current->next;
    current->next = temp_node->next;
    current->next->prev = current;
    free(temp_node);

}

void listprint(list* lst)
{
    struct list* p;
    p = lst;
    do {
        printf("%d ", p->data); 
        p = p->next;
    } while (p != NULL);
    printf("\n");
}

int main()
{
    list* forward_list = init_list(5);
    add_elem_last(forward_list, 10);
    add_elem_last(forward_list, 15);
    add_elem_last(forward_list, 20);
    add_elem_first(&forward_list, 0);
    listprint(forward_list);
    del_elem_first(&forward_list);
    del_elem_last(forward_list);
    del_elem_by_index(&forward_list,1);
    listprint(forward_list);
    return 0;
}
