#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            int start = 0, end = i - 1;
            while (start < end)
            {
                int temp = a[start];
                a[start] = a[end];
                a[end] = temp;
                start++;
                end--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}