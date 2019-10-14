//Program to find the modular exponentiation in a shortcut way
#include <stdio.h>
int main()
{
    int a,n,b,bin[20], i, j,d=1;
    printf("\n Please Enter the Value of base:");
    scanf("%d", &a);
    printf("\n Please Enter the Value of exponent:");
    scanf("%d", &b);
    printf("\n Please Enter the Value of mod:");
    scanf("%d", &n);



    for(i = 0; b> 0; i++) //We convert the decimal value of b into binary and store it in the array bin
    {
        bin[i] = b % 2;
        b = b / 2;
    }



    for(i=i; i>=0; i--) //variable d is the required ans,we write the algorithm to find d in the for loop
    {
        d=(d*d)% n;
        if(bin[i]==1)
        {

            d=(d*a)% n;
        }

    }
    printf(" answer is : %d",d);





}
