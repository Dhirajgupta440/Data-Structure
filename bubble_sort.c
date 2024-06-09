#include <stdio.h>
void bubble_sorting(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("enter the number of element:");

    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble_sorting(arr, n);
    printf("sorted elements:");
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}