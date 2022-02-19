#include <stdio.h>
#include <stdlib.h>

// Function declaration
int binarySearch(int data[], int first, int last, int search);

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
    
    searchResult = binarySearch(data, 0, elementSize - 1, search);

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


int binarySearch(int data[], int first, int last, int search) {
    while (last >= first)
    {

        int mid = first + (last - first) / 2;
        if (data[mid] == search)
        {
            return mid;
        }else if(data[mid] > search) {
            last = mid - 1;
        }else {
            first = mid + 1;
        }
        
    }
    return -1;
    
}