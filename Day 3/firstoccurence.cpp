#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &arr, int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end=mid-1;
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

    return ans;
}

int main()
{
    vector<int> arr{10, 20, 30, 30, 30, 60, 60, 80, 90};
    int size = arr.size();
    int target;
    cout << "Enter your target : ";
    cin >> target;
    int finalans = solve(arr, size, target);
    cout << "First occurence of an binery array at index no :" << finalans;

    return 0;
}