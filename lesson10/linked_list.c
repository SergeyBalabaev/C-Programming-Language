#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data; 
    struct list* ptr; 
};

struct list* init_list(int a) 
{
    struct list* lst;
    lst = (struct list*)malloc(sizeof(struct list));
    lst->data = a;
    lst->ptr = NULL; 
    return lst;
}

void add_elem_last(list* head, int number)
{
    struct list* current = head;
    while (current->ptr != NULL) {
        current = current->ptr;
    }
    current->ptr = (struct list*)malloc(sizeof(list));
    current->ptr->data = number;
    current->ptr->ptr = NULL;
}

void add_elem_first(list** head, int val)
{
    list* new_node = (struct list*)malloc(sizeof(list));;
    new_node->data = val;
    new_node->ptr = *head;
    *head = new_node;
}

void del_elem_first(list** head) 
{
    int retval = -1;
    list* next_node = NULL;
    next_node = (*head)->ptr;
    retval = (*head)->data;
    free(*head);
    *head = next_node;

}

void del_elem_last(list* head)
{
    int retval = 0;
    if (head->ptr == NULL) {
        free(head);
    }

    list* current = head;
    while (current->ptr->ptr != NULL) {
        current = current->ptr;
    }

    free(current->ptr);
    current->ptr = NULL;

}

void del_elem_by_index(list** head, int n) {
    int i = 0;
    list* current = *head;
    list* temp_node = NULL;

    if (n == 0) {
        return del_elem_first(head);
    }

    for (i = 0; i < n - 1; i++) {
        if (current->ptr == NULL) {
            exit(-1);
        }
        current = current->ptr;
    }

    if (current->ptr == NULL) {
        exit(-1);
    }

    temp_node = current->ptr;
    current->ptr = temp_node->ptr;
    free(temp_node);

}


void listprint(list* lst)
{
    struct list* p;
    p = lst;
    do {
        printf("%d ", p->data); 
        p = p->ptr;              
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
