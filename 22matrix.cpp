#include "Header.h"


struct Array1D createArray(struct Array1D ArrayElements)
{
    ArrayElements.arrayLength = ArrayElements.rows * ArrayElements.column;

    ArrayElements.arrayPtr = (int*)malloc(sizeof(int) * ArrayElements.arrayLength);
    if (ArrayElements.arrayPtr == NULL)
    {

    }
    return ArrayElements;
}

struct Array1D fillArray(struct Array1D ArrayElements)
{
    fflush(stdout);

    for (int i = 0; i < ArrayElements.arrayLength; i++)
    {
        cin >> ArrayElements.arrayPtr[i];
    }
    return ArrayElements;
}


int freeMemory(struct Array1D ArrayElements)
    {
        free(ArrayElements.arrayPtr);

        return 0;
    }