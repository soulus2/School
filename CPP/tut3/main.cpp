#include <bits/stdc++.h> 
using namespace std;

int main (int argc, char *argv[]) {
   
  int M[5][5];
  int up=1;
  int down=1;
  int v=25;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j<5;j++){
     M[i][j]=v;
      v--;
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if(j<(4-i))up*=M[i][j];
      else if (j>(4-i))down*=M[i][j];
    }
  }
  if(up>down)std::cout << "Up is more" << std::endl;
  else if (down>up)std::cout << "Down is more" << std::endl; 
  else std::cout << "are equal" << std::endl;

  return 0;
}
