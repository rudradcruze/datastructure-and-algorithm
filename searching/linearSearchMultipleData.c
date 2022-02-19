/*
    This program is for linear search multiple data
    Author  : Francis Rudra D Cruze
    A. Email: francisrudra@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

/* Function Declaration */
int * linearSearch(int data[], int search, int size);

int main () {

    int elementSize, i, search;
    printf("\nPlease enter the total element size: ");
    scanf("%d", &elementSize);
    printf("\n");

    int data[elementSize];

    for(i = 1; i <= elementSize; i++){
        printf("Enter %d number: ", i);
        fflush(stdin);
        scanf("%d", &data[i]);
    }

    printf("\nEnter the searching element: ");
    scanf("%d", &search);

    int *receiveSearchData = linearSearch(data, search, elementSize);

    printf("\n=================================");
    if(*receiveSearchData > 0)
    {
        for ( i = 1; i <= *receiveSearchData; i++ )
        {
            printf("\n  %d found in : %d this position", search, *(receiveSearchData + i));
        }
    }else
    {
        printf("\n   ! -_- Data not found -_- !");
    }
    printf("\n=================================\a");

    return 0;
}

// Function to find the linear search multiple data and return it.
int * linearSearch(int data[], int search, int size) {

    static int  retultStore[999];

    int count  = 0;
    for (size_t i = 1; i <= size; i++)
    {
        if (data[i] == search)
        {
            count++;
            retultStore[count] = i;
        }
    }

    retultStore[0] = count;

    return retultStore;
}