#include <iostream>
using namespace std;
bool solve(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    int target;
    cout << "Enter your target : ";
    cin >> target;
    bool finalans = solve(arr, size, target);
    if (finalans == 1)
    {
        cout << "Found ";
    }
    else
    {
        cout << "Not found ";
    }
}