#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
    int key;
    for(int i=1;i<n;i++)
        {
            key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key)
                {
                    arr[j+1]=arr[j];
                    j=j-1;
                }
            arr[j+1]=key;
        }
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
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
            sort(arr,n);
        }
    
}