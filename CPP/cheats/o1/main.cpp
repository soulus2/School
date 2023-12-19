#include <bits/stdc++.h> 
using namespace std;

void func(){
  int X[3][3];
  ifstream fin("inputfile.txt");
  ofstream fout("outputfile.txt");
  int min, indexj=0,indexi=0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++) {fin>>X[i][j]; if(X[i][j]>0)min=X[i][j];}
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(X[i][j]>0 && X[i][j]<min){
        min=X[i][j];
        indexi=i;
        indexj=j;
      }
    }
  }
  fout<<"min: "<<min<<indexi<<" "<<indexj<<"\n";
  fout.close();
  fin.close();
}

int main(){
  func();
  return 0;
}
