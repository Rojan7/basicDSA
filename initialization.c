#include<stdio.h>
int main()
{
    //compiletime initialization of the array
    int a[5] = {1,2,3,4,5};
    for (int  i = 0; i <= 4; i++)
    {
        printf ("%d",a[i]);
    }
    
  

    //runtime initialization of array
    

    int arr[5];
    printf("enter the elements of the array");
    for (int  i = 0; i <= 4; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i <= 4; i++)
    {
        printf("%d",arr[i]);
    }
      return 0;
}