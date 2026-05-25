#include <iostream>
//#include <vector>
//#include <algorithm>
using namespace std;
int BinarySearch(int n){
  int s=0;int e=n; int mid=s+(e-s)/2;
  int ans=-1;
  while (s<=e) {
    if (mid*mid==n) {
      return mid;
    }
    else if (mid*mid<n) {
      ans=mid;
      s=mid+1;
    }
    else {
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return ans;
}
double Precision(int ans, int n, int precision){
  float factor=1, root=ans;
  for (int i = 0; i < precision; i++) {
    factor/=10;
    for (int j = 0; j < 9; j++) {
      root+=factor;
      if (root*root==n) {
        return root;
      }
      else if (root*root<n) {
        continue;
      }
      else {
        root-=factor;
        break;
      }
    }
  }
  return root;
}
int main (int argc, char *argv[]) {
  int num, precision; float ans;
  std::cout << "Enter number you want to find sqrt of: ";
  std::cin >> num;
  std::cout << "Upto how many decimal points do you want the answer to be?"<<endl;
  std::cin >> precision;
  std::cout << "The root of "<<num<<" is: " << Precision(BinarySearch(num),num,precision);
  return 0;
}
