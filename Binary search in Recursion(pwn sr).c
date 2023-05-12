#include <stdio.h>
int bs(int arr[], int low, int high, int s)
{
	
    while(low <= high) {  
        int mid = low + (high - low) / 2; //here

        if (arr[mid] == s)
            return mid;

        if (arr[mid] > s)
            return bs(arr, low, mid - 1,s);

        return bs(arr, mid + 1, high,s);
    }

    return -1;
}
int main()
{
    int arr[100], n, s, i, low, high, found;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &s);

//    low = 0;
//    high = n - 1;

    found = bs(arr, 0, n-1, s);

    if (found == -1)
        printf("Element not found in the array\n");
    else
        printf("Element found at index %d\n", found);

    return 0;
}
