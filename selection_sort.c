#include <stdio.h>
void selection_sorting(int arr[], int n)
{
    int i,j,mid_idx;
    for (int i = 0; i < n - 1; i++){
        mid_idx=i;
    
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[mid_idx]){
            
                mid_idx=j;
                }
        }
                int temp = arr[mid_idx];
                arr[mid_idx] = arr[i];
                arr[i] = temp;
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
    selection_sorting(arr, n);
    printf("sorted elements:");
    for (int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}