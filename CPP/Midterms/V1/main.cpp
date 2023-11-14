#include <bits/stdc++.h>

using namespace std;

void t1(){
  cout<<"T1:\n";
  string name;
  cout << "  ";cin >> name;
  if(name[0]>='a'&&name[0]<='z') name[0]-=32;
  cout<< "  " << name << endl;
}
void t2(){
  cout<<"T2:\n";
  int n=10;
  int arr[n];
  srand(time(0));
  for(int i=0;i<n;i++) {arr[i]=rand()%10;cout << setw(3)<<arr[i];}
  cout<<"\n";
}
void t3(){
  cout<<"T3:\n";
  int n=15;
  int arr[n];
  srand(time(0));
  cout<<"  Current array:\n";
  for(int i=0;i<n;i++) {arr[i]=10+rand()%41;cout << setw(4)<<arr[i];}
  cout<<"\n";
  int target;
  int i,j; 
  
  for(i =1;i<n;i++){
    int tmp=arr[i];
    for(j=i-1;j>=0&&arr[j]<tmp;j--) arr[j+1]=arr[j];
    arr[j+1]=tmp;
  }  

  cout<<"  Sorted array:\n";
  for(int a=0;a<n;a++)cout<<setw(4)<<arr[a];

  std::cout << "\n  which element are you looking for: "; cin >> target;
  
  int low=0,high=n-1,mid=1,val=0,g=0;

  while(low<=high){
    mid=(low+high)/2;
    val=arr[mid];
    if(val==target){cout<<"\n  Found "<<target<<" at index "<<mid<<endl;g++; break;}
    else if (val<target)high=mid-1;
    else low=mid+1;
  }
  if(g==0) printf("\n  %d was not found\n", target);

}

void t4(){
  cout<<"T4:\n";
  const int ROW=4,COL=5;
  int arr[ROW][COL];
  srand(time(0));
  for(int i=0;i<ROW;i++){
    for(int j=0;j<COL;j++){
      arr[i][j]=1+rand()%15;
      std::cout << setw(4)<<arr[i][j];
    }
    cout << endl;
  } 
  int high=0,a=1,b=1,c=1,d=1;
  for(int j=0;j<COL;j++){
    a*=arr[0][j];
    b*=arr[1][j];
    c*=arr[2][j];
    d*=arr[3][j];
  }
  printf("\n  Row 1 = %d\n",a);
  printf("  Row 2 = %d\n",b);
  printf("  Row 3 = %d\n",c);
  printf("  Row 4 = %d\n",d);
  high= max(max(a,b),max(c,d));
  printf("  Max   = %d\n",high);
  }

int main(){
  t1(); 
  t2();
  t3();
  t4();

  return 0;
}
