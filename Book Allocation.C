
bool isPossible(int mid, vector<int> Array, int m){
  int studentcount=1;
  int Pagesum=0;

  for (int i = 0; i < Array.size(); i++) {
    if (Pagesum+Array[i]<=mid) {
      Pagesum+=Array[i];
    }
    else {
      studentcount++;
      if (studentcount>m || Array[i]>mid) {
        return false;
      }
      Pagesum=Array[i];
    }
  }
  return true;
}

int bookAllocation(vector<int>& Array,int m){
  int ans=-1;
  int s=0;sum=0;
  for (int i = 0; i < Array.size(); i++) {
    sum+= Array[i];
  }
  e=sum;
  mid = s + (e-s)/2;

  while (s<=e) {
  if (isPossible(mid,Array,m)) {
    ans=mid;
    e = mid-1;
  }
  else {
    s = mid+1;
  }
  }
  return ans;
}
//Difficult problem on binary search
