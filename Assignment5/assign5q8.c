#include <stdio.h>

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int index = linearSearch(arr, size, key);

    if (index != -1)
    {
        printf("%d found at index %d\n", key, index);
    }
    else
    {
        printf("%d not found in the array\n", key);
    }

    return 0;
}
