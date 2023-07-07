#include "Lists.h"
#include <string.h>
#include <stdlib.h>

LinkedList create_linked_list(void * initial_value){
    Node head;
    head.data = initial_value;
    head.next = 0;
    LinkedList list;
    list.size = 1;
    list.head = &head;
    return list;
}

void add_to_linked_list(LinkedList * list, void * element){
    Node next;
    next.data = element;
    next.next = 0;
    Node current = *list->head;
    while(current.next){
        current = *current.next;
    }
    current.next = &next;
    list->size++;
}

void * get_from_linked_list(LinkedList * list, int index){
    Node current = *list->head;
    int i = 0;
    while(i != index){
        current = *current.next;
        i++;
    }
    return current.data;
}

void remove_from_linked_list(LinkedList * list, int index){
    Node previous;
    Node current = *list->head;
    int i = 0;
    while(i != index){
        previous = current;
        current = *current.next;
        i++;
    }
    previous.next = current.next;
}

void clear_linked_list(LinkedList * list){
    Node* next;
    Node* current = list->head;
    int i = 0;
    while(i != list->size){
        next = current->next;
        current = 0;
    }
}
