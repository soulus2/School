#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int arr[11];
  ifstream fin("array1.txt");
  ofstream fout("array2.txt");
  int cn,max=0,min=1000;
  for (int i = 0; i < 11; i++) {
    fin>>cn;
    if(cn<0)cn*=-1;
    arr[i]=cn;
    if(arr[i]>max)max=arr[i];
    if(arr[i]<min)min=arr[i];
  }
  fout << max*min;
  fout.close(); 
  
  return 0;
}
