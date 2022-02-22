/*
    This program is about hybrid search using binary search and linear search.
    Author Name  : Francis Rudra D Cruze
    Author Email : francisisrudra@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

// Function declaration
int hybridSearch(int data[], int first, int last, int search);

int main(){

    int elementSize, searchResult, search;
    printf("Enter the total element size: ");
    scanf("%d", &elementSize);
    printf("\n");

    int data[elementSize];

    for (size_t i = 0; i < elementSize; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\nEnter the seraching element: ");
    scanf("%d", &search);
    
    searchResult = hybridSearch(data, 0, elementSize - 1, search);

    if (searchResult == -1)
    {
        printf("\n=============================");
        printf("\n ! -_- Data not found -_- !");
        printf("\n=============================\n");
    }else {
        printf("\n=============================");
        printf("\n  %d found in %d location ", search, searchResult+1);
        printf("\n=============================\n");
    }


    return 0;
}

/*
    ====================== Hybrid Search function ======================
    To make the search happen we will use this function...
    This function will only return the index value if it
    Otherwise it will return -1;
*/
int hybridSearch(int data[], int first, int last, int search) {

    int mid, recursiveCall;

    mid = first + (last - first) / 2;
    if (data[first] == search)
    {
        return first;
    }else if (data[last] == search)
    {
        return last;
    }else if (data[mid] == search)
    {
        return mid;
    }else if (first >= last - 2)
    {
        return -1;
    }else {
        recursiveCall = hybridSearch(data, first + 1, mid - 1, search);
        if (recursiveCall == -1)
        {
            recursiveCall = hybridSearch(data, mid + 1, last - 1, search);
            return recursiveCall;
        }
        
    }

}