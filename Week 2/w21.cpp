#include<iostream>
#include<algorithm>
using namespace std;
void duplicate(int arr[], int n, int key) 
{
    int l, h;
    l = lower_bound(arr, arr + n, key) - arr;
    h = upper_bound(arr, arr + n, key) - arr;
    if (l < n && arr[l] == key) 
    {
        cout << key << "-" << h - l << endl;
    }
    else 
    {
        cout << "Key not present" << endl;
    }
}
int main() 
{
    int arr[100], n, t, key;
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin >> n;
        for (int j = 0; j < n; j++) 
        {
            cin >> arr[j];
        }
        cin >> key;
        duplicate(arr, n, key);
    }
    
}
