#include<bits/stdc++.h>
using namespace std;

/**Selection Sort**/
//T:O(n^2) AS:O(1)
void selectionSort(int arr[], int n) {
  for(int i=0; i<n-1; i++) {
    int mini = i;
    for(int j=i+1; j<n; j++) {
      if(arr[j] < arr[mini]) mini = j;
    }
    swap(arr[mini], arr[i]);
  }
}

/* Generally performs worse than insertion sort
 * Its time complexity is always n(n-1)/2 no matter how the array is whereas
   insertion sort in worst case has time complexity n(n-1)/2.
 * It is not an online algo like insertion sort which can handle new incoming data.
 * Known for simplicity
 * Can be useful where auxiliarry memory is limited
 * outperforms bubble sort and gnome sort
 * if writes are more expensive than reads, then selection sort is preferable
   to insertion sort in terms of number of writes(n-1 swaps vs (n-1)(n)/2 swaps)
*/
