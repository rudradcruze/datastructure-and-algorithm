/*
    This program is about recursive merge sort...
*/
#include<stdio.h>
#include<stdlib.h>

// Function declaration
void mergeSort(int data[], int low, int high);
void mergingList(int data[], int low, int mid, int high);

int main(){

    int data[] = {11,13,7,12,16,9,24,5,10,3};
    int size = sizeof(data) / sizeof(data[0]);

    // Calling merge sort function
    mergeSort(data, 0, size - 1);

    for(int i = 0; i < size; i++)
        printf("%d ", data[i]);


    return 0;
}

// The function is for deviding and merging recursively
void mergeSort(int data[], int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;
        mergeSort(data, low, mid);
        mergeSort(data, mid + 1, high);
        mergingList(data, low, mid, high);
    }
}

// The function is for merging lists
void mergingList(int data[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    int temp[high + 2];

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
