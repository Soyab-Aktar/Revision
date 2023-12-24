#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>&arr,int size)
{
  int start=0;
  int end=size-1;
  int mid =(start+end)/2;
  while(start<=end)
  {
      if(arr[mid]<arr[mid+1])
      {
        start=mid+1;
      }
      else
      {
        end=mid-1;
      }  
    mid=(start+end)/2;

  }

  // if(ans+1==0)
 
  //  { return size+1;}
 
  // else
  // {
    return start;
  // }

}
int main()
{
  vector<int>arr{10,20,30,75,70,50,40,10};
  int size=arr.size();
  int final = solve(arr,size);
  cout<<"peak element is : "<<arr[final];

  return 0;
}