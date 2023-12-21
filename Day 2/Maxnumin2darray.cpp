#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void solve(vector<vector<int>> &arr, int size)
{
    vector<int> ans;
    int maxAns = INT_MIN;
    int maxRowIndex;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        int finalcount = -1;
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
                finalcount = count;
            }
        }
        ans.push_back(finalcount);
        // Check if the current row has more 1s than the current maximum
        if (finalcount > maxAns)
        {
            maxAns = finalcount;
            maxRowIndex = i;
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Total 1 number in " << i + 1 << "st row is : " << ans[i] << endl;
    }
    cout << endl;

    cout << "Maximum number of 1s is in the " << maxRowIndex + 1 << "th row with count: " << maxAns << endl;
    cout << endl;
}
int main()
{
    vector<vector<int>> arr{{1, 0, 0, 0},
                            {1, 0, 1, 0},
                            {1, 1, 0, 0},
                            {1, 1, 1, 0}};
    int size = arr.size();
    solve(arr, size);
}