bool permutation(string a, string b){

  int n = a.length();

  if(b.length() < n)
    return false;

  int count1[26]={0};
  int count2[26]={0};

  for(int i=0;i<n;i++){
    count1[a[i]-'a']++;
    count2[b[i]-'a']++;
  }

  int i=0;
  int j=n-1;
  while(j < b.length()){
    bool same=true;

    for(int k=0;k<26;k++){
      if(count1[k]!=count2[k]){
        same=false;
        break;
      }
    }

    if(same)
      return true;

    if(j==b.length()-1)
      break;

    count2[b[i]-'a']--;
    i++;

    j++;
    count2[b[j]-'a']++;
  }
  return false;
}
