#include <bits/stdc++.h> 
using namespace std;

void t1()
{
  int y1,y2,y;
  cin>>y1>>y2;
  int yd1=365,yd2=365;

  if(y1%100==0&&y1%400==0) yd1 = 366;
  if(y1%100!=0&&y1%4==0) yd1=366;

  int days, d=y2-y1;
  days=(d-d/4)*365+(d/4)*366;
  if(yd1==366)days+=1;
  printf("%d\n", days);
}
void t2(){
  int n=8;
  double y=1;
  int fac=1;
  for(int i=1;i<=n;i++){
    fac*=i;
    y+=1.0/fac;
  }
  printf("%lf\n",y);
}
void t3(){
  int n=13;
  int arr[n];
  printf("Current array:\n");
  srand(time(0));
  for(int i=0;i<n;i++){
    arr[i]=1+rand()%15;
    printf("  %d",arr[i]);
  }

  int j;
  for(int i=1;i<n;i++){
    int tmp=arr[i];
    for(j=i-1;j>=0 && arr[j]>tmp;j--) arr[j+1]=arr[j];
    arr[j+1]=tmp;
  }
  
  printf("\nSorted array:\n");
  for (int i = 0; i < n; i++) printf("  %d", arr[i]);
  int s=0,m=1;
  printf("\n");   
  if(arr[n/2]%2==0){
    for(int i=1;i<n;i+=2)s+=arr[i];
    printf("Sum of odd indexes = %d\n", s);
  }
  else {
    for(int i=0;i<n;i+=2)m*=arr[i];
    printf("Product of even indexes = %d\n",m);
  }

}

void t4(){
  const int ROW=3, COL=5;
  int arr[ROW][COL];
  srand(time(0));
  printf("Current matrix: \n");
  for(int i=0;i<ROW;i++){
    for(int j=0;j<COL;j++){
      arr[i][j]=10+rand()%36;
      printf("  %d", arr[i][j]);
    }
    printf("\n");
  }
  int min = arr[0][0];
  int colMin=0;
  for(int i=0;i<ROW;i++){
    for(int j=0;j<COL;j++){
      if(arr[i][j]<min){
        min=arr[i][j]; 
        colMin=j;
      }
    }
  }
  printf("Smalles number is %d on column %d\n",min,colMin);
  int tmp[3];

  for (int i = 0; i < ROW; i++) {
    tmp[i]=arr[i][colMin];
    arr[i][colMin]=arr[i][COL-1];
    arr[i][COL-1]=tmp[i];

  }
  printf("Final matrix: \n");
  for (int i = 0; i < ROW; i++) {
    for(int j=0;j<COL;j++){
      printf("  %d", arr[i][j]);
    }
    printf("\n");
  }  
}
int main(){
  // t1(); 
  // t2();
  // t3();
  t4();
  return 0;
}
