//
//  main.c
//  CodeUp_C_56
//
//  Created by Leehyun Sung on 06/04/2021.
//  Copyright © 2021 Eroon. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (a&&!b)||(!a&&b));
    return 0;
}
