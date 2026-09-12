#include<iostream>
using namespace std;
int main(){
    int size , i ,j,arr[]={1,2,3,4,5,6};
    size =sizeof(arr)/sizeof(int);
    i=0;
    j=size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int n =0 ;n<size ;n++){
        cout<<arr[n];
    }
}