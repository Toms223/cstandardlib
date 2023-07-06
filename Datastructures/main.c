#include <stdio.h>
#include "List.h"

int main(){
    List list = create_list();
    int numbers[] = {10,1,2,3,4,5,};
    for(int i = 0; i < 6;i++){
        add_to_list(&list,&numbers[i]);
    }
    printf("The list is of size: %d\n",list.size);
    for(int i = 0; i < list.size;i++){
        printf("%d this was the value stored.\n", *(int*)get_from_list(&list,i));
    }
    printf("%d this was the before value stored.\n", *(int*)get_from_list(&list,2));
    remove_from_list(&list, 2);
    printf("%d this was the after value stored.\n", *(int*)get_from_list(&list,2));
    clear_list(&list);
    printf("%d this was the cleared value stored.\n", *(int*)get_from_list(&list,2));
}