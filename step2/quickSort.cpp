#include<bits/stdc++.h>
using namespace std;

void print(int a[], int low, int high) {
  for(int i=low; i<=high; i++) cout << a[i] << " ";
  cout << endl;
}

int partition(int a[], int low, int high) {
  int pivot = a[high];
  int i = low - 1;
  
  for(int j=low; j<=high-1; j++) {
    if(a[j] <= pivot) {
      i++;
      swap(a[i], a[j]);
    }
  }
  
  swap(a[i+1], a[high]);
  return (i+1);
}

void quickSort(int a[], int low, int high) {
  if(low < high) {
    int pi = partition(a, low, high);
    quickSort(a, low, pi-1);
    quickSort(a, pi+1, high);
  }
}

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++) cin >> a[i];
  quickSort(a, 0, n-1);
  for(int i=0; i<n; i++) cout << a[i] << " ";
  cout << endl;
}

/* The entire idea is that the subarray to the left of the pivot will be lesser
 * or equal to the pivot value and the right subarray will have values greater
 * than pivot. We are not concerned whether elements are sorted in leftmost or
 * rightmost subarray as this will be handled when we divide the left & right
 * subarray again through recursion.
 * So in partition() we check whether any element is lesser or equal to the pivot.
 * If yes, then it is send to the leftmost region where all the elements which
 * are already less/equal to the pivot are present.
 * Then, after the loop ends, the element just to the right of the value
 * which is less than the pivot is swapped with the a[high] = pivot since
 * that is the place where the pivot should lie since all the values to its left
 * is less/equal.
 * Then the leftmost and rightmost subarray is called and this process repeats.
 */
 
 /*Here in this particular case, last element has been choosen as the pivot.*/
