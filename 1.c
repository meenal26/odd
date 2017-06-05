#include<stdio.h>

int main()
{

    int a[]={10,20,30,40,50};
     int *ptr1=a;
     int *ptr2=a+5;
     printf("%d",(ptr2-ptr1));
     printf("%d",(char *)ptr2-(char *)ptr1);
    return 0;
}
