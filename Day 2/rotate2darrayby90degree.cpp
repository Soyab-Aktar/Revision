#include <iostream>
#include <vector>
using namespace std;
void solve(vector<vector<int>> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < arr[i].size(); j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // Reverse each row
    for (int i = 0; i < size; i++)
    {
        int start = 0;
        int end = arr[i].size() - 1;

        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    int size = arr.size();
    solve(arr, size);
}