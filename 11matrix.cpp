#include "Header.h"

int main()
{
    Array1D ArrayElements;
    Array2D ArrayElements;
    
    int matrixDimension;
    cout << "Hello, do you want to create 1 or 2 dimentional matrix? \n";
    cin >> matrixDimension;
    if (matrixDimension == 1)
    {

    }
    else if (matrixDimension == 0)
    {

    }
    else
    {
        cout << "Incorrect nuber of dimentions \n";
    }

        

    
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
