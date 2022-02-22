/*
    This program is for binary search single search.
    Author Name: Francis Rudra D Cruze
    A. Email   : francisrudra@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

// Function Declaration
int binarySearch(int data[], int search, int first, int last, int odering);

int main(){

    int elementSize, search, searchResult, oderingTest;
    printf("\nEnter the total size of the element: ");
    fflush(stdin);
    scanf("%d", &elementSize);
    printf("\n");
    int data[elementSize];

    // Geeting all input
    for (size_t i = 0; i < elementSize; i++)
    {
        printf("Enter %d data: ", i+1);
        fflush(stdin);
        scanf("%d", &data[i]);
    }

    // Check ascending and descending order
    if (data[0] < data[elementSize - 1])
    {
        oderingTest = 0;
    }else {
        oderingTest = 1;
    }
    

    printf("\nEnter the searching element: ");
    fflush(stdin);
    scanf("%d", &search);

    searchResult = binarySearch(data, search, 0, elementSize-1, oderingTest);

    if (searchResult == -1)
    {
        printf("\n=============================");
        printf("\n ! -_- Data not found -_- !");
        printf("\n=============================");
    }else {
        printf("\n=============================");
        printf("\n  %d found in %d location ", search, searchResult+1);
        printf("\n=============================");
    }
    

    return 0;
}

// The function for find the data using binary search
int binarySearch(int data[], int search, int first, int last, int odering){
    
    if (last >= first)
    {
        int mid = first + (last - first) / 2;
        if (data[mid] == search)
        {
            return mid;
        }else if(data[mid] > search)
        {
            if (odering == 0)
            {
                return binarySearch(data, search, first, mid - 1, odering);
            }else {
                return binarySearch(data, search, mid + 1, last, odering);
            }
            
        }else
        {
            if (odering == 0)
            {
                return binarySearch(data, search, mid + 1, last, odering);
            }else {
                return binarySearch(data, search, first, mid - 1, odering);
            }
            
        }
    }

    return -1;

}