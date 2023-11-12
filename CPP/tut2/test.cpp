//Insertion Sort
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
const int n=10;
int a[n], temp, i, j;
cout<<"Current Array:"<<endl;
srand(time(0));
for(i=0; i<n; i++){
a[i]=1+rand()%80;
cout<<setw(4)<<a[i];}


for (i=0;i<n;i++) {
  temp=a[i]; // 21 
  //ელემენტის საჭირო პოზიციის ძებნა
    //   0             7   21           
  for (j=i-1; j>=0 && a[j]>temp; j--) a[j+1]=a[j];  

  a[j+1]=temp;// 21 


}
cout<<"\nSorted Array:"<<endl;
for(i=0; i<n; i++)
cout<<setw(4)<<a[i];
  printf("\n");
return 0;
}
