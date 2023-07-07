#ifndef DATASTRUCTURES_LISTS_H
#define DATASTRUCTURES_LISTS_H

#include <stddef.h>

typedef struct {
        int size;
        size_t max_size;
        void* list;
} ArrayList;

typedef struct node{
    void * data;
    struct node * next;
} Node;

typedef struct {
    int size;
    Node * head;
} LinkedList;

ArrayList create_array_list();
int check_array_list_full(ArrayList* list);
void add_to_array_list(ArrayList* list, void* element_to_be_added);
void remove_from_array_list(ArrayList* list, int index);
void * get_from_array_list(ArrayList* list, int index);
void clear_array_list(ArrayList *list);

LinkedList create_linked_list(void * initial_value);
void add_to_linked_list(LinkedList * list, void * element);
void * get_from_linked_list(LinkedList * list, int index);
void remove_from_linked_list(LinkedList * list, int index);
void clear_linked_list(LinkedList * list);

#endif //DATASTRUCTURES_LISTS_H
