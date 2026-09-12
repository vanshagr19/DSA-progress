  #include<iostream>
  using namespace std ;
   
  int main(){
    cout<<"enter the decimal number converted into binary";
    int n , rem ;
    int pow =1;
    int ans=0;
    cin>>n;
    while(n>0){
        rem = n%2;
        n = n/2;
        ans=(rem*pow)+ans;
        pow = pow*10;
    }
    cout<<ans;
  }