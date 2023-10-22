#include <bits/stdc++.h>
using namespace std;
void clear()
{
#if defined _WIN32
    system("cls");
    //clrscr(); // including header file : conio.h
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
    //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
#elif defined (__APPLE__)
    system("clear");
#endif
}
int main (int argc, char *argv[]) {
  int board[3][3]={{0,0,0},{0,0,0},{0,0,0}};
  bool running=true;
  bool cp=false;
  
  printf("\n\nO------------> X\n| 0,0|1,0|2,0\n| ___|___|___\n| 0,1|1,1|1,2\n| ___|___|___\n| 1,2|1,2|2,2\nV Y\n\n"); 
  while (running) {
    unsigned int cX=0,cY=0;
    int val=0;
   
    
    std::cout << "Input x: "; cin >>  cX;
    std::cout << "Input Y: "; cin >>  cY;

    clear(); 
    while(board[cX][cY]==0){
    
    if (cp) {
      val=1;
    }
    else {
      val=2;
    }
    
      
    
    board[cX][cY]=val;
    
    cp=!cp;
 
  }
   
    printf("\n %d | %d | %d \n___|___|___\n %d | %d | %d \n___|___|___\n %d | %d | %d \n\n", board[0][0],board[1][0],board[2][0],board[0][1],board[1][1],board[2][1],board[0][2],board[1][2],board[2][2]);
    
    if (board[0][0]==board[1][0]&&board[1][0]==board[2][0]){ if(board[0][0]!=0){ std::cout <<board[0][0]<< " player won!" << std::endl;
; break;}}
    if (board[0][1]==board[1][1]&&board[1][1]==board[2][1]){ if(board[0][1]!=0){ std::cout <<board[0][1]<< " player won!" << std::endl;
; break;}}
    if (board[0][2]==board[1][2]&&board[1][2]==board[2][2]){ if(board[0][2]!=0){ std::cout <<board[0][2]<< " player won!" << std::endl;
; break;}}

    if (board[0][0]==board[0][1]&&board[0][1]==board[0][2]){ if(board[0][0]!=0){ std::cout <<board[0][0]<< " player won!" << std::endl;
; break;}}
    if (board[1][0]==board[1][1]&&board[1][1]==board[1][2]){ if(board[1][0]!=0){ std::cout <<board[1][0]<< " player won!" << std::endl;
; break;}}
    if (board[2][0]==board[2][1]&&board[1][1]==board[2][2]){ if(board[2][0]!=0){ std::cout <<board[2][0]<< " player won!" << std::endl;
; break;}}

    if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]){ if(board[1][1]!=0){ std::cout <<board[1][1]<< " player won!" << std::endl;
; break;}}
    if (board[2][0]==board[1][1]&&board[1][1]==board[0][2]){ if(board[1][1]!=0){ std::cout <<board[1][1]<< " player won!" << std::endl;
; break;}}
  
  }  
  return 0;
}

