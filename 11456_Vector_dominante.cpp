#include <iostream>

using namespace std;
/*
input 
5
9 7 7 7 7
8 3 4 5 6

output 
0
*/

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  unsigned short int n; cin >> n;
  unsigned short int nn1[n];
  unsigned short int nn2[n];
  unsigned short int r = 1;

  
  for(unsigned short int i = 0; i < n; i++) {
	  cin >> nn1[i];
  }

  for(unsigned short int i = 0; i < n; i++) {
	  cin >> nn2[i];
    if(nn1[i]<=nn2[i])
      r = 0;

  }
  cout << r;
}