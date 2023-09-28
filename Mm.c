#include <stdio.h>

int main()
{
        int max=0, min=99999999, var;
        printf("Введите числа, которые хотите сравнить: \n");
        printf("Если хотите остановить набор чисел - нажмите q\n");
        while (scanf("%d",&var))
        {
                if (var > max)
                {
                        max = var;
                }
                if (var < min)
                {
                        min = var;
                }
        }
        printf("Максимальное значение: %d\nМинимальное значение: %d\n", max, min);
        
}
