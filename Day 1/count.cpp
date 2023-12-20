#include <iostream>
using namespace std;
void solve(int arr[], int size)
{
    int countZero = 0;
    int countOne = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        else
        {
            countOne++;
        }
    }
    cout << "Numbers of Zero : " << countZero << endl;
    cout << "Numbers of One : " << countOne << endl;
}
int main()
{
    int arr[] = {0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1};
    int size = 11;

    solve(arr, size);
    return 0;
}