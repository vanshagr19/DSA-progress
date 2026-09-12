#include<iostream>
using namespace std;
int bintodec(int x){
    int ans = 0;
    int n =1;
    while(x>0){
    int rem = x%10;
    
    
    x=x/10;
    ans = ans+(rem*n);
    n*=2; 
    }
    return ans ;
}        
int main(){
    cout<<bintodec(1100);
}