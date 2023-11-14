#include <bits/stdc++.h> 
using namespace std;

void t1(){
  cout <<"T1:\n";
  int n;
  printf("  Input array length: ");cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){printf("\n  Input element in index %d: ", i);cin>>arr[i];}
  printf("  Array you've inputed:[ ");
  for(int i=0;i<n;i++) printf("%d  ",arr[i]);
  printf("\n");
  double avgGeo=0;
  int m=1;
  for(int i=0;i<n-1;i++) m*=arr[i];
  avgGeo=pow(m, 1.0/n);
  printf("  Geometric mean = %.3lf\n", avgGeo);
}
void t3(){
  cout <<"T3:\n";
  int n=10;
  int B[n];
  srand(time(0));
  printf("  Current array:\n  ");
  for(int i=0;i<n;i++){B[i]=15+rand()%66; printf("%d ", B[i]);}
  for(int i=0;i<n-1;i++){
    int max=i;
    for(int j=i+1;j<n;j++)if(B[j]>B[max]) max=j;
    int tmp=B[i];
    B[i]=B[max];
    B[max]=tmp;
  }
  printf("\n  Sorted array:\n  ");
  for(int i=0;i<n;i++) printf("%d  ", B[i]);
  int target, index=0, g=0;
  printf("\n  Which element are you looking for: "); cin >> target;
  while(index < n){
    if(B[index]==target){printf("  Found %d at index %d\n",target,index); g++; break;}
    index++;
  }
  if(g==0)printf("%d was not found\n", target);
      
}
void t4(){
  cout <<"T4:\n";
  const int ROW=5,COL=5;
  int arr[ROW][COL];
  srand(time(0));
  printf("  Current matrix:\n");
  for(int i=0;i<ROW;i++){
    for (int j = 0; j < COL; j++) {
      arr[i][j]=10+rand()%36;
      printf("  %d", arr[i][j]);
    }
    printf("\n");
  }
  int a=arr[0][0],b=arr[0][1],c=arr[0][2],d=arr[0][3],e=arr[0][4];
  for(int i=0;i<ROW;i++){
         if(arr[i][0]<a) a =arr[i][0];
    else if(arr[i][1]<b) b =arr[i][1];
    else if(arr[i][2]<c) c =arr[i][2];
    else if(arr[i][3]<d) d =arr[i][3];
    else if(arr[i][4]<e) e =arr[i][4];
  }
  int high=max(max(a,b),max(c,(max(d,e))));
  printf("\n");
  printf("  Min in column 1: %d\n",a);
  printf("  Min in column 2: %d\n",b);
  printf("  Min in column 3: %d\n",c);
  printf("  Min in column 4: %d\n",d);
  printf("  Min in column 5: %d\n",e);
  printf("\n");
  printf("  Max is %d\n", high);
}
int main(){
  // t1();
  // t3();
  t4();
  return 0;
}
