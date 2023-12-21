#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> &arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    int totalsum = ((size + 1) * (size + 2)) / 2;
    int ans = totalsum - sum;
    cout << "Missing number is : " << ans;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 6, 7, 8, 9};
    int size = arr.size();

    solve(arr, size);
}