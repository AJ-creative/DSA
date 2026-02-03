#include <iostream>
using namespace std;
int FindDuplicate(int *arr,int length){
  int sum=0;
  for (int i = 0; i < length; i++) {
    sum+=arr[i];
  }
  sum-=(length*(length-1))/2;
  return sum;
}
int main (int argc, char *argv[]) {
  int arr[]={4,2,1,3,1},length=5;
  std::cout << FindDuplicate(arr,5);
  return 0;
}
