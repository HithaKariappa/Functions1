#include <stdio.h>

int main()
{
    int num=1234;
    int result=sum_of_digits(num);
    printf("The sum of digits of number %d is %d\n",num,result);
}

int sum_of_digits(int n)
{
    if(n==0)
        return(0);
    else
        return(n%10 + sum_of_digits(n/10));
}
