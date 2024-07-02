#include<stdio.h>
int main(){
    int a[50],size,i;
    printf ("enter the size of the array \n");
    scanf("%d",&size);
    printf("enter the elements of the array");
    for (i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<size;i++)
    {   
        printf("\n");
        printf("%d",a[i]);
    }
    return 0;


}