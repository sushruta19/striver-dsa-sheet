#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n) {
  if(n == 1) return;
  
  bool sorted = true;
  //first pass
  for(int i=0; i<n-1; i++) {
    if(a[i] > a[i+1]) {
      swap(a[i], a[i+1]);
      sorted = false;
    }
  }
  
  if(sorted) return;
  
  //The max element is now in the last part of array.
  //We can now focus from 0 to n-2 indexof the array.
  bubbleSort(a, n-1);
}

int main() {
  int a[] = {4,3,2,1};
  int n = sizeof(a)/sizeof(a[0]);
  bubbleSort(a, n);
  for(int i=0; i<n; i++)cout <<a[i]<< " ";
  cout << endl;
}
