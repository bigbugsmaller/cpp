#include<iostream>
using namespace std;


int main(){
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            k=k-1;
            j++;
        }
        cout<<endl;
        i++;
    }
     
       
}

