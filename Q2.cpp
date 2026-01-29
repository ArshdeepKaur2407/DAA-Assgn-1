//2. Implement Merge sort for the given array int arr[] = {12, 11, 13, 5, 6, 7}. After implementing
//Merge Sort, apply the same implementation to sort another array: int arr2[] = {38, 27, 43,3, 9, 82, 10}.

#include<iostream>
using namespace std;

void merge( int arr[],int p,int q,int r)
{
int n1=q-p+1;
 int n2=r-q;
int L[n1],R[n2];
 for(int i=0;i<n1;i++)
 {
   L[i]=arr[p+i];
  }
for(int j=0;j<n2;j++)
{
R[j]=arr[q+1+j];
}
int i=0,j=0,k=p;

while(i<n1&&j<n2) // if value left
{
 if(L[i]<=R[j])
 arr[k++]=L[i++];
 
else
 arr[k++]=R[j++];
}
while(i<n1)
 arr[k++]=L[i++];
 
  while(j<n2)
 arr[k++]=R[j++];
}

void mergesort(int arr[],int p,int r)
{
if(p<r)
 {
 int q= p+(r-p)/2;
 mergesort(arr,p,q);
mergesort(arr,q+1,r);
merge(arr,p,q,r);
  }
}

int main()
  {
int n;
cout<<"enter n :";
cin>>n;

int arr[n];
cout<<" enter array : ";
for(int i=0;i<n;i++)
 cin>>arr[i];
 
mergesort(arr,0,n-1);

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;
  }
