/*
    This program is about merging in a single list
*/
#include<stdio.h>
#include<stdlib.h>

// Function declaration
void mergeInSingleList(int data[], int low, int mid, int high);

int main(){

    int data[] = {2, 5, 8, 12, 3, 6, 7, 10};
    int size = sizeof(data) / sizeof(data[0]);
    int mid = 0 + (size - 0) / 2;

    // Calling MergingInSingle function to merge in single list
    mergeInSingleList(data, 0, mid, size);

    // Print sorted element
    for(int i = 0; i < size; i++)
        printf("%d ", data[i]);


    return 0;
}


void mergeInSingleList(int data[], int low, int mid, int high)
{
    int i, j ,k;
    int temp[high + 1];

    i = low;
    j = mid;
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

    for(i = 1; i <= high; i++)
        data[i] = temp[i];
}
