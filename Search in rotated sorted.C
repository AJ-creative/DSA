#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> InputArray(){
  int n;
  std::cout << "Enter size of array: ";
  std::cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    std::cout << "Enter element number " <<i+1<<": ";
    std::cin >> arr[i];
  }
  return arr;
}
/*void InputArray(int arr[], int *n){
  std::cout << "Enter size of Array: ";
  std::cin >> *n;
  for (int i = 0; i < *n; i++) {
  std::cout << "Enter element number "<<i+1<<": ";
   std::cin >> arr[i];
  }
}*/
/*void printvector(vector<int> &ans){
  for (int i : ans ) {
    std::cout << i << " ";
  }
}*/
int Pivot(vector<int> Arr){
  int s=0; int e=Arr.size()-1;
  int mid=s+(e-s)/2; int ans=-1;
  while (s<=e) {
    if (Arr[mid]>Arr[mid+1]) {
      return mid;
    }
    else if (Arr[mid]>=Arr[0]) {
      s=mid+1;
    }
    else {
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}
int Search(vector<int> Arr, int key, int pivot){
  int s=0; int e=Arr.size()-1;
  if (key<Arr[0]) {
    s=pivot+1;
  }
  else e=pivot;
  int mid=s+(e-s)/2; int ans=-1;
  while (s<e) {
    if (Arr[mid]==key) {
      return mid;
    }
    else if (Arr[mid]<key) {
      s=mid+1;
    }
    else {
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}
int main (int argc, char *argv[]) {
  vector<int> ques = InputArray();
  std::cout << "Enter key: ";
  int key;
  std::cin >> key;
  int ans = Search(ques,key,Pivot(ques));
  std::cout <<"Index is: "<< ans+1;
  return 0;
}
//Simple problem binary search
