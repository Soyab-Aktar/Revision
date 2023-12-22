#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &arr, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
}

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = arr.size();
    int target;
    cout << "Enter your target : ";
    cin >> target;
    int finalans = solve(arr, size, target);
    if (arr[finalans] != target)
    {
        cout << "not Found .";
    }
    else
    {
        cout << "found .";
    }

    return 0;
}