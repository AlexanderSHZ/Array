#pragma once
#include <iostream>

#include <iomanip>
using namespace std;

#pragma warning(disable : 4996)

struct Array1D createArray(struct Array1D ArrayElements);

struct Array1D fillArray(struct Array1D ArrayElements);

int freeMemory(struct Array1D ArrayElements);


int print(struct Array1D ArrayElements);

struct Array2D
{
    int rows, column;
    int** arrayPtr = NULL;
};

struct Array1D
{
    int rows, column, arrayLength;
    int* arrayPtr = NULL;
};