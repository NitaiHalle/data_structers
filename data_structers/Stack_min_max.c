//
//  Stack_min_max.c
//  data_structers
//
//  Created by Nitai Halle on 24/11/2019.
//  Copyright © 2019 Nitai Halle. All rights reserved.
//

#include "Stack_min_max.h"
#include "Stack.h"
#include <stdlib.h>


Stack_min_max* createStack_min_max(){
    Stack_min_max* stack_min_max= (Stack_min_max*)malloc(sizeof(Stack_min_max));
    stack_min_max->stack= createStack();
    stack_min_max->max= createStack();
    stack_min_max->min= createStack();
    return stack_min_max;
}
int is_Empty_minmax(Stack_min_max* s){
    if (s->stack->size == 0){
        return 1;
    }
    else{
        return 0;
    }
}
void push_minmax (Stack_min_max* s, int data){
    if (is_Empty_minmax(s)){
        push(s->stack, data);
        push(s->max,data);
        push(s->min,data);
    }else{
        push(s->stack, data);
        int min = top(s->min);
        int max = top(s->max);
        if (data > max){
            push(s->max, data);
        }else{
            push(s->max, max);
        }
        
        if(data < min){
            push(s->min, data);
        }else{
            push(s->min,min);
        }
    }
}
int pop_minmax(Stack_min_max* s){
    int value = (int)NULL;
    if(is_Empty_minmax(s)){
        printf("the stack is empty !\n");

    }else{
        value = pop(s->stack);
        pop(s->max);
        pop(s->min);
    }
    return value;
}

int top_max(Stack_min_max* s){
    return top(s->max);
}

int top_min(Stack_min_max* s){
    return top(s->min);
}
