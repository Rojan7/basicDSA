#include<stdio.h>
int main(){
    int a[50],size,pos;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the elements of the array");
    for (int i =0 ;i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the possition you want to delete the data from");
    scanf("%d",&pos);
    int item = a[pos -1];
    for (int i =pos-1 ;i<size;i++)
    {
        a[i]= a[i+1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    printf(" \n %d is deleted", item);
    return 0;
}