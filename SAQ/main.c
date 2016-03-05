//
//  main.c
//  SAQ
//
//  Created by 한유진 on 2016. 3. 5..
//  Copyright © 2016년 한유진. All rights reserved.
//

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // insert code here...
    int integerArray[10] = {0};
    FILE *pFile = NULL;
    pFile = fopen("/Users/scarlett/Documents/input/input1.txt", "r");
    
    if (pFile != NULL)
    {
        char strTemp[255];
        char *pStr;
        char *p;
        int column = 0;
        int integerConverted = 0;
        
        pStr = fgets(strTemp, sizeof(strTemp), pFile);
        
        p = strtok(strTemp, " ");
        for(column = 0; column < 10; column++)
        {
            if(!p)
             break;
            
            integerConverted = atoi(p);
            integerArray[column] = integerConverted;
            p = strtok(NULL, " ");
            printf("%d \n", integerArray[column]);
        }
    }
    printf("Hello, World!\n");
    return 0;
}
