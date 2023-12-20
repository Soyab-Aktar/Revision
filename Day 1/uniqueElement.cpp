#include <iostream>
using namespace std;
void solve(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "Unique element is :" << ans;
}
int main()
{
    int arr[] = {11, 15, 19, 17, 15, 19, 11};
    int size = 7;
    solve(arr, size);
    return 0;
}