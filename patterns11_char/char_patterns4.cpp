#include<iostream>
using namespace std;


int main() {
    int n,i,j;
    cin>>n;
    i=1;
    char t='A';
    while(i<=n){
        j=1;
        while (j<=i){
            char startchar=t+n-i;
            char ans=startchar+j-1;
            cout<<ans;
            j++;
        }
        cout<<endl;
        
        i++;

    } 
   
    
}
