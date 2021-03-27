//
//  main.c
//  CodeUp_C_19
//
//  Created by Leehyun Sung on 27/03/2021.
//  Copyright © 2021 Eroon. All rights reserved.
//

#include<stdio.h>

int main()
{
    int year, mon, day;
    scanf("%d.%d.%d",&year, &mon, &day);
    printf("%04d.%02d.%02d", year, mon, day);
    return 0;
}

