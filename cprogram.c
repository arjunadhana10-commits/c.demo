#include <stdio.h>

int main()
{
    int arr[100], n, i, pos, value, choice;

    // Input array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Menu
    printf("\n1. Traversal");
    printf("\n2. Insertion");
    printf("\n3. Deletion");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        // Traversal
        case 1:
            printf("\nArray elements are: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        // Insertion
        case 2:
            printf("\nEnter position for insertion (1 to %d): ", n + 1);
            scanf("%d", &pos);

            printf("Enter value: ");
            scanf("%d", &value);

            for (i = n; i >= pos; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[pos - 1] = value;
            n++;

            printf("Array after insertion: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        // Deletion
        case 3:
            printf("\nEnter position for deletion (1 to %d): ", n);
            scanf("%d", &pos);

            for (i = pos - 1; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }

            n--;

            printf("Array after deletion: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        default:
            printf("\nInvalid choice!");
    }

    return 0;
}