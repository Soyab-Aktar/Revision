#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> &arr, int size, int k)
{
    vector<int> ans(size);
    for (int i = 0; i < size; i++)
    {
        int newindex = (i + k) % size;
        ans[newindex] = arr[i];
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60};
    int size = arr.size();
    int k;
    cout << "Enter how much you want to shift : ";
    cin >> k;

    solve(arr, size, k);
}