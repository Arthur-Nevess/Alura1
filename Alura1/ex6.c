#include <stdio.h>

int main()
{
    int num=0;
    printf("Digite um número para ver o fatorial dele:");
    scanf("%d", &num);
    int fat=num*(num-1);
    const int resp = num;

    do
    {
        num--;
        fat=fat*(num-1);
        
     if(fat==fat*(num-1))
        {
            printf(" %d! = %d", resp, fat);
            break;
        }

    } while (num>0);
    
    return 0;
}