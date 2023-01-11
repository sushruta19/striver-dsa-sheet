#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int start, int n) {
  if(start == n-1) return;
  //In first pass we get the minimum element in the beginning whose position 
  //isn't going to change
  for(int i=start+1; i<n; i++) {
    if(a[start] > a[i]) swap(a[start], a[i]);
  }
  
  //Now we are unbothered with the first element so we will move on to the
  //array from start+1 to n-1
  selectionSort(a, start+1, n);
}

int main() {
  int a[] = {4,3,2,1};
  int n = sizeof(a)/sizeof(a[0]);
  selectionSort(a, 0, n);
  for(int i=0; i<n; i++)cout <<a[i]<< " ";
  cout << endl;
}
