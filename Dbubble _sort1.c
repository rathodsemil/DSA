#include <stdio.h>

int bubblesorting(int a[])

{
     for (int i = 0; i < 5; i++)
    {
        for (int j = i +1; j <= 5; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];                
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
};

int main()
{
    int arr[5] = {12, 2, 59, 12, 32};

    bubblesorting(arr);

    return 0;
}