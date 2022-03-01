/*
    The program is about selection sort
    Author Name  : Francis Rudra D Cruze
    Author Email : francisrudra@gmail.com
*/
#include <stdio.h>

// Function Declaration
void selectionSort(int data[], int size);

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

    selectionSort(data, size);     // Selection sort function call

    // Printing sorted data
    printf("\nSorted data: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}

// Selection sort to make the sort happen...
void selectionSort(int data[], int size)
{
    int position;

    for (int i = 0; i < size; i++)
    {
        position = i;

        for (int j = i+1; j < size; j++)
        {
            if(data[j] < data[position])
            {
                position = j;
            }
        }

        if (data[i] != data[position])
        {
            int temp = data[position];
            data[position] = data[i];
            data[i] = temp;
        }

    }

}
