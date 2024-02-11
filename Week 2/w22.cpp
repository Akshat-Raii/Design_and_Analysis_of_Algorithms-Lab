#include<iostream>
#include<algorithm>
using namespace std;
void twosum(int arr[], int n, int target) 
{
    int l = 0;
    int r = n - 1;
    int key = -1; 
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == target)
        {
            key = i;
            break;
        }
    }
    if (key == -1) 
    { 
        cout << "Target not found" << endl;
        return;
    }
    while (l < r) 
    {
        if (arr[l] + arr[r] == target)
        {
            cout << l << "," << r << "," << key << endl;
            break;
        }
        else if (arr[l] + arr[r] > target) 
        {
            r--;
        }
        else 
        { 
            l++;
        }
    }
}
int main() 
{
    int arr[100], n, t, target;
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin >> n;
        for (int j = 0; j < n; j++) 
        {
            cin >> arr[j];
        }
        cin >> target;
        twosum(arr, n, target);
    }
}
