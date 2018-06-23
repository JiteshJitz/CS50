#include <stdio.h>
#include <cs50.h>

int main(void)
{
// Declaring and intialize variables
int p_h = 0;
float q;
// Grab user input, check it and ask for retry if not within bounds
	do
	{
		printf("Enter pyramid height\n");
		p_h=get_int();
		q=(int)p_h;
    	++q;

		if (p_h== 0)
    	{
            return 0;
         }
/*
to create the pyramid
*/
//checks for a string
		else if (p_h < 1 || p_h > 23)
		{
			printf("Enter number more than one less than 23\n");
		}


    	else if ((q - p_h) != 1)
    	{
    		printf("\nThe number is not an integer\n\n");
    	}
    	else
    	{
    		printf("\n");
    		for (int i = 0; i < p_h; i++)
			{
// for spaces
    			for (int j = 0; j < p_h - i - 1; j++)
    			{
        			printf("%s", " ");
        		}
// prints '#' .
				for(int k = 0; k < i + 2; k++)
				{
					printf("#");
				}
			printf("\n");
			}

    	}
	}
	while (p_h < 0 || p_h > 23);
//compares numbers unitil its given one

	return 0;
}

/*	for(int i = 0; i < p_h; i++)
	{
		// for spaces
        for(int j = 0; j < p_h-i-1; j++)
        {
            printf("%s", " ");
        }
        // prints '#' .
		for(int k = 0; k < i+2; k++)
		{
			printf("#");
		}
		printf("\n");
	}*/
