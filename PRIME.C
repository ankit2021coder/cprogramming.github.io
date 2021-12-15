// C Program to find whether a Number is Prime or Not using Recursion

#include <stdio.h>
#include<conio.h>

int primeno(int, int);

void main()
{
    int num, check;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    check = primeno(num, num / 2);
    if (check == 1)
    {
	printf("%d is a prime number\n", num);
    }
    else
    {
	printf("%d is not a prime number\n", num);
    }
    getch();
}

int primeno(int num, int i)
{
    if (i == 1)
    {
	return 1;
    }
    else
    {
       if (num % i == 0)
       {
	 return 0;
       }
       else
       {
	 return primeno(num, i - 1);
       }
    }
}