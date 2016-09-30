#include <iostream>

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
int gcd_euclide(int a, int b){
 int rem=0;
 if (b==0) return a;
 else 
  {
    rem = a % b;
    return gcd_euclide(b,rem);
  } 
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_euclide(a, b) << std::endl;
  return 0;
}
