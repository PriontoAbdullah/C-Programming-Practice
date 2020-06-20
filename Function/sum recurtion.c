#include <stdio.h>

int sum(int start, int end);

int main()
{
    int start, end, s;
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    s = sum(start, end);

    printf("Sum of natural numbers from %d to %d = %d\n", start, end, s);

    return 0;
}

int sum(int start, int end)
{
    if(start == end)
        return start;
    else
        return start + sum(start + 1, end);
}
