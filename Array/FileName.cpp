#include <iostream>
#include <stdlib.h>
#include <time.h>

void One() 
{
    printf("Задание 1: а) Создать одномерный числовой массив, заполнить его, вывести значения на экран\n");
    int array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
void Two()
{
    printf("Задание 1: б) Создать двумерный числовой массив, заполнить его, вывести значения на экран\n");
    int array[3][3] =
    {
     {1, 2, 3},
     {4, 5, 6},
     {7, 8, 9}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }
}

void Three()
{
    printf("Задание 1: в) Создать строковый массив, заполнить его, вывести значения на экран\n");
    char str[101] = "";
    printf("Введите строку: \n");
    fgets(str, 100, stdin);
    printf("Строка: %s", str);
}

void input_print_data(int arr[], int count)//ввод и вывод массива
{
    for (int i = 0; i < count; i++)
    {
        arr[i] = rand() % 100; // Генерируем случайные числа
    }
    for (int i = 0; i < count; i++)
    {
        printf("array[%d] = %d\n", i, arr[i]);
    }
}

int ArraySearch(int arr[], int count, int k) // Функция для поиска заданного значения в массиве
{
    for (int i = 0; i < count; i++) {
        if (arr[i] == k)
        {
            return 1; // Возвращаем индекс найденного значения
        }
    }
    return 0; // Возвращаем -1, если значение не найдено
}

int ArraySum(int arr[], int count) //Функция для определения суммы элементов массива
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    return sum;
}

void MinAndMax()
{
	printf("Задание 4: Осуществить ввод двумерного массива целых чисел. Реализовать поиск максимального и минимального значений массива\n");
    int arr[3][3];   
    printf("Введите элементы двумерного массива:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Элемент [%d][%d]: ", i, j);
            scanf_s("%d", &arr[i][j]);
        }
    }
    int min = arr[0][0];
    int max = arr[0][0];
    // Поиск минимального и максимального значений
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (arr[i][j] < min) 
            {
                min = arr[i][j]; // Обновляем минимальное значение
            }
            if (arr[i][j] > max) 
            {
                max = arr[i][j]; // Обновляем максимальное значение
            }
        }
    }
    printf("Минимальное значение: %d\nМаксимальное значение: %d\n", min, max);
}

void Snake()
{
    printf("Задание 5: Реализовать заполнение массива «змейкой»\n");
    int array[3][3];
    int value = 1;
    for (int i = 0; i < 3; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 3; j++)
            {
                array[i][j] = value++;
            }
        }
        else
        {
            for (int j = 3 - 1; j >= 0; j--)
            {
                array[i][j] = value++;
            }
        }
    }
    printf("Заполненный массив:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", array[i][j]); //Вывод 
        }
        printf("\n"); //Переход на новую строку
    }
}

int Length(char str[]) //Функция подсчета строки
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void removeDublicate(char str[])
{    
    int i = 0, count = 0;
    char mas[100] = "";

    while (str[i] != '\0') //Проверяем, есть ли символ в массиве
    {        
        int search = 0;
        for (int j = 0; j < count; j++) 
        {
            if (str[i] == mas[j]) 
            {
                search = 1; // Символ найден
                break;
            }
        }
        // Если символ не найден, добавляем его в массив
        if (!search) 
        {
            mas[count++] = str[i];
        }
        i++;
    }
    mas[count] = '\0'; //Завершаем строку
    puts(mas); //Вывод
}

void encryption(char str[]) //шифрование
{
    int i = 0;
    char res_cod[15] = "";
    while (str[i] != '\0')
    {
        res_cod[i] = str[i] + 3; //Сдвигаем на 3
        i++;
    }
    printf("Шифрование: %s\n", res_cod);
}
void decryption(char str[]) //дешифрование
{
    int i = 0;
    char res_uncod[15] = "";
    while (str[i] != '\0')
    {
        res_uncod[i] = str[i] - 3; //Обратный сдвиг
        i++;
    }
    printf("Дешифрование: %s\n", res_uncod);    
}

int main()
{
	system("chcp 1251>null");
    //One();
    //Two();
    //Three();

    //srand(time(NULL)); //Инициализация функции rand, чтобы при запуске программы обновлялись значения
    //printf("Задание 2: а) Осуществить ввод одномерного массива целых чисел. Написать функцию реализующую поиск заданного значения.\n");    
    //const int count = 5;
    //int array[count];
    //input_print_data(array, count);
    //int k = 0;
    //printf("Какое число нужно найти? ");
    //scanf_s("%d", &k);
    //int result = ArraySearch(array, count, k);
    //if (result == 1)    // Выводим результат поиска
    //{
    //    printf("Элемент %d найден\n", k);
    //}
    //else printf("Элемент %d не найден\n", k);
    //printf("\n");

    //printf("\nЗадание 2: б) Написать функцию реализующую определение суммы элементов массива.\n");
    //int sumAr = ArraySum(array, count); //Вызываем метод для подсчеты суммы
    //printf("Сумма элементов массива = %d\n", sumAr);

    //MinAndMax();
    //Snake();

    /*printf("Задание 6: Написать функцию, считающую длину строки.\n");
    char str[] = "New Year!";
    int count = Length(str);
    printf("Длина строки составляет: %d\n", count);*/

    /*printf("Задание 7: Написать функцию, удаляющую из строки повторяющиеся символы\n");
    char str[100] = "Привет, страна!";
    printf("Исходная строка: %s\n", str);
    printf("Полученная строка после удаления повторяющихся символов: ");
    removeDublicate(str);*/

   /* printf("Задание 8: Написать программу реализующую шифрование/дешифрование шифром Цезаря\n");
    char strok[15] = "New Year!"; 
    printf("Исходная строка: ");
    puts(strok);
    encryption(strok);
    char s[15] = "Qhz#\hdu";
    decryption(s);*/

	return 0;
}
