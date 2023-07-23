#include<iostream>
using namespace std;


int main(){
    int n,i,j;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            char st='A'+i-1;
            char x=st+j-1;
            cout<<x;
            j++;
        }
        cout<<endl;
        i++;
    }
    
       
}


