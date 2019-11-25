//
//  Stack_min_max.h
//  data_structers
//
//  Created by Nitai Halle on 24/11/2019.
//  Copyright © 2019 Nitai Halle. All rights reserved.
//

#ifndef Stack_min_max_h
#define Stack_min_max_h

#include <stdio.h>

#endif /* Stack_min_max_h */
#include "Stack.h"
typedef struct {
    Stack* stack;
    Stack* min;
    Stack* max;
    
} Stack_min_max;

Stack_min_max* createStack_min_max(void);
int is_Empty_minmax(Stack_min_max* s);
void push_minmax (Stack_min_max* s, int data);
int pop_minmax(Stack_min_max* s);
int max(Stack_min_max* s);
int min(Stack_min_max* s);
