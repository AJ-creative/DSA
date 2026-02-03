#include <iostream>
#include <vector>
using namespace std;
vector<int> Intersection(int *A,int N,int *B,int M){
  vector<int> ans;
  int i=0,j=0;
  while (i<N && j<M) {
    if (A[i]==B[j]) {
      ans.push_back(A[i]);
      i++;
      j++;
    }
    if (A[i]>B[j]) {
      j++;
    }
    if (A[i]<B[j]) {
      i++;
    }
  }
  return ans;
}
int main (int argc, char *argv[]) {
  int A[]={1,3,5,7,11}, B[]={1,2,4,6,8,11};
  vector<int> ans = Intersection(A,5,B,6);
  for (int i : ans ) {
    std::cout << i << " ";
  }
  return 0;
}
//Learnt Double Pointer approach; syntax for vector and printing vector
