#include <bits/stdc++.h> 
using namespace std;

int* insertionSort(int *arr,int n){
  int i,j,temp;
  for (i=1;i<n;i++) {
  temp=arr[i];
  for (j=i-1; j>=0 && arr[j]>temp; j--) arr[j+1]=arr[j];
  arr[j+1]=temp;
  }
  return arr;
}


int binarySearch(bool isSorted,int *arr,int n, int target){
  int low=0;
  int high=n-1;

  while (low <= high) {
    int mid = (high+low)/2;
    int value = arr[mid];

    if (value < target) low = mid+1;
    else if(value > target) high = mid-1;
    else return mid;
  }
  return -1;
}

int main(){
  srand(time(0));
  int min=0,max=2,n=10;
  int arr[n];

  for (int i = 0; i < n; i++) {
    arr[i]=min+rand()%max;
  }
  
  insertionSort(arr,n);
  std::cout << "Current array: ";
  for (int i = 0; i < n; i++) {
    cout << setw(4) << arr[i];
  }
  cout << endl;
 
  
  cout << endl;
  int val;
  std::cout << "Search for: "; cin >> val;
  int index = binarySearch(true,arr,n,val);
  if(index>=0) cout << val << " was found at index: " << index << endl;
  else cout << val <<" not found" <<endl;
  return 0;
}
