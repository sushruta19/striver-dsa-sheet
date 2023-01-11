#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n) {
  if(n == 1) return;
  insertionSort(a, n-1);
  int temp = a[n-1];
  int j = n-2;
  
  while(j>=0 && temp < a[j]) {
    a[j+1] = a[j];
    j--;
  }
  a[j+1] = temp;
} 

int main() {
  int a[] = {4,3,2,1};
  int n = sizeof(a)/sizeof(a[0]);
  insertionSort(a, n);
  for(int i=0; i<n; i++)cout <<a[i]<< " ";
  cout << endl;
}

/*The recursive idea is that the size of sorted part of array increases from
 * 1 to n-1. So by doing insertionSort(a, n-1); we will go to the smallest 
 * subarray and begin our shifting operations from there.
 * So we can start with the smallest sorted array and then after shifting,
 * the call finishes and we then move to a one size bigger subarray to be sorted.
 */
