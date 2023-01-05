#include<bits/stdc++.h>
using namespace std;

/**Print 1 To N Without Loop**/

void printNos(int n) {
  if(n<1) return;
  printNos(n-1);
  cout << n << " ";
}

/**Print GFG n times**/

void printGfg(int n) {
  if(n == 0) return;
  cout << "GFG ";
  printGfg(n-1);
}

/**Print N to 1 without loop**/

void printNos_rev(int n) {
  if(n==0) return;
  cout << n << " ";
  printNos_rev(n-1);
}

/**Sum of first N numbers**/

int summation(int n) {
  if(n==0) return 0;
  return n + summation(n-1);
}
//another way
int summation(int n, int sum=0) {
  if(n==0) return sum;
  sum+=n;
  summation(n-1, sum);
}

/**Factorial of N numbers**/
int factorial(int n) {
  if(n==0) return 1;
  return n*factorial(n-1);
}

/**Reverse an array**/
void reverse_array(int a[],int l, int r) {
  if(l<r) {
    swap(a[l], a[r]);
    reverse_array(a, l+1, r-1);
  }
}

/**Check if the given String is Palindrome or not**/
bool isPalindrome(string s, int l, int r) {
  if(l<r) {
    if(s[l]!=s[r]) return false;
    return isPlalindrome(s, l+1, r-1);
  }
  return true;
}

/**Print Fibonacci Series up to Nth term**/
//couldn't find a recursive function that prints fibonacci series upto Nth term

