#include <stdio.h>

void minMax(int * num, int size, int * min, int * max);

int main()
{
    int arr[1000], size, i;
    int min, max;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements in array: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", (arr + i));
    }

    minMax(arr, size, &min, &max);

    printf("Minimum element in array: %d\n", min);
    printf("Maximum element in array: %d\n", max);


    return 0;
}


void minMax(int * num, int size, int * min, int * max)
{
    int i;

    *min = *(num + 0);
    *max = *(num + 0);

    for (i = 0; i < size; i++)
    {
        if(*(num + i) < *(min))
            *min = *(num + i);

        if(*(num + i) > *(max))
            *max = *(num + i);
    }
}
