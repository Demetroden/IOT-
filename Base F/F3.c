#include <stdio.h>
#include <stdlib.h>



void Input(char** num)
{
    scanf("%s", *num);
}

void sort(char* num)
{
    
    char* count = calloc(10,sizeof(char));
    for (int i = 0; *(num + i) != '\0'; i++)
    {
        if (*(num + i) >= '0' && *(num + i) <= '9')
        {
            count[*(num + i) - '0']++;
        }
        
    }
    for (int i = 0; i < 10; i++) 
    {
        if (*(count + i) > 0) {
            printf("%d %d\n", i, count[i]);
        }
    }

    free(count);
}



int main()
{   
    char* num = malloc(1001 * sizeof(char));
    Input(&num);
    sort(num);
    free(num);
    return 0;
}
