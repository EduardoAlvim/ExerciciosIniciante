#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

int main()
{
    int arr1[3], arr2[3];
    for(int i = 0; i<3 ; i++){
        cin>> arr1[i];
        arr2[i] = arr1[i];
    }
    insertionSort(arr1, 3);
    for(int i = 0; i<3 ; i++){
        cout << arr1[i]<< " ";
    }
    cout << " " << endl;
    for(int i = 0; i<3 ; i++){
        cout << arr2[i]<< " ";
    }
    return 0;
}
