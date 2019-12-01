//
//  Stack.c
//  data_structers
//
//  Created by Nitai Halle on 24/11/2019.
//  Copyright © 2019 Nitai Halle. All rights reserved.
//
#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>


Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
Stack* createStack(){
    Stack* newStack = (Stack*)malloc(sizeof(Stack));
    newStack->size = 0;
    return newStack;
}
int isEmpty(Stack* s){
    if (s->size == 0){
        return 1;
    }
    else{
        return 0;
    }
}
void push (Stack* stack, int data){
    Node* curr = createNode(data);
    if (isEmpty(stack)){
        stack->head = curr;
    }else{
        curr->next = stack->head;
        stack->head = curr;
    }
    stack->size++;
}
int pop(Stack* s){
    int value = (int)NULL;
    if(isEmpty(s)){
        printf("the stack is empty !!\n");

    }else{
        Node* tmp = s->head;
        s->head = tmp->next;
        value = tmp->data;
        free(tmp);
        s->size--;
    }
    return value;
}
int top(Stack* s){
    int value = (int)NULL;
    if(isEmpty(s)){
        //printf("the stack is empty !\n");
    }else{
        value = s->head->data;
    }
    return value;
}

