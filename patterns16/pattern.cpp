#include <iostream>
using namespace std;

int main() {
    int n,i,j,k,x;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        
        x=0;
        while(x<=i-1){
            cout<<i+x;
            x++;
        }
        k=i-1;
        
        while(k>=1){
            cout<<i+k-1;
            
            k=k-1;
        }
        cout<<endl;
        i++;

       

     
    }
}    

