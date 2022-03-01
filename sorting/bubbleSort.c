/*
    The program is about bubble sort
    Author Name  : Francis Rudra D Cruze
    Author Email : francisrudra@gmail.com
*/
#include <stdio.h>

// Function Declaration
void bubbleSort(int data[], int size);

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

    bubbleSort(data, size);     // Bubble sort function call

    // Printing sorted data
    printf("\nSorted data: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    

    return 0;
}


void bubbleSort(int data[], int size){

    int i, j, temp;
    
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (data[j] > data[j+1])
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
            
        }
        
    }
    
}