#include <iostream>
using namespace std;
int FindUnique(int arr[], int size){
  int ans=0;
  for (int i = 0; i < size; i++) {
    ans^=arr[i];
  }
  return ans;
}
int main (int argc, char *argv[]) {
  int arr[]={2,3,1,1,3,6,2}, size=5;
  std::cout << FindUnique(arr,7);
  return 0;
}
// Learnt the XOR method
