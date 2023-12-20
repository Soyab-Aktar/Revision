#include <iostream>
#include <limits.h>
using namespace std;
void solve(int arr[], int size)
{
    int minnum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minnum)
        {
            minnum = arr[i];
        }
    }
    cout << "Minimum number is : " << minnum;
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int size = 8;
    solve(arr, size);
    return 0;
}