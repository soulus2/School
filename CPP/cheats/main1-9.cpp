#include <iostream>
#include <cmath>
using namespace std;

int main (int argc, char *argv[]) {
  
  int n=0, ans=1, inv=0;
  cin >> n;
  
  int len = log10(n)+1;
  for (int i = 0; i < len; i++) {
    inv += (n%10)*pow(10,len-1-i);
    n/=10;
  }
  for (int i = 0; i < len; i++) {
    if (inv%10 != 0){
    ans *= inv%10;
    inv/=10;
    }
  }
  std::cout << "ans - " << ans << std::endl;
  return 0;
}
