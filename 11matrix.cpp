#include "Header.h"

int main()
{
    Array1D ArrayElements;
    
    printf("Hello, enter the number of rows in matrix \n");
    scanf("%d", &ArrayElements.rows);
    printf("Enter the number of columns \n");
    scanf("%d", &ArrayElements.column);
 
    ArrayElements = createArray(ArrayElements);      

    printf("Enter numbers to the matrix \n");

    fillArray(ArrayElements);               

    print(ArrayElements);                      
   
    int i = 0;
    cin >> i;
    
    freeMemory(ArrayElements);
    cin >> i;
    return 0;
}
