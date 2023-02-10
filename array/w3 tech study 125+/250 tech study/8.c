#include <stdio.h>
int main()
{
    int arr[100];
    int i, num, size, position;
    // Reading size and elements of array
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Reading element to insert & position of the element
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &position);
    //checking elements valis position
    if(position>size+1 || position<=0)
    {
        printf("Invalid position! Please enter position between 1 to %d", num);
    }
    else
    {
        //Inserting element in an array & increasing the size of the array
        for(i=size; i>=position; i--)
        {
            arr[i] = arr[i-1];
         }
        arr[position-1] = num;
        size++;
         // Printing new array with new element
        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}
