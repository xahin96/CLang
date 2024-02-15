#include <stdio.h>
#include <stdlib.h>

int *max(int * arr, int n)
{
    // storing the first value of array as max for comparing
    int * max = arr;

    // looping and finding the max value
    for (int i = 0 ; i < n ; i ++)
    {
        if (*(&arr[i]) > max)
        {
            max = &arr[i];
        }
    }
    return max;
}

int main(void)
{
    int n; // holds number of element
    printf("\nPlease enter the size of the array: \n");
    scanf("%d", &n); // collecting user input for total elements
    int *arr; // the main array

    // dynamically calculating the size of the size of the
    // array arr by using malloc
    // n is the total number of elements, multiplied by
    // the size of int size which is 4
    arr = malloc(n * sizeof(int));

    printf("\nContents of the array: \n");
    for (int i = 0; i < n; i++) // iterating and asking user for each elements
    {
        printf("Enter number %d\n", i+1);
        scanf("%d", &arr[i]);
    }

    // calling the max method with the array and the size
    int *finMax = max(arr, n);
    printf("\nMaximum array element: %d \n", * finMax);
}