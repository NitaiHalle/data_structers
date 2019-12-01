//
//  Stack.h
//  data_structers
//
//  Created by Nitai Halle on 24/11/2019.
//  Copyright © 2019 Nitai Halle. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>

typedef struct {
    int data;
    struct Node* next;
}Node;

typedef struct {
    Node* head;
    int size;
} Stack;

#endif /* Stack_h */

Node* createNode(int data);
Stack* createStack(void);
int isEmpty(Stack* s);

void push (Stack* stack, int data);

int pop(Stack* s);
int top(Stack* s);
