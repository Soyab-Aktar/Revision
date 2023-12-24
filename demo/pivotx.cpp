#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>&arr,int size)
{
  int start=0;
  int end=size-1;
  int mid=start+(end-start)/2;

  
    while(start<=end)
    {
      if(arr[mid]<arr[mid-1])
      {
        return mid-1;
      }
      else if(arr[mid]>arr[mid-1])
      {
        return mid;
      }
      else if(arr[start]>arr[mid])
      {
        end=mid-1;
      }
      else if (arr[start]<arr[mid])
      {
        start=mid+1;
      }
      else if(arr[start]==arr[end])
      {
        return start;
      }
      mid=start+(end-start)/2;

    }
    

  
}
int main()
{
  vector<int>arr{12,13,14,15,2,3,4,5,6,7,8};
  int size=arr.size();
  int final =solve(arr,size);
  cout<<"Rotated sorted array's pivot point : "<<arr[final];
  return 0;
}