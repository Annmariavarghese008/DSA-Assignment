#include <stdio.h>

#define MAX 100

int heap[MAX];
int size = 0;

void insert(int value)
{
    int i = size;
    heap[size] = value;
    size++;

    while (i > 0 && heap[(i - 1) / 2] < heap[i])
    {
        int temp = heap[i];
        heap[i] = heap[(i - 1) / 2];
        heap[(i - 1) / 2] = temp;

        i = (i - 1) / 2;
    }
}

void displayHeap()
{
    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);

    printf("\n");
}

int linearSearchMaximum(int arr[], int n, int *comparisons)
{
    int max = arr[0];
    *comparisons = 0;

    for (int i = 1; i < n; i++)
    {
        (*comparisons)++;

        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int scores[] = {78, 92, 65, 88, 95, 72, 84, 90};
    int n = 8;
    int comparisons;

    printf("Max Heap Insertion Trace:\n");

    for (int i = 0; i < n; i++)
    {
        insert(scores[i]);

        printf("After inserting %d: ", scores[i]);
        displayHeap();
    }

    printf("\nHighest score using Max Heap = %d\n", heap[0]);

    int max = linearSearchMaximum(scores, n, &comparisons);

    printf("Highest score using Linear Search = %d\n", max);
    printf("Number of comparisons in Linear Search = %d\n", comparisons);

    return 0;
}