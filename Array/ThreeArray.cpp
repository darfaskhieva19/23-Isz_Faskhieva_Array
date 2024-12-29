#include <iostream>
#include <stdlib.h>

static const int kol = 5;

void input_data(int arr[kol])//���� � ����� �������
{
    for (int i = 0; i < kol; i++)
    {
        arr[i] = rand() % 100; // ���������� ��������� �����
    }
}
void print_data(int arr[kol])//���� � ����� �������
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
        for (int i = n; i < kol - n; i++) //���� ��� ������ ���.�������� � ���������� �������
        {
            if (arr[i] < min)
            {
                min = arr[i];
                min_pos = i;
            }
        }
        int temp = arr[min_pos]; //����� ������� ���.�������� � �������
        arr[min_pos] = arr[n];
        arr[n] = temp;

        int max = arr[n];
        int max_pos = n;
        for (int i = n; i < kol - n; i++) //���� ��� ������ ����.�������� � ���������� �������
        {
            if (arr[i] > max)
            {
                max = arr[i];
                max_pos = i;
            }
        }
        temp = arr[max_pos]; //����� ������� ����.�������� � ������� ���������
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
    srand(time(NULL)); //������������� ������� rand, ����� ��� ������� ��������� ����������� ��������
    printf("������� 3: �������� ���������, ����������� ���������� �������.\n");
    int array[kol];
    input_data(array);
    print_data(array);
    Sort(array);
}