#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start <= end)
    {
        int diff = arr[mid] - mid;
        if (diff == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    if (ans + 1 == 0)
    {
        return size + 1;
    }
    else
    {
        return ans + 1;
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 6, 7, 8, 9};
    int size = arr.size();

    int finalans = solve(arr, size);
    cout << "Missing element is : " << finalans;

    return 0;
}