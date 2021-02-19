#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
  while (tt--) {                               
  	int n, a, k;
  	cin >> n >> a >> k;
  	// view the image in this repository for better understanding
  	// calculate the sum of the internal angles of the given polygon
  	int total = 180 * (n - 2);
  	// to get 'd', the formula is in fraction form
  	// calculate the numerator in getting 'd'
  	int d_num = 2 * (total - a * n);
  	// calculate the denominator in getting 'd'
  	int d_den = n * (n - 1);
  	// calculate the 'k'-th angle in fraction form
  	// this the equation in the numerator
  	int num = a * d_den + (k - 1) * d_num;
		// this is the equation in the denominator
		int den = d_den;
		int g = __gcd(num, den);
		// divide the numerator and the denominator by their gcd to make them co-prime
		num /= g;
		den /= g;
		cout << num << " " << den << '\n';
  }
  return 0;
}
