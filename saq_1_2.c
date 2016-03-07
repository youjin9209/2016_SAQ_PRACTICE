/* 1장
 * 2절 삽입정렬
 * 10개의 입력된 정수 중에서 위치를 알고자 하는 정수하나를 입력한다.
 * 가장 작은 수 부터 정렬하여 나열한다.
 * 추가로 입력된 정수의 위치를 출력한다. (첨자는 1부터 시작한다.)
 */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // insert code here...
    int integerArray[10] = {0};
    
    int i = 0, j = 0, nTmp = 0;
    
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
        }
    }
    
    for(i = 1; i < 10; i++)
    {
        nTmp = integerArray[i];
        j = i-1;
        while(j>=0 && nTmp < integerArray[j]) {
            integerArray[j+1] = integerArray[j];
            j = j-1;
        }
        integerArray[j+1] = nTmp;
    }
    
    for(int w = 0; w < 10; w++)
    {
        printf("%d ", integerArray[w]);
    }
    
    printf("\n");
    
    return 0;
}
