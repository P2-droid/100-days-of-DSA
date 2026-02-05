/* Insert an Element in an Array

Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.

Input:
- First line: integer n
- Second line: n space-separated integers (the array)
- Third line: integer pos (1-based position)
- Fourth line: integer x (element to insert)

Output:
- Print the updated array (n+1 integers) in a single line, space-separated

Example:
Input:
5
1 2 4 5 6
3
3

Output:
1 2 3 4 5 6

Explanation: Insert 3 at position 3, elements [4,5,6] shift right */

#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int Arr[n];
    int New[n+1];

    printf("Enter array to save: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);

    }

    int pos;
    printf("Enter Position to enter new element: ");
    scanf("%d", &pos);

    int data;
    printf("Enter data to save: ");
    scanf("%d", &data);

    int a = n - (pos-1);
    for(int i = 0; i < n-a; i++ )
    {
        New[i] = Arr[i];
    }
    New[pos-1] = data;
    for(int i = 0; i <= a; i++ )
    {
        New[pos+i] = Arr[pos - 1 + i];
    }

    for(int i = 0; i < n+1 ; i++)
    {
        printf("%d ",New[i]);
    }

    return 0;
}

