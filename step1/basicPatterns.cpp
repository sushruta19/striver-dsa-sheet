#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}

void pattern2(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << "*";
    }
    cout<< "\n";
  }
}

void pattern3(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << j;
    }
    cout<< "\n";
  }
}

void pattern4(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << i;
    }
    cout << "\n";
  }
}

void pattern5(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n-i+1; j++) {     //also (j=n ; j>=i; j--)
      cout << "*";
    }
    cout << "\n";
  }
}

void pattern6(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n-i+1; j++) {
      cout << j;
    }
    cout << "\n";
  }
}

void pattern7(int n) {
  for(int i=1; i<=n ; i++) {
    for(int j=1; j<=n-i; j++) {
      cout << " ";
    }
    for(int k=1; k<=(2*i-1); k++) {
      cout << "*";
    }
    cout << "\n";
  }
}

void pattern8(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i-1; j++) {
      cout << " ";
    }
    for(int k=1; k<=(2*n-2*i+1); k++) {
      cout << "*";
    }
    cout << "\n";
  }
}

void pattern9(int n) {
  pattern7(n);
  pattern8(n);
}

void pattern10(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
  for(int i=1; i<=n-1; i++) {
    for(int j=1; j<=n-i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
}

void pattern11(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      if((i+j)&1) {
        cout << "0 ";
      }
      else cout << "1 ";
    }
    cout << "\n";
  }
}

void pattern12(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << j;
    }
    for(int k=1; k<=2*(n-i); k++) {
      cout << " ";
    }
    for(int m=i; m>=1; m--) {
      cout << m;
    }
    cout << "\n";
  }
}

void pattern13(int n) {
  int j = 1;
  for(int i=1; i<=n; i++) {
    for(;j<=i*(i+1)/2; j++) {
      cout << j << " ";
    }
    cout << "\n";
  }
}

void pattern13var(int n) {
  int temp = 1, j = 1;
  for(int i=1; i<=n; i++) {
    if(i%2 == 1) {
      for(j=temp; j<=i*(i+1)/2; j++) {
        cout << j << " ";
      }
      temp = j;
    }
    else {
      for(j=i*(i+1)/2; j>=temp; j--) {
        cout << j << " ";
      }
      temp = i*(i+1)/2 + 1 ;
    }
    cout << "\n";
  }
}

void pattern18(int n) {
  char ch = 'A';
  for(int i=1; i<=n; i++) {
    for(int j=n-i; j<n; j++) {
      cout << (char)(ch + j) << " ";
    }
    cout << "\n";
  }
}

void pattern19(int n) {
  for(int i=1; i<=n ; i++) {
    for(int j=i; j<=n; j++) {
      cout << "*";
    }
    for(int k=1; k<=2*(i-1); k++) {
      cout << " ";
    }
    for(int m=i; m<=n; m++) {
      cout << "*";
    }
    cout << "\n";
  }
  for(int i=1; i<=n ; i++) {
    for(int j=1; j<=i; j++) {
      cout << "*";
    }
    for(int k=1; k<=2*(n-i); k++) {
      cout << " ";
    }
    for(int m=1; m<=i; m++) {
      cout << "*";
    }
    cout << "\n";
  }
}

void pattern20(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=i; j++) {
      cout << "*";
    }
    for(int k=1; k<=2*(n-i); k++) {
      cout << " ";
    }
    for(int m=1; m<=i; m++) {
      cout << "*";
    }
    cout << "\n";
  }
  for(int i=1; i<=n-1; i++) {
    for(int j=1; j<=(n-i); j++) {
      cout << "*";
    }
    for(int k=1; k<=2*i; k++) {
      cout << " ";
    }
    for(int j=1; j<=(n-i); j++) {
      cout << "*";
    }
    cout << "\n";
  }
}

void pattern21(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n; j++) {
      if(i==1 || i==n || j==1 || j==n) cout << "*";
      else cout << " ";
    }
    cout << "\n";
  }
}

void pattern22(int n) {
  for(int i=1; i<=2*n-1; i++) {
    for(int j=1; j<=2*n-1; j++) {
      for(int c=1; c<=n; c++) {
       if(i == c || i == 2*n-c || j == c || j == 2*n-c) {
         cout << n-c+1; break;
       }
     }
   }
   cout << "\n";
 }
}
    
  
int main() {
  int n;
  cout << "Enter n: "; cin >> n; cout << "\n";
  cout << "Pattern 1:\n"; pattern1(n); cout << "\n";
  cout << "Pattern 2:\n"; pattern2(n); cout << "\n";
  cout << "Pattern 3:\n"; pattern3(n); cout << "\n";
  cout << "Pattern 4:\n"; pattern4(n); cout << "\n";
  cout << "Pattern 5:\n"; pattern5(n); cout << "\n";
  cout << "Pattern 6:\n"; pattern6(n); cout << "\n";
  cout << "Pattern 7:\n"; pattern7(n); cout << "\n";
  cout << "Pattern 8:\n"; pattern8(n); cout << "\n";
  cout << "Pattern 9:\n"; pattern9(n); cout << "\n";
  cout << "Pattern 10:\n"; pattern10(n); cout << "\n";
  cout << "Pattern 11:\n"; pattern11(n); cout << "\n";
  cout << "Pattern 12:\n"; pattern12(n); cout << "\n";
  cout << "Pattern 13:\n"; pattern13(n); cout << "\n";
  cout << "Pattern 13 Variation:\n"; pattern13var(n); cout << "\n";
  cout << "Pattern 18:\n"; pattern18(n); cout << "\n";
  cout << "Pattern 19:\n"; pattern19(n); cout << "\n";
  cout << "Pattern 20:\n"; pattern20(n); cout << "\n";
  cout << "Pattern 21:\n"; pattern21(n); cout << "\n";
  cout << "Pattern 22:\n"; pattern22(n); cout << "\n";
}

