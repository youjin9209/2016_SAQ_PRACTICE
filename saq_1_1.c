/* 1장
 * 1절 선택정렬
 * 입력받은 10개의 성적에 따라 낮은 점수를 받은 학생부터 순차적으로 학점을 F, D, D+, C, C+, B, B+, A, A+(2명) 으로 부여.
 * 입력된 정수를 오름차순으로 정렬하고, 각 정수 밑에 학점을 출력한다.
 * 세번째 학생의 학점을 출력한다
 */
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // insert code here...
    int integerArray[10] = {0};
    char scoreArray[10][3] = {"F", "D", "D+", "C", "C+", "B", "B+", "A", "A+", "A+"};
    
    int min = 0;
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
    
    for(i = 0; i < 9; i++)
    {
        min = i;
        for(j = i+1; j < 10; j++)
        {
            if(integerArray[j] < integerArray[min])
                min = j;
        }
        
        if(min != i)
        {
            nTmp = integerArray[min];
            integerArray[min] = integerArray[i];
            integerArray[i] = nTmp;
        }
    }
    
    for(int w = 0; w < 10; w++)
    {
        printf("%d ", integerArray[w]);
    }
    
    printf("\n");
    for(int g = 0; g < 10; g++)
    {
        printf("%-2s ", scoreArray[g]);
    }
    
    printf("\n");
    printf("%s", scoreArray[7]);
    printf("\n");
    return 0;
}
