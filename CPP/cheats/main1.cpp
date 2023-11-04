//დავალება 1

#include <iostream>
#include <cmath>

using namespace std;

int main (int argc, char *argv[]) {
  int n;
  cout << "შეიყვანეთ სამნიშნა რიცხვი: " ; cin >> n;

  int c1 = n%10;
  int c2 = (n/10)%10;
  int c3 = n/100;

  int low, high;
  if      (c1 >= c2 && c1 >= c3) high = c1;
  else if (c2 >= c1 && c2 >= c3) high = c2;
  else if (c3 >= c1 && c3 >= c2) high = c3;  
 
  if      (c1 <= c2 && c1 <= c3) low = c1;
  else if (c2 <= c1 && c2 <= c3) low = c2;
  else if (c3 <= c1 && c3 <= c2) low = c3;  
  
  cout << "უდიდესი: "<< high <<"\nუმცირესი: " << low <<"\n";
  return 0;
}
