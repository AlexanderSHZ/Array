#include "Header.h"

int main()
{
    Array1D ArrayElements1D;
    Array2D ArrayElements2D;

   
    
    int matrixDimension;
    cout << "Hello, do you want to create 1 or 2 dimentional matrix? \n";
    cin >> matrixDimension;
    if (matrixDimension == 1)
    {
        createArray1D(ArrayElements1D);
    }
    else if (matrixDimension == 2)
    {
        createArray2D(ArrayElements2D);
    }
    else
    {
        cout << "Incorrect nuber of dimentions \n";
    }

        

    
   // scanf("%d", &ArrayElements.rows);
    printf("Enter the number of columns \n");
   // scanf("%d", &ArrayElements.column);
 
   // ArrayElements = createArray(ArrayElements);      

    printf("Enter numbers to the matrix \n");

  //  fillArray(ArrayElements);               

   // print(ArrayElements);                      
   
    int i = 0;
    cin >> i;
    
   // freeMemory(ArrayElements);
    cin >> i;
    return 0;
}
