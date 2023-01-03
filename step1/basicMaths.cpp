#include<bits/stdc++.h>
using namespace std;

/**Count Digits**/

//Using loop, T:O(log10(n)) S:O(1)
int count_digits_v1(int n) {
  if(n == 0) return 1;            //handles n=0 corner case
  int count = 0;
  while(n!=0) {
    count++;
    n /= 10;
  }
  return count;
}

//Convert into string
int count_digits_v2(int n) {
  string x = to_string(n);
  return x.length();
}

//Using Logarithm of base 10
//Number of digits = floor(log10(n))+1, T:O(log10(n)) S:O(1)
int count_digits_v3(int n) {
  if(n == 0) return 1;            //handles n=0 corner case
  int digits = floor(log10(n))+1;
  return digits;
}

/**Reverse a Number**/

//Using loop(Overflow Handled), T:O(log10(n)) S:O(1)
int reverse_number(int n) {
  int rev = 0;
  while(n>0) {
    int digit = n%10;
    if(rev > INT_MAX/10 || (rev == INT_MAX/10 && digit > 7))
      return -1;
    if(rev < INT_MIN/10 || (rev == INT_MIN/10 && digit < -8))
      return -1;
    rev = 10*rev + digit;
    n /= 10;
  }
  return rev;
}

/**Check if number is palindrome or not**/

//Using reverse_number function
//T:O(log10(n)) S:O(1)
bool isPalindrome(int n) {
  int reverse = reverse_number(n);
  return reverse == n;
}

/**GCD and LCM**/
//Euclidean Algorithm T:O(logɸmin(a,b)),where ɸ is 1.61 S:O(1)
int gcd(int a, int b) {
  if(a==0)
    return b;
  return gcd(b%a, a);
}
int lcm(int a, int b) {
  return (a/gcd(a,b))*b;
}

/**Armstrong Numbers**/
bool isArmstrong(int n) {
  int count = 0;
  if(n==0) count++;
  int temp = n;
  while(temp!=0) {
    count++;
    temp /= 10;
  }
  int sumOfPower = 0;
  while(n>0) {
    sumOfPower = pow(n%10, count);
    n /= 10;
  }
  return sumOfPower == n;
}

/**Print all Divisors**/
//T:O(sqrt(n)) S:O(1)
void printDivisors(int n) {
  for(int i=1; i*i<=n; i++) {
    if(n%i == 0) {
      cout << i << " ";
      if(n/i != i) cout << n/i << " ";
    }
  }
  cout << endl;
}

/**Check for prime**/
bool isPrime(int n) {
  if(n<2) return false;         //0,1 and all -ve numbers are non-prime
  for(int i=2; i*i<=n; i++) {
    if(n%i == 0) return false;
  }
  return true;
}
  
  


