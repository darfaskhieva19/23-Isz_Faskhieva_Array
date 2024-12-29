#include <iostream>
#include <stdlib.h>
#include <time.h>

void One() 
{
    printf("������� 1: �) ������� ���������� �������� ������, ��������� ���, ������� �������� �� �����\n");
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
    printf("������� 1: �) ������� ��������� �������� ������, ��������� ���, ������� �������� �� �����\n");
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
    printf("������� 1: �) ������� ��������� ������, ��������� ���, ������� �������� �� �����\n");
    char str[101] = "";
    printf("������� ������: \n");
    fgets(str, 100, stdin);
    printf("������: %s", str);
}

void input_print_data(int arr[], int count)//���� � ����� �������
{
    for (int i = 0; i < count; i++)
    {
        arr[i] = rand() % 100; // ���������� ��������� �����
    }
    for (int i = 0; i < count; i++)
    {
        printf("array[%d] = %d\n", i, arr[i]);
    }
}

int ArraySearch(int arr[], int count, int k) // ������� ��� ������ ��������� �������� � �������
{
    for (int i = 0; i < count; i++) {
        if (arr[i] == k)
        {
            return 1; // ���������� ������ ���������� ��������
        }
    }
    return 0; // ���������� -1, ���� �������� �� �������
}

int ArraySum(int arr[], int count) //������� ��� ����������� ����� ��������� �������
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
	printf("������� 4: ����������� ���� ���������� ������� ����� �����. ����������� ����� ������������� � ������������ �������� �������\n");
    int arr[3][3];   
    printf("������� �������� ���������� �������:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            printf("������� [%d][%d]: ", i, j);
            scanf_s("%d", &arr[i][j]);
        }
    }
    int min = arr[0][0];
    int max = arr[0][0];
    // ����� ������������ � ������������� ��������
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (arr[i][j] < min) 
            {
                min = arr[i][j]; // ��������� ����������� ��������
            }
            if (arr[i][j] > max) 
            {
                max = arr[i][j]; // ��������� ������������ ��������
            }
        }
    }
    printf("����������� ��������: %d\n������������ ��������: %d\n", min, max);
}

void Snake()
{
    printf("������� 5: ����������� ���������� ������� ��������\n");
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
    printf("����������� ������:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", array[i][j]); //����� 
        }
        printf("\n"); //������� �� ����� ������
    }
}

int Length(char str[]) //������� �������� ������
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

    while (str[i] != '\0') //���������, ���� �� ������ � �������
    {        
        int search = 0;
        for (int j = 0; j < count; j++) 
        {
            if (str[i] == mas[j]) 
            {
                search = 1; // ������ ������
                break;
            }
        }
        // ���� ������ �� ������, ��������� ��� � ������
        if (!search) 
        {
            mas[count++] = str[i];
        }
        i++;
    }
    mas[count] = '\0'; //��������� ������
    puts(mas); //�����
}

void encryption(char str[]) //����������
{
    int i = 0;
    char res_cod[15] = "";
    while (str[i] != '\0')
    {
        res_cod[i] = str[i] + 3; //�������� �� 3
        i++;
    }
    printf("����������: %s\n", res_cod);
}
void decryption(char str[]) //������������
{
    int i = 0;
    char res_uncod[15] = "";
    while (str[i] != '\0')
    {
        res_uncod[i] = str[i] - 3; //�������� �����
        i++;
    }
    printf("������������: %s\n", res_uncod);    
}

int main()
{
	system("chcp 1251>null");
    //One();
    //Two();
    //Three();

    //srand(time(NULL)); //������������� ������� rand, ����� ��� ������� ��������� ����������� ��������
    //printf("������� 2: �) ����������� ���� ����������� ������� ����� �����. �������� ������� ����������� ����� ��������� ��������.\n");    
    //const int count = 5;
    //int array[count];
    //input_print_data(array, count);
    //int k = 0;
    //printf("����� ����� ����� �����? ");
    //scanf_s("%d", &k);
    //int result = ArraySearch(array, count, k);
    //if (result == 1)    // ������� ��������� ������
    //{
    //    printf("������� %d ������\n", k);
    //}
    //else printf("������� %d �� ������\n", k);
    //printf("\n");

    //printf("\n������� 2: �) �������� ������� ����������� ����������� ����� ��������� �������.\n");
    //int sumAr = ArraySum(array, count); //�������� ����� ��� �������� �����
    //printf("����� ��������� ������� = %d\n", sumAr);

    //MinAndMax();
    //Snake();

    /*printf("������� 6: �������� �������, ��������� ����� ������.\n");
    char str[] = "New Year!";
    int count = Length(str);
    printf("����� ������ ����������: %d\n", count);*/

    /*printf("������� 7: �������� �������, ��������� �� ������ ������������� �������\n");
    char str[100] = "������, ������!";
    printf("�������� ������: %s\n", str);
    printf("���������� ������ ����� �������� ������������� ��������: ");
    removeDublicate(str);*/

   /* printf("������� 8: �������� ��������� ����������� ����������/������������ ������ ������\n");
    char strok[15] = "New Year!"; 
    printf("�������� ������: ");
    puts(strok);
    encryption(strok);
    char s[15] = "Qhz#\hdu";
    decryption(s);*/

	return 0;
}
