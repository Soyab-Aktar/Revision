#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> &arr, int size)
{
    int left = 0;
    int right = size - 1;
    int index = 0;
    while (left <= right)
    {
        if (arr[index] == 0)
        {
            swap(arr[left], arr[index]);
            left++;
            index++;
        }
        else if (arr[index] == 2)
        {
            swap(arr[right], arr[index]);
            right--;
        }
        else
        {
            index++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr{1, 0, 2, 2, 1, 0, 1, 0};
    int size = arr.size();
    solve(arr, size);
}