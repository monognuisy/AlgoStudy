#include <iostream>
using namespace std;

int modPow(int base, int exp, int mod) {
  int result = 1;
  while (exp) {
    if (exp & 1) result = (result * base) % mod;
    base = ((base % mod) * (base % mod)) % mod;
    exp >>= 1;
  }
  return result;
}

int main() {
  int t;
  const int mod = 10;
  scanf("%d", &t);
  while (t--) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", modPow(a, b, mod));
  }
  return 0;
}