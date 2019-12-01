//
//  main.c
//  data_structers
//
//  Created by Nitai Halle on 24/11/2019.
//  Copyright © 2019 Nitai Halle. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"
#include "Stack_min_max.h"
int main(int argc, const char * argv[]) {
//    int i;
//    Stack* first_stack = createStack();
//    for (i=0;i<10;i++){
//        push(first_stack, i);
//    }
//    while (!isEmpty(first_stack)) {
//        int tmp = pop(first_stack);
//        printf("%d\n",tmp);
//    }
//    i = pop(first_stack);
//    printf("%d\n",i);
    
    int i;
    Stack_min_max* first_stack = createStack_min_max();
    for (i=0;i<10;i++){
        push_minmax(first_stack, 5);
        push_minmax(first_stack, i);
    }
    while (!is_Empty_minmax(first_stack)) {
        int tmp = pop_minmax(first_stack);
        int max = top_max(first_stack);
        int min = top_min(first_stack);
        
        
        printf("pop %d ,max: %d,min: %d \n",tmp,max,min);
    }
    i = pop_minmax(first_stack);
    printf("%dkkk\n",i);
    return 0;
}
