#include<iostream>
using namespace std;
bool search(int arr[], int l, int u, int key, int &count)
{
    for (int i = l; i <= u; i++)
    {
        count++;
        if (arr[i] == key)
        {
            cout << "Present " << count << endl;
            return true;
        }
    }
    cout << "Not Present " << count << endl;
    return false;
}
bool exponential(int arr[], int n, int key)
{
    int count = 1;
    if (arr[0] == key)
    {
        cout << "Present " << count << endl;
        return true;
    }

    int i = 1;
    while (i < n && arr[i] <= key)
    {
        i *= 2;
        count++;
    }

    return search(arr, i / 2, min(n - 1, i), key, count);
}
int main()
{
    int t, arr[100], n, key;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        cin >> key;
        exponential(arr, n, key);
    }
}
