// #include<stdio.h>
// int main()
// {
//     int b=10;
//     int *ptr ;
//     ptr = &b;
//     printf("%d \n ",b);
//     printf("%p \n",&b);
//     printf("%p \n",ptr);
//     printf("%d \n",*ptr);
//     return 0;


// }
#include<stdio.h>
int main(){
    int a[5] = {6,2,3,4,5};
    int *ptr;
    ptr = a;
    for (int i = 0; i < 5; i++)
    {

         printf("%d \n",*(ptr+i)); 
        
    }
    // printf("%d \n", 2[a]);
    // printf ("%d \n",*(a+1));
    // printf ("%d",*a+1);

    
}
