#include<bits/stdc++.h>
using namespace std;

//T:O(n^2) AS:O(1)
void insertionSort(int a[], int n) {
  for(int i=1; i<n; i++) {
    int current = a[i]; //first element in the unsorted part of array
    int j = i-1;        //last index of the sorted part of array
    
    //will compare 'current' with the elements in sorted part and shift accordingly
    while(j>=0 && current < a[j]) {
      a[j+1] = a[j];     //shifting in right dir so as to give a place to 'current'
                         //in the sorted part of array in future
      j--;                
    }
    a[j+1] = current;   //giving a place to current in the sorted array
  }
}


/* It is a stable algo, i.e., doesn't change the relative positions of elements
 * It is an online algo i.e., can sort a list as it receives
 * It is in-place algo, i.e., takes O(1) auxiliary space
 * The best case input is an array that is already sorted.
   In this case insertion sort has a linear running time (i.e., O(n)).
   During each iteration, the first remaining element of the input is only compared
   with the right-most element of the sorted subsection of the array.
 * The simplest worst case input is an array sorted in reverse order.
   The set of all worst case inputs consists of all arrays where each element
   is the smallest or second-smallest of the elements before it.
   In these cases every iteration of the inner loop will scan and shift the
   entire sorted subsection of the array before inserting the next element.
   This gives insertion sort a quadratic running time (i.e., O(n2)).
 * Average case is also quadratic.
 * Even faster than quicksort for small arrays.
 * The diff between selection sort and insertion sort is that in selection we need to scan the
   rest of the array to find the most minimum whereas in insertion sort we need to compare the
   current element with the rightmost sorted elements. In case it finds a place there will be
   shifts accordingly. This is what enable it to give O(n) time if the array is already sorted.
 * In average cases, insertion sort have to make half the comparisons compared to selection sort.
*/
