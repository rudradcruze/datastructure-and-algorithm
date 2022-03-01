#include <stdio.h>

// Function Declaration
void insertionSort(int data[], int size);

int main(){

    int size, i;

    // Defining the total size of the elements
    printf("Enter the total element size: ");
    scanf("%d", &size);
    printf("\n");

    // Declaraing the data containing array and getting input from the user
    int data[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter the %d number: ", i+1);
        scanf("%d", &data[i]);
    }

    insertionSort(data, size);     // Insertion sort function call

    // Printing sorted data
    printf("\nSorted data: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    


    return 0;
}

// insert sort function and body
void insertionSort(int data[], int size){

    int i, j, temp;
    
    for (i = 1; i < size; i++)
    {
        temp = data[i];
        j = i - 1;

        while (j >= 0 && data[j] > temp)
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
        
    }
    
    
}