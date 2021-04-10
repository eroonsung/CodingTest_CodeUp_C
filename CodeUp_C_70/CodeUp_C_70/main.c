//
//  main.c
//  CodeUp_C_70
//
//  Created by Leehyun Sung on 10/04/2021.
//  Copyright © 2021 Eroon. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int season;
    scanf("%d", &season);
    switch (season) {
        case 12:
        case 1:
        case 2:
            printf("winter");
            break;
        case 3:
        case 4:
        case 5:
            printf("spring");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer");
            break;
        default:
            printf("fall");
            break;
    }
}
