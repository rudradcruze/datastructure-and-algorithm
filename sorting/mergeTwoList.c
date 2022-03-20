/*
    The Program is for Merging Two List / Array
*/
#include<stdio.h>
#include<stdlib.h>

// Function Declaration
void mergeTwoList(int dataOne[], int dataTwo[], int mergedData[], int sizeOne, int sizeTwo);

int main(){

    int dataOne[] = {2, 10, 18, 20, 23};
    int dataTwo[] = {4, 9, 19, 25};

    int sizeOne = sizeof(dataOne) / sizeof(dataOne[0]);
    int sizeTwo = sizeof(dataTwo) / sizeof(dataTwo[0]);

    // Merge data storing array/list
    int mergedData[sizeOne + sizeTwo];

    // Call mergeTwoList function to merge two separated list (array)
    mergeTwoList(dataOne, dataTwo, mergedData, sizeOne, sizeTwo);

    int totalSize = sizeOne + sizeTwo;

    // Printing data
    for(int i = 0; i < totalSize; i++)
        printf("%d ", mergedData[i]);



    return 0;
}


// Function for merging two list
void mergeTwoList(int dataOne[], int dataTwo[], int mergedData[], int sizeOne, int sizeTwo)
{
    int i, j, k;
    i = j = k = 0; // Initialize i,j,k with 0


    while(i < sizeOne && j < sizeTwo)
    {
        if(dataOne[i] < dataTwo[j])
            mergedData[k++] = dataOne[i++];
        else
            mergedData[k++] = dataTwo[j++];
    }

    for( ; i < sizeOne; i++)
        mergedData[k++] = dataOne[i++];
    for( ; j < sizeTwo; j++)
        mergedData[k++] = dataTwo[j++];
}
