#include<iostream>
using namespace std;


int main(){
    int n,i,j,k;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n-i){
            cout<<" ";
            j=j+1;
        }
        k=1;
        while(k<=i){
            cout<<k;
            k=k+1;
            
        }
        cout<<endl;
        
        i=i+1;
        

    }
       
  
}


