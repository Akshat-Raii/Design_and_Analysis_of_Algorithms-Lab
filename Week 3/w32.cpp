#include<iostream> 
using namespace std; 
void selectionSort(int arr[], int n) 
{ 
  int i, j, min_idx; 
  for (i = 0; i < n - 1; i++) 
  { 
    min_idx = i; 
    for (j = i + 1; j < n; j++) 
    { 
      if (arr[j] < arr[min_idx]) 
        min_idx = j; 
    } 
    if (min_idx != i) 
      swap(arr[min_idx], arr[i]); 
  } 
}  
void printArray(int arr[], int size) 
{ 
  int i; 
  for (i = 0; i < size; i++) 
  { 
    cout << arr[i] << " "; 
    cout << endl; 
  } 
} 
int main() 
{ 
  int arr[100],n;
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {     
        cin>>n;
        selectionSort(arr, n); 
        cout << "Sorted array: \n"; 
        printArray(arr, n); 
  }  
  int n = sizeof(arr) / sizeof(arr[0]); 
} 

