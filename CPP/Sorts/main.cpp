#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr,int n){

  for (int i = 1; i < n; i++) {
  
  for (int j = 0; j < n-1; j++) {
    int tmp = arr[i];    
    
    if (arr[i]<arr[j]) {
      int tmp = arr[i];
      arr[i]=arr[j];
      arr[j]=tmp;
      }
    }
  }
 
  for (int i = 0; i < n; i++) {
    std::cout << setw(4)<< arr[i];
  }
  std::cout <<  std::endl;
}
void insertionSort(int *arr,int n){
  int i,j,temp;
  for (i=1;i<n;i++) {
  temp=arr[i];
  for (j=i-1; j>=0 arr[j]>temp; j--) arr[j+1]=arr[j];
  arr[j+1]=temp;
  }
    for (int i = 0; i < n; i++) {
      std::cout << setw(4)<<arr[i];
    }
  std::cout <<std::endl;
}

void selectionSort(int *arr, int n){
  for (int i = 0; i < n-1; i++) {
    int min=i;
    for (int j = i+1;arr[min] > arr[j] && j < n; j++) min=j;
    int tmp=arr[i];
    arr[i]=arr[min];
    arr[min]=tmp;
  }

  for (int i = 0; i < n; i++) {
    std::cout << setw(4)<<arr[i];
  }
  std::cout <<std::endl;
}
int main (int argc, char *argv[]) {
  srand(time(0));
  int min=0,max=100,n=10;
  int arr[n];
  std::cout << "Current array: ";
  for (int i = 0; i < n; i++) {
    arr[i]=min+rand()%max;
    std::cout << setw(4)<< arr[i];
  }
  std::cout<< std::endl;
  // std::cout << "Bubble sort:   " ; bubbleSort(arr, n);
  std::cout << "Insertion sort:"; insertionSort(arr, n);
  // std::cout << "Selection sort:"; selectionSort(arr, n);
  return 0;
}
