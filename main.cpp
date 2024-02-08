#include <iostream>
#include<vector>
using namespace std ;
int findDuplicate(vector<int>&nums){
  for(int i=0;i<nums.size();i++){
    int index=abs(nums[i]);
    if(nums[index]<0)
      return index ;
    nums[index]=-nums[index];
  }
  return -1 ;
}

int main() {
  vector<int>nums{1,3,3,2,3,5} ;
  cout<<"Duplicate number in an array:"<<findDuplicate(nums);
  return 0 ;
}