//
//  main.c
//  data_structers
//
//  Created by Nitai Halle on 24/11/2019.
//  Copyright © 2019 Nitai Halle. All rights reserved.
//

#include <stdio.h>
#include "Stack.h"
int main(int argc, const char * argv[]) {
    int i;
    Stack* first_stack = createStack();
    for (i=0;i<10;i++){
        push(first_stack, i);
    }
    while (!isEmpty(first_stack)) {
        int tmp = pop(first_stack);
        printf("%d\n",tmp);
    }
    i = pop(first_stack);
    printf("%d\n",i);
    return 0;
}
