#include<cstdio>

using namespace std;

int array[10];
long long res = 0, k;
int main() {
    long long n;
    scanf("%d", &k);
    for (int i=0; i<k; ++i) {
      int pos = 0;
      scanf("%lld", &n);
      while (n > 0) {
        int digit = n % 10;
        res += array[digit];
        ++array[digit];
        n /= 10;
        ++pos;
      }
    }
    printf("%d/n", res);
}
