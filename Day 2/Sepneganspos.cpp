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
        if (arr[index] < 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
            index++;
        }
        else
        {
            left++;
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
    vector<int> arr{23, -7, 12, -10, -11, 40, 60};
    int size = arr.size();
    solve(arr, size);
}