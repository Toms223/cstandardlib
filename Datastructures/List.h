#ifndef DATASTRUCTURES_LIST_H
#define DATASTRUCTURES_LIST_H

#include <stddef.h>

typedef struct list {
        int size;
        size_t max_size;
        void* list;
}List;

List create_list();
int check_full(List* list);
void add_to_list(List* list,void* element_to_be_added);
void remove_from_list(List* list,int index);
void * get_from_list(List* list, int index);
void clear_list(List *list);

#endif //DATASTRUCTURES_LIST_H
