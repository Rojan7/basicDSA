#include<stdio.h>
int main()
{
    int a[50],size,i;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("\n enter the elements of the array");
    for (i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    
    }
    int item = a[size-1];
    size--;
    for (i=0;i<size;i++)
    {
        printf("%d",a[i]);

    }
    printf("\n %d is deleted",item);
    return 0;

}