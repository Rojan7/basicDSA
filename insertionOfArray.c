
#include <stdio.h>
void insertatposition(int pos, int num, int i, int size, int a[]);
void insertatbeginning(int pos, int num, int i, int size, int a[]);
void insertatend(int num, int a[], int size, int i);
int main()
{
    // insertion at specific position
    int a[50], i, size, pos, num, selection;
    printf("enter the size of the array");
    scanf("%d", &size);
    printf("enter the elements");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("1. enter at any position 2. enter at first 3. insert at last");
    scanf("%d", &selection);
    switch (selection)
    {
    case 1:
        insertatposition(pos, num, i, size, a);
        break;

    case 2:
        insertatbeginning(pos, num, i, size, a);
        break;
    case 3:
        insertatend(num, a, size, i);
        break;

    default:
        break;
    }

    return 0;
}
void insertatposition(int pos, int num, int i, int size, int a[])
{
    printf("enter the position you want to insert");
    scanf("%d", &pos);
    printf("enter the number you want to insert at the said position");
    scanf("%d", &num);
    for (i = size - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    size++;
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
}

void insertatbeginning(int pos, int num, int i, int size, int a[])
{

    printf("enter the number you want to insert at the said position");
    scanf("%d", &num);
    for (i = size - 1; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = num;
    size++;
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
}
void insertatend(int num, int a[], int size, int i)
{
    printf("enter the number you want to insert at the said position");
    scanf("%d", &num);
    a[size] = num;
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
}
