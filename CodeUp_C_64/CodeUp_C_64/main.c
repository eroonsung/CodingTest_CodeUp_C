//
//  main.c
//  CodeUp_C_64
//
//  Created by Leehyun Sung on 10/04/2021.
//  Copyright © 2021 Eroon. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a<b ? a:b)<c ? (a<b ? a:b):c);
    return 0;
}
