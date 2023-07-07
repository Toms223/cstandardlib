#include "Lists.h"
#include <string.h>
#include <stdlib.h>


ArrayList create_array_list(){
    void * array = calloc(32, sizeof(void*));
    ArrayList list;
    list.size = 0;
    list.max_size = 32;
    list.list = array;
    return list;
}

int check_array_list_full(ArrayList* list){
    for(int i = 0; i < list->max_size; i++){
        int element = *(int *)(list->list + i*sizeof(void *));
        if(element == 0){
            return 0;
        }
    }
    void * array = calloc(list->max_size * 2, sizeof(void *));
    for(int i = 0; i< list->max_size; i++){
        void * element = list->list + i*sizeof(void *);
        memmove(array + i*sizeof(void *),element,sizeof(element));
    }
    for(int i = 0; i< list->max_size; i++){
        void * element = list->list + i*sizeof(void *);
        free(element);
    }
    free(list->list);
    list->list = array;
    return 1;
}

void add_to_array_list(ArrayList* list, void* element_to_be_added){
    check_array_list_full(list);
    int i = 0;
    for(i;i < list->max_size; i++){
        int element = *(int *)(list->list + i*sizeof(void *));
        if(element == 0){
            break;
        }
    }
    memcpy(list->list + i*sizeof(void *),element_to_be_added,sizeof(element_to_be_added));
    list->size++;
}

void remove_from_array_list(ArrayList* list, int index){
    for(int i = index; i < list->size-1; i++){
        memmove(list->list + i*sizeof(void *), list->list + (i+1)*sizeof(void *), sizeof(void *));
    }
    list->size--;
}

void * get_from_array_list(ArrayList* list, int index){
    return list->list + index*sizeof(void *);
}

void clear_array_list(ArrayList *list){
    for(int i = 0; i < list->size; i++){
        memset(list->list + i*sizeof(void *), 0, sizeof(void *));
    }
    free(list->list);
}
