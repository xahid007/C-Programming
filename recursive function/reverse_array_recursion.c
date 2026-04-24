#include <stdio.h>

// Function to reverse array using recursion
void reverse(int arr[], int n, int i)
{
    // Base condition:
    // Stop when left index crosses or meets right index
    if(i >= n)
    {
        return;
    }
    else
    {
        // Swap elements at positions i and n
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;

        // Recursive call:
        // Move inward (i → right, n → left)
        reverse(arr, n-1, i+1);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};

    // n is last index of array
    int n = sizeof(arr)/sizeof(arr[0]) - 1;

    int i = 0;  // start index

    // Call reverse function
    reverse(arr, n, i);

    // Print reversed array
    for(int i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}