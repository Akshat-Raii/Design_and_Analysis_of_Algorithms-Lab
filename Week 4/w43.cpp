#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int partition(vector<int>& arr, int low, int high) 
{
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) 
    {
        if (arr[j] < pivot) 
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickSelect(vector<int>& arr, int low, int high, int k) 
{
    if (k > 0 && k <= high - low + 1) 
    {
        int pi = partition(arr, low, high);

        if (pi - low == k - 1)
            return arr[pi];
        if (pi - low > k - 1)
            return quickSelect(arr, low, pi - 1, k);
        return quickSelect(arr, pi + 1, high, k - pi + low - 1);
    }
    return -1; 
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        int k;
        cin >> k;

        int result = quickSelect(arr, 0, n - 1, k);
        if (result != -1)
            cout << result << endl;
        else
            cout << "not present" << endl;
    }
}
