//
//  main.c
//  CodeUp_C_45
//
//  Created by Leehyun Sung on 03/04/2021.
//  Copyright © 2021 Eroon. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    printf("%.2f\n", (float)a/(float)b);
    return 0;
}
