/*
    This program is for linear search single search.
    Author Name: Francis Rudra D Cruze
    A. Email   : francisrudra@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

int linearSearch(int data[], int search, int size);

int main(){

    int elementSize, search, searchResult;

    // Getting the size of the total element
    printf("Enter the size of total element: ");
    fflush(stdin);
    scanf("%d", &elementSize);
    printf("\n");

    // Declaring the element holding array
    int data[elementSize];

    // Getting input from users
    for (size_t i = 0; i < elementSize; i++)
    {
        printf("Enter %d number: ", i+1);
        fflush(stdin);
        scanf("%d", &data[i]);
    }

    printf("\nEnter the searching elment: ");
    fflush(stdin);
    scanf("%d", &search);

    searchResult = linearSearch(data, search, elementSize);
    
    // Printing the searching result
    if (searchResult == -1)
    {
        printf("\n=============================");
        printf("\n ! -_- Data not found -_- !");
        printf("\n=============================");
    }else
    {
        printf("\n=============================");
        printf("\n  %d found in %d location ", search, searchResult+1);
        printf("\n=============================");
    }


    return 0;
}

// The function to find the data using linear search.
int linearSearch(int data[], int search, int size){
    for (size_t i = 0; i < size; i++)
    {
        if (data[i] == search)
        {
            return i;
        }
        
    }
    return -1;
    
}