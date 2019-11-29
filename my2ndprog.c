#include<stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    printf("Enter the number of terms");
    scanf("%d" ,&n);
    printf("Fibonacci Series");

    for (int i = 1; i <= n; ++i)
    {
        // Prints the first two terms.
        if(i == 1)
        {
            scanf ("%d" ,&t1);

            continue;
        }
        if(i == 2)
        {
            scanf ("%d" ,&t2);

            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;


        printf ("nextTerm");

    return 0;
    }
}
