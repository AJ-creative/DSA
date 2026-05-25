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
vector<int> Sort012(vector<int> Arr, int length){
  int i=0,j=length-1,firstone=-1;
  while (i<j) {
    if (Arr[i]==0) {
      if (firstone!=-1) {
        swap(Arr[i],Arr[firstone]);
      }
      i++;
    }
    if (Arr[j]==2) {
      j--;
    }
    if (Arr[i]==1) {
      if (firstone==-1) {
        firstone = i;
      }
      if (Arr[j]==0) {
        swap(Arr[i],Arr[j]);
      }
      if (Arr[j]==1) {
        i++;
      }
    }
    if (Arr[i]==2) {
      if (Arr[j]==0) {
        swap(Arr[i],Arr[j]);
      }
      if (Arr[j]==1) {
        swap(Arr[i],Arr[j]);
      }
    }
  }
  return Arr;
}
int main (int argc, char *argv[]) {
  vector<int> ans = InputArray();
  ans = Sort012(ans,ans.size());
  std::cout << "Sorted Array is: "<<endl;
  for (int i:ans) {
    std::cout << i <<" ";
  }
  return 0;
}
//Good problem on double point approach.
//THIS ANS IS WRONG
