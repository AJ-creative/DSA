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
int FirstOccurance(vector<int> Arr, int key){
  int s=0; int e=Arr.size()-1;
  int mid=s+(e-s)/2; int ans=-1;
  while (s<=e) {
    if (Arr[mid]==key) {
      ans=mid;
      e=mid-1;
    }
    if (Arr[mid]<key) {
      s=mid+1;
    }
    if (Arr[mid]>key) {
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}
int LastOccurance(vector<int> Arr, int key){
  int s=0; int e=Arr.size()-1;
  int mid=s+(e-s)/2; int ans=-1;
  while (s<=e) {
    if (Arr[mid]==key) {
      ans=mid;
      s=mid+1;
    }
    if (Arr[mid]<key) {
      s=mid+1;
    }
    if (Arr[mid]>key) {
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}

int main (int argc, char *argv[]) {
  vector<int> ques = InputArray();
  int key;
  std::cout << "Enter key: ";
  std::cin >> key;
  int firstoccurance=FirstOccurance(ques,key);
  int lastoccurance=LastOccurance(ques,key);
  std::cout << "First Occurance is: "<<firstoccurance+1 << " Last Occurance is: " << lastoccurance+1;
  return 0;
}
//Simple yet I still made mistakes at the start.
