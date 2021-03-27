//
//  main.c
//  CodeUp_C_24
//
//  Created by Leehyun Sung on 27/03/2021.
//  Copyright © 2021 Eroon. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int i;
    char a[21];
    scanf("%s", &a);
    for (i = 0; i < 21; i++) {
        if (a[i] == '\0') break;
        printf("\'\%c\'\n", a[i]); 
    }
    return 0;
}
