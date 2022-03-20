/*
    The program is about iterative merge sort
*/

// Function declaration
void mergeList(int data[], int low, int mid, int high);
void iterativeMergeSort(int data[], int size);

#include<stdio.h>
#include<stdlib.h>

int main(){

    int data[] = {8,3,7,4,9,2,6,5};
    int size = sizeof(data) / sizeof(data[0]);

    // Calling the iterativeMergeSort function
    iterativeMergeSort(data, size);

    for(int i = 0; i < size; i++)
        printf("%d ", data[i]);

    return 0;
}

// The function is for merging lists
void mergeList(int data[], int low, int mid, int high)
{
    int i, j, k;
    int temp[high + 1];

    i = low;
    j = mid + 1;
    k = low;

    while(i <= mid && j <= high)
    {
        if(data[i] < data[j])
            temp[k++] = data[i++];
        else
            temp[k++] = data[j++];
    }

    for( ; i <= mid; i++)
        temp[k++] = data[i];
    for( ; j <= high; j++)
        temp[k++] = data[j];

    for(i = low; i <= high; i++)
        data[i] = temp[i];
}

// The function is for iteratively merging/ performing iterative sort
void iterativeMergeSort(int data[], int size)
{
    int partition, i , low, mid, high;

    for(partition = 2; partition <= size; partition *= 2)
    {
        for(i = 0; i+partition-1 < size; i += partition)
        {
            low = i;
            high = i + partition - 1;
            mid = (low + high) / 2;

            // Calling the mergeList function to sort and merge list
            mergeList(data, low, mid, high);
        }
    }
    if(partition/2 < size)
        mergeList(data, 0, partition/2-1, size-1);
}
