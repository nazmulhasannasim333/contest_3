#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    long long max_sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] > 0)
        {
            max_sum += a[i];
        }
    }

    printf("%lld\n", max_sum);
    return 0;
}