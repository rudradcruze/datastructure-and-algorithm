/*
    The program is about hybrid search ** Using binary search. first phase and linear search second phase. First the program divide the code into two section. then check each section.
    Author Name  : Francis Rudra D Cruze
    Author Email : francisrudra@gmail.com
*/
#include <stdio.h>
#include <stdlib.h>

// Function declaration
int * binaryHybridSearch(int data[], int first, int last, int search, int size, int odering);

int main(){

    int elementSize, searchResult, search, oderingTest, i;
    printf("\nEnter the total element size: ");
    scanf("%d", &elementSize);
    printf("\n");

    int data[elementSize];

    for (i = 0; i < elementSize; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &data[i]);
    }

    // Check ascending and descending order
    if (data[0] < data[elementSize - 1])
    {
        oderingTest = 0;
    }else {
        oderingTest = 1;
    }

    printf("\nEnter the seraching element: ");
    scanf("%d", &search);

    int *receiveSearchData = binaryHybridSearch(data, 0, elementSize - 1, search, elementSize, oderingTest);

    printf("\n=================================");
    if(*receiveSearchData > 0)
    {
        for (i = 1; i <= *receiveSearchData; i++ )
        {
            printf("\n  %d found in : %d this position", search, (*(receiveSearchData + i)) + 1);
        }
    }else
    {
        printf("\n   ! -_- Data not found -_- !");
    }
    printf("\n=================================\a");

    return 0;
}

// Function to find values using binary search & Linear Search
int * binaryHybridSearch(int data[], int first, int last, int search, int size, int odering) {

    static int retultStore[999];
    int i, count = 0;
    int mid;

    while (last >= first)
    {
        mid = first + (last - first) / 2;
        if (data[mid] < search)
        {
            if (odering == 0)
            {
                first = mid + 1;
            }else {
                last = mid - 1;
            }
            
        }else if (data[mid] > search)
        {
            if (odering == 0)
            {
                last = mid - 1;
            }else {
                first = mid + 1;
            }
            
        }else {
            count++;
            retultStore[count] = mid;

            for (i = mid + 1; i < size; i++)
            {
                if (data[i] == search)
                {
                    count++;
                    retultStore[count] = i;
                }
                
            }
            
            // Find the left side data
            for (i = 0; i < mid; i++)
            {
                if (data[i] == search)
                {
                    count++;
                    retultStore[count] = i;
                }
            }
            break;
            
        }
        
    }

    retultStore[0] = count;
    return retultStore;
}
