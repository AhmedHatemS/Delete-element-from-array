#include <stdio.h>
#define MAX 50
int main()
{
    int arr1[ MAX ], i, pos, n;
    printf("Delete an element at a desired position from an array:\n");
    printf("---------------------------------------------------------\n");
    printf("Input the size of the array (not more than %d): ", MAX);
    scanf("%d", &n );
    /* Store values into the array */
    printf("Input %d elements in the array:\n\n", n );
    for( i = 0; i < n; i++ )
        {
            printf("Element #%d: ", i + 1 );
            scanf("%d", &arr1[ i ] );
        }
    printf("Input the position of the element to be deleted: ");
    scanf("%d", &pos );
    /* locate the position of i in the array */
    i=0; while( i != pos - 1 ) i++;
    /* the position of i in the array will be replaced by the value to its right */
    while( i < n ) { arr1[ i ] = arr1[ i + 1 ]; i++; } n--;
    printf("\nThe new list is: ");
    for( i = 0; i < n; i++ )
        {
            printf(" %d", arr1[ i ] );
        }
}
