//Write a program to implement the following algorithms using divide and conquer approach:
//1. Consider an array arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91} and use Binary Search to find the target 23.

#include<iostream>
using namespace std;
//BINARY SEARCH
int binarysearch(int arr[],int l,int r,int key)
{
  if (l>r)
 return -1;
 int mid = (l+r) / 2;
 
 if(arr[mid]==key)
 {
  cout<<"found :";
  return mid;
 }
 else if(arr[mid]>key)
 {
  return binarysearch(arr,l,mid-1,key);
 }
 else if(arr[mid]<key)
 {
  return binarysearch(arr,l,mid+1,key);
 }
else
return -1;
}


int main()
{ int n;
 cout<<"enter number of elemts: ";
 cin>>n;
 int arr[n];
 cout<<"enter array : ";
 for (int i=0;i<n;i++)
{cin>>arr[i];
}
int key;
  cout<<"enter key";
cin>>key;
 int res = binarysearch(arr, 0, n - 1, key);
 if (res != -1)
 cout << " found " << res;
else
 cout << " not found";
 return 0;
 
}
