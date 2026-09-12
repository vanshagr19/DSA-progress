#include<iostream>
#include<vector>
using namespace std ;
vector<int>pairsum(vector<int>arr, int target){
    int n = arr.size();
    vector<int>ans;
    int i = 0;
    int j = n-1 ; 
    while(i<j){
        int ps =arr[i]+arr[j];
        if (ps>target){
            j--;
        }
       else if(ps<target){
        i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
        }
        }
        return ans ;
}    
int main(){
    vector<int>nums = { 1,2,4,5,8,3,7};
    int target = 13 ; 
    vector<int>ans = pairsum(nums,target);
    cout << ans[0]<<" "<< ans[1];
    

}