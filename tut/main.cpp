#include <iostream>
#include <cmath>
using namespace std;

int main (int argc, char *argv[]) {
  double ans=0;

for (int a = 1; a < 11; a++) {
  
  int faq=1;
  
  for (int i = 0; i < a ; i++) {
    faq*=i+1;
  }   
  std::cout << "faq = "<< faq << std::endl;
    ans += 1.0/faq;  
std::cout << "ans = "<< ans << std::endl;
  }

  
  std::cout << "ans = "<< ans << std::endl;

  return 0;
}
