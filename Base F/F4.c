#include <stdio.h>
#include <stdlib.h>





void Input(char **arr)
{
    char tmp;
    int i = 0;
    while ((tmp = getchar()) != '\n')
    {
        *arr = realloc(*arr, (i + 1) * sizeof(int));
        (*arr)[i++] = tmp;
    }
    *(arr + i) = '\0';
}

void print_digit(char s[])
{
    char* count = calloc(10,sizeof(char));
    for (int i = 0; *(s + i) != '\0'; i++)
    {
        if (*(s + i) >= '0' && *(s + i) <= '9')
        {
            count[*(s + i) - '0']++;
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
    char* s = NULL;
    Input(&s);
    print_digit(s);
    free(s);
    return 0;
}
