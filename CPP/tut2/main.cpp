#include <bits/stdc++.h>
using namespace std; 

void t1(){
  //         0 1 2 3 4 5 6 7 8 9  10 11 12
  int M[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
  
  int n = 1;
  int s = 0;

  for(int i=0; i<13;i++){
    if(i %2 ==0){
      n *= M[i]; 
    } // Luwi
    else {
      s += M[i]*M[i];
    }
  }
  std::cout << "n: "<< n << std::endl;
}
void t2(){
    double B[]={1.1,2.2,3.3,5.6,23.23,0.23,51.6,2.5,0.5,-0.1};
  double min = B[0];
  double index = 0;
  for (int i = 0; i < 10; i++) {
    if (min>B[i]){
      min = B[i];
      index = i;
    }
  } 
  std::cout << "Min: "<< min <<"\nIndex: "<< index << std::endl;


}
void t3(){
    int A[10];
  srand(time(0));
  
  int n = 0;
  int m = 1;
  for (int i = 0; i < 10; i++) {
    A[i]=1+rand()%100;
    cout << A[i] << ", ";
    if(i%2!=0) n += A[i];
    if(A[i]%2==0) m *= A[i]; 
  }
  std::cout << "\nN: "<<n <<"\nM: "<<m << std::endl;
  
}


void t6(){
  int M[3][3]=
   {{1,2,3},
    {4,5,6},
    {7,8,9}};
  int max = M[0][0];
  int x,y;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if(max<M[i][j]){
        max=M[i][j];
        x = i;
        y = j;
      }
        std::cout << M[i][j]<<", ";
    }
    std::cout <<  std::endl;
  }
  int tmp[3];
  for (int j = 0; j < 3; j++) {
    tmp[j]=M[x][j];
    M[x][j]=M[j][y];
    M[j][y]=tmp[j];
  }



  std::cout << "VVVVVVVV" <<std::endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << M[i][j]<<", ";
    }
    std::cout <<  std::endl;
  }
}



void InsertionSort(){
  const int n=10;
  int a[n], temp, i, j;
  cout<<"Current Array:"<<endl;
  srand(time(0));
  for(i=0; i<n; i++){
  a[i]=1+rand()%80;
  cout<<setw(4)<<a[i];}

  for (i=0;i<n;i++) {
  temp=a[i];
  //ელემენტის საჭირო პოზიციის ძებნა
    //      0             
    for (j=i-1; j>=0 && a[j]>temp; j--)
      a[j+1]=a[j];
      a[j+1]=temp; 


}
cout<<"\nSorted Array:"<<endl;
for(i=0; i<n; i++)
cout<<setw(4)<<a[i];

}

int main (int argc, char *argv[]) {
  InsertionSort();

  return 0;
}
