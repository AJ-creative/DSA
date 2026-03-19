#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> InputVector(){
  int n;
  vector<int> Array;
  std::cout << "Enter size of Array: ";
  std::cin >> n;
  std::cout << "Enter elements of the array: ";
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    Array.push_back(x);
  }
  return Array;
}

vector<int> MergeSortedArray(vector<int> Array1, vector<int> Array2, int m, int n){
  int i=m-1;int j=n-1;
  int k=m+n-1;
  while (i>=0 && j>=0) {
    if (Array1[i]>Array2[j]) {
      Array1[k]=Array1[i];
      i--;
    }
    else {
      Array1[k]=Array2[j];
      j--;
    }
    k--;
  }
  while (j>=0) {
    Array1[k]=Array2[j];
    j--;
    k--;
  }
  return Array1;
}

void print(vector<int> Array){
  for (int i : Array) {
    std::cout << i <<" ";
  }
}

int main (int argc, char *argv[]) {
  vector<int> Array1, Array2;
  Array1 = InputVector();
  Array2 = InputVector();
  int m = Array1.size();
  int n = Array2.size();
  for (int i = 0; i < n ; i++) {
    Array1.push_back(0);
  }
  Array1 = MergeSortedArray(Array1,Array2,m,n);
  print(Array1);
  return 0;
}
//Good problem on two pointer approach. Remember to put a while loop at the end to fill remaining elements.
