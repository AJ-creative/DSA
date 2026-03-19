void moveZeroes(vector<int>& Array) {
  int nonzero = 0;
  for (int i = 0; i < Array.size(); i++) {
    if (Array[i]!=0) {
      swap(Array[i],Array[nonzero]);
      nonzero++;
    }
  }
}
//Completely new method of using 2 pointer appraoch
