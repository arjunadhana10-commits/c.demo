#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i;

    // First array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merge first array
    for (i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // Merge second array
    for (i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    // Display merged array
    printf("\nMerged Array: ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}