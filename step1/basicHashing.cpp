#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n) {
  unordered_map<int, int> freq;
  for(int i=0; i<n; i++) {
    freq[arr[i]]++;
  }

  for(auto x : freq) {
    cout << x.first << " " << x.second << endl;
  }
}

void maxMinFrequency(int arr[], int n) {
  unordered_map<int, int> freq;
  int max_freq=-1, min_freq = INT_MAX;
  for(int i=0; i<n; i++) {
    freq[arr[i]]++;
    max_freq = max(max_freq, freq[arr[i]]);
    min_freq = min(min_freq, freq[arr[i]]);
  }
  cout << "Max Freq : " << max_freq << " Min_freq : " << min_freq << endl;
}
                    
