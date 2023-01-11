#include<bits/stdc++.h>
using namespace std;

void print(int a[], int l, int r) {
  for(int i=l; i<=r; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

void merge(int a[], int l, int mid, int r) {
  int temp[r-l+1];
  int i = l;
  int j = mid+1;
  int k = 0;
  while(i<=mid && j<=r) {
    if(a[i] < a[j]) {
      temp[k]=a[i];
      i++;
    }
    else {
      temp[k] = a[j];
      j++;
    }
    k++;
  }
  while(i<=mid) {
    temp[k]=a[i];
    i++; k++;
  }
  while(j<=r) {
    temp[k]=a[j];
    j++;k++;
  }
  for(int m=l; m<=r; m++) {
    a[m] = temp[m-l];
  }
}

void mergeSort(int a[], int l, int r) {
  if(l<r) {
    int mid = (l+r)/2;
    mergeSort(a, l, mid);
    mergeSort(a, mid+1, r);
    merge(a, l, mid, r);
  }
}

int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++) cin>>a[i];
  mergeSort(a, 0, n-1);
  cout << "Sorted arr is: ";
  print(a, 0, n-1);
}

/*The merge sort first divides the array(not actual arr but just playing with the
 * indices). Then merges them by first creating temporary arr in which the values
 * from the two sorted arrays which were divided are copied in ascending value.
 * Then the temp is copied to that particular subarray.
 */
