#include <stdio.h>
#include <cs50.h>

// Horizontal break


// int main(void)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

// int main(void)
// {
//     // Get positive integer from user
//     int n;
//     do
//     {
//         n = get_int("Width: ");
//     }
//     while (n < 1);

//     // Print out that many question marks
//     for (int i = 0; i < n; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }




// 3X3 square block

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


