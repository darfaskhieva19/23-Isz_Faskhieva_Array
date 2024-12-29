#include <iostream>
#include <stdlib.h>

static const int kol = 5;

void input_data(int arr[kol])//ввод и вывод массива
{
    for (int i = 0; i < kol; i++)
    {
        arr[i] = rand() % 100; // Генерируем случайные числа
    }
}
void print_data(int arr[kol])//ввод и вывод массива
{
    for (int i = 0; i < kol; i++)
    {        
        printf("%d\t",arr[i]);        
    }
    printf("\n");
}

void Sort(int arr[kol])
{
    int end = kol / 2;
    for (int n = 0; n < end; n++)
    {
        int min = arr[n];
        int min_pos = n;
        for (int i = n; i < kol - n; i++) //Цикл для поиска мин.элемента в оставшемся массиве
        {
            if (arr[i] < min)
            {
                min = arr[i];
                min_pos = i;
            }
        }
        int temp = arr[min_pos]; //Обмен местами мин.элемента с текущим
        arr[min_pos] = arr[n];
        arr[n] = temp;

        int max = arr[n];
        int max_pos = n;
        for (int i = n; i < kol - n; i++) //Цикл для поиска макс.элемента в оставшемся массиве
        {
            if (arr[i] > max)
            {
                max = arr[i];
                max_pos = i;
            }
        }
        temp = arr[max_pos]; //Обмен местами макс.элемента с текущим элементом
        arr[max_pos] = arr[kol - n - 1];
        arr[kol - n - 1] = temp;

        printf("\n");
        print_data(arr);
    }
    printf("\n");
}

int main()
{
    system("chcp 1251>null");
    srand(time(NULL)); //Инициализация функции rand, чтобы при запуске программы обновлялись значения
    printf("Задание 3: Написать программу, реализующую сортировку массива.\n");
    int array[kol];
    input_data(array);
    print_data(array);
    Sort(array);
}