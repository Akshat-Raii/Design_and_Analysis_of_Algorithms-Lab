#include <iostream>
#include <algorithm>
using namespace std;
void findPairsWithDifference(int arr[], int n, int difference) 
{
    sort(arr, arr + n);
    int left = 0;
    int right = 1;

    while (right < n && left < n) {
        if (left != right && arr[right] - arr[left] == difference) 
        {
            cout << arr[left] << "," << arr[right] << endl;
            left++;
            right++;
        } 
        else if (arr[right] - arr[left] < difference) 
        {
            right++;
        }
        else
        {
            left++;
        }
    }
}
int main() 
{
    int arr[100], n, t, difference;
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin >> n;
        for (int j = 0; j < n; j++) 
        {
            cin >> arr[j];
        }
        cin >> difference;
        findPairsWithDifference(arr, n, difference);
    }
}
