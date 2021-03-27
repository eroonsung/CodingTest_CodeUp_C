//
//  main.c
//  CodeUp_C_22
//
//  Created by Leehyun Sung on 27/03/2021.
//  Copyright © 2021 Eroon. All rights reserved.
//

#include <stdio.h>

int main(void) {
    char a[2001];
    fgets(a, 2000, stdin);
    printf("%s", a);
    return 0;
}
