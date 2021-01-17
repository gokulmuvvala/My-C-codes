#include<stdio.h>

int main()
{
    int a[50], size, i, large, small;//here we are taking array size 50 globally

    printf("\nEnter the size of the array: ");
    scanf("%d", &size);//size= given array size

    printf("\nEnter the %d elements of the array: ", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    large = a[0]; // initializing
    
    for(i = 1; i < size; i++)
    {
        if(large < a[i])   // if larger value is encountered
        {
            large = a[i]; // update the value of large
        }
    }
    printf("\nThe largest element is: %d", large);

    small = a[0];   // initializing
    
    for(i = 1; i < size; i++)
    {
        if(small>a[i])   // if smaller value is encountered
        {
            small = a[i];   // update the value of small
        }
    }
    printf("\n The smallest element is: %d", small);
    return 0;
}
