#include<iostream>
using namespace std;

int main(){
  int n,nums[1000];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  int target;
  cin>>target;
  
 
  for(int left=0,right=n-1;left<right;){
     int mid=(left+right)/2;
    if(nums[mid]==target){
      cout<<mid;
      break;
    }
    else if(target>nums[mid]){
      left=mid+1;
    }
    else if(target<nums[mid]){
      right=mid-1;
    }
    else if(left>right){
        cout<<"-1"<<endl;
    }
  }
  
}