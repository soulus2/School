//დავალება 2;

#include <iostream>
#include <cmath>
using namespace std;

int main(){
int n = 15;
double x, s = 1;

cout << "x = "; cin >> x;

for (int i=0;i<n;i++){
int fac=1;
for(int a=0;a<i+1;a++)
{
fac*=a+1;

}
s+=pow(x,i+1)/fac;

}
cout << "s = " << s<<endl;
return 0;
}
