#include <stdio.h>

#define SIZE 3

int main() 
{
    int tam[SIZE] = {3, 2, 3};
    int v1[SIZE] = {1, 2, 3};
    int v2[SIZE] = {4, 5, 6};

    int totalElementos = 0;

    for (int i = 0; i < SIZE; i++)
    {
        totalElementos += tam[i];
    }

    int* p1 = v1;
    int* p2 = v2;
    int* m[2] = {v1, v2};

    int** pm = m;

    for (int itemIndex = 1, j = 0; itemIndex <= totalElementos; itemIndex++)
    {
        printf("%d \n", **pm);
        
        (*pm)++; // pula para o endereço da próxima coluna

        if (itemIndex % tam[j] == 0)
        {
            pm++; 
            j++;
        }
    }
    
    return 0;
}
