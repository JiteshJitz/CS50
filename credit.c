#include<stdio.h>
#include<cs50.h>

int main()
{
    //Declare the long long variable
    long long no, i, j;
    int sum1, sum2, prod;

    //Asking the credit card number
    do
    {
        printf("Please enter your credit card number");
        no = get_long_long();
    }
    while (no < 0);

    //  Sum of the every other digit last included
    for (i = no, sum1 = 0; i > 0; i /= 100)
    {
        sum1 += i % 10;
    }

    // double every other digit starting with 2nd to last
    // then sum the individual digits of these products
    for (j = no / 10, prod = 0; j > 0; j /= 100)
    {
        if (2 * (j % 10) > 9)
        {
            prod += (2 * (j % 10)) / 10;
            prod += (2 * (j % 10)) % 10;
        }
        else
        {
            prod += 2 * (j % 10);
        }
    }

    sum2 = sum1 + prod;

    // check card company
    if (sum2 % 10 == 0)
    {
        if ((no >= 340000000000000 && no < 350000000000000) || (no >= 370000000000000 && no < 380000000000000))
        {
            printf("AMEX\n");
        }
        else if (no >= 5100000000000000 && no < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if ((no >= 4000000000000 && no < 5000000000000) || (no >= 4000000000000000 && no < 5000000000000000))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
