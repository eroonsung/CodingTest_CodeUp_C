//
//  main.c
//  CodeUp_C_27
//
//  Created by Leehyun Sung on 27/03/2021.
//  Copyright © 2021 Eroon. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int year, month, day;
    scanf("%d.%d.%d", &year, &month, &day);
    printf("%02d-%02d-%04d", day, month, year);
    return 0;
}
