#include<iostream>
#include<algorithm>
using namespace std;
void merge(int arr[],int beg,int mid,int end)
{
    int i,j,k;
    int n1=mid-beg+1;
    int n2=end-mid;
    int larr[50],rarr[50];
    for(int i=0;i<n1;i++)
    {
        larr[i]=arr[beg+i];    
    }
    for(int j=0;j<n2;j++)
    {
        rarr[j]=arr[mid+j+1];    
    }
    i=0,j=0,k=beg;
    while(i<n1 && j<n2)
    {
        if(larr[i]<=rarr[j])
        { 
            arr[k]=larr[i];
            i++;
        }
        else
        {
            arr[k]=rarr[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=larr[i];
        i++;
        k++;
    }
    while(i<n2)
    {
        arr[k]=rarr[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int beg,int end)
{
    int mid;
    if(beg<end)
    {
        mid=(beg+end)/2;
        mergesort(arr,beg,mid);
        mergesort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
    
}
bool duplicate(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
       if(arr[i]==arr[i+1])
       {
         return true;
       }
    }
  return false;
}
int main()
{
    int arr[100],n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];    
        }
        mergesort(arr,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";    
        }
        if(duplicate(arr,n))
        {
            cout<<"Duplicate found"<<endl;
        }
    }
}