#include<iostream>
using namespace std;


int main(){
    int n,i,j;
    cin>>n;
    i=1;
    char t='A';
    while(i<=n){
        j=1;
        
        while(j<=n){
            char x=t+j-1;
            cout<<x;
            j++;
            
        }
        t=t+1;
        cout<<endl;
        i++;
    }
     
       
}

