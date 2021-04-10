//
//  main.c
//  CodeUp_C_68
//
//  Created by Leehyun Sung on 10/04/2021.
//  Copyright © 2021 Eroon. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    if(a >= 90) printf("A");
    else if(a >=70) printf("B");
    else if(a >=40) printf("C");
    else printf("D");
    
    return 0;
}
