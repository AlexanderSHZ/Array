#include "Header.h"


struct Array1 createArray(struct Array1 ArrayElements)
{
    ArrayElements.arrayLength = ArrayElements.rows * ArrayElements.column * ArrayElements.depth;

    ArrayElements.arrayPtr = (int*)malloc(sizeof(int) * ArrayElements.arrayLength);
    if (ArrayElements.arrayPtr == NULL)
    {

    }
    return ArrayElements;
}

struct Array1 fillArray(struct Array1 ArrayElements)
{
    fflush(stdout);

    for (int i = 0; i < ArrayElements.arrayLength; i++)
    {
        cin >> ArrayElements.arrayPtr[i];
    }
    return ArrayElements
}

int print(struct Array1 ArrayElements)
{
    for (int i = 0; i < ArrayElements.arrayLength; i++)
    {
        cout << setw(6) << ArrayElements.arrayPtr[i];
        if (i % (ArrayElements.rows - 1) == 0)
        {
            printf("\n");
        }

        printf("\n");
    }
    return 0;
}

int freeMemory(struct Array1 ArrayElements)
{

    free(ArrayElements.arrayPtr[]);

    return 0;
}