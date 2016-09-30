#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}
long gcd_euclide(long a, long b){
  int rem=0;
  if (b==0) return a;
   else
    {
     rem = a % b;
     return gcd_euclide(b, rem);
    }
}
long long lcm(long  a, long b)
{
 return a * b / gcd_euclide(a, b);  
}
int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
