#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*vector<int> InputArray(){
  int n;
  std::cout << "Enter size of array: ";
  std::cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    std::cout << "Enter element number " <<i+1<<": ";
    std::cin >> arr[i];
  }
  return arr;
}*/
/*void printvector(vector<int> &ans){
  for (int i : ans ) {
    std::cout << i << " ";
  }
}*/
vector<vector<int>> PairSum(int *Arr, int length , int S){
  int i,j; vector<vector<int>> ans;
  for (int i = 0 ; i < length-1 ; i++) {
    for (int j = i+1 ; j < length ; j++) {
      if (Arr[i]+Arr[j]==S) {
        vector<int> temp;
        temp.push_back(min(Arr[i],Arr[j]));
        temp.push_back(max(Arr[i],Arr[j]));
        ans.push_back(temp);
      }
    }
  }
  sort(ans.begin(),ans.end());
  return ans;
}
int main (int argc, char *argv[]) {
  int A[]={2,-3,3,3,-2};
  vector<vector<int>> ans = PairSum(A,5,0);
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
//V imp; Learnt 2-D vector and its syntax; syntax for sort algorithm.
