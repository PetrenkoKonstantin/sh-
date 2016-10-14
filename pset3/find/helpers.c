/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
      //int start = (n + 1) - n;
      
    int l = 0;
    int r = n;
 
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
                
        if (values[mid] == value) 
        return true;
        if (values[mid] < value) 
        l = ++mid;
        
        if (values[mid] > value) 
        r = --mid;
    }
        return false;
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    bool noSwap;
    int tmp;
    //int size = sizeof(values) / sizeof(int);
    for (int i = n - 1; i >= 0; i--)
        {
        for (int j = 0; j < i; j++)
            {
                noSwap = 1;
            if (values[j] > values[j + 1])
                {
                tmp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = tmp;
                noSwap = 0;
                } 
            }
            if (noSwap == 1)
                break;
        }
    }