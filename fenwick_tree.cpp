void update(int i, int val){
      for( ; i<=N; i+= (i & -i)){
      bit[i] += x;
      }
}
int sum(i){
      int ans=0;
      for(; i>0 ; i -= (i&-i)){
            ans+= bit[i];
      }
      return ans;
}
// you need to send val accordingly for updation.
// send index+1 (1 based indexing in fenwick tree.)