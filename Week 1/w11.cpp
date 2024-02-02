#include<iostream>
using namespace std;
bool search(int arr[],int se,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==se)
        {
            cout<<"Present "<<i+1<<endl;
            return true;
        }
    }
    return false;
}
int main()
{
    int t,se,n,arr[100],tmp;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>se;
        tmp=search(arr,se,n);
        if(tmp==true)
        {
            // printf("Not present %d",n);
        }
        else
        {
            cout<<"Not present "<<n<<endl;
        }
    }
}