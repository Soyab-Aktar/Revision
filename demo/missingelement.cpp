// CPP program to find the only missing element.
#include <iostream>
using namespace std;
 
int findmissing(int ar[], int N)
{
    int l = 0, r = N - 1;
    while (l <= r) {
 
        int mid = (l + r) / 2;
 
        // If this is the first element 
        // which is not index + 1, then 
        // missing element is mid+1
        if (ar[mid] != mid + 1 && 
                        ar[mid - 1] == mid) 
            return mid + 1;
 
        // if this is not the first missing 
        // element search in left side
        if (ar[mid] != mid + 1)
            r = mid - 1;
 
        // if it follows index+1 property then 
        // search in right side
        else
            l = mid + 1;
    }
 
    // if no element is missing
    return -1;
}
 
// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8};
    int N = sizeof(arr)/sizeof(arr[0]);
    cout << findmissing(arr, N);
    return 0;
}