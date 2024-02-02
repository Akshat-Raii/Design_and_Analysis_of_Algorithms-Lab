#include <iostream>
using namespace std;
void binsearch(int arr[], int n, int se)
{
    int l = 0, h = n - 1, mid, count = 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == se)
        {
            cout << "Present " << count;
            return; 
        }
        else if (arr[mid] > se)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        count++;
    }
    cout << "Not Present " << count; 
}
int main()
{
    int t, se, n, arr[100];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cin >> se;
        binsearch(arr, n, se);
        cout << endl; 
    }
}
