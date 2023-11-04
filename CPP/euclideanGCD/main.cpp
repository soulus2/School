#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
  int a,b;
  cin >> a >> b;
  while (a!=0 && b!=0) {

    std::cout << "a "<< a<<" b "<<b << std::endl;

    if (a>b) a=1%b;
    else b=b%a;

  }
  if (a==0) cout << b << "\n";
  else cout << a << "\n";
   
  return 0;
}
