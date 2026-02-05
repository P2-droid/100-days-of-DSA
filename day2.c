/*Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int Arr[n];
    int New[n-1];

    printf("Enter array to save: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);

    }

    int pos;
    printf("Enter Position to Delete element element: ");
    scanf("%d", &pos);

    int a = n - (pos-1);
    for(int i = 0; i < n-a; i++ )
    {
        New[i] = Arr[i];
    }
    for(int i = 0; i <= a; i++ )
    {
        New[pos-1+i] = Arr[pos + i];
    }

    for(int i = 0; i < n-1 ; i++)
    {
        printf("%d ",New[i]);
    }

    return 0;
}

