#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int t=(n-1)/2;
    int k=(n+1)/2;
    while(i<=k){
        int spaces=1;
        
        while(spaces<=t){
            cout<<" ";
            spaces++;
        }
        int stars=1;
        while(stars<=i){
            cout<<"*";
            stars++; 
        }
        int col=i-1;
        while(col>=1){
            cout<<"*";
            col=col-1;
        }
        cout<<endl;
        i++;
        t=t-1;
    }    
    int i2=k+1;
    while(i2<=n){
        int lowspce=1;
        while(lowspce<=i2-k){
            cout<<" ";
            lowspce++;
        }
        int lowstar=n-i2+1;
        while(lowstar>=1){
            cout<<"*";
            lowstar=lowstar-1;
            
        }
        int endstar=n-i2;
        while(endstar>=1){
            cout<<"*";
            endstar=endstar-1;
        }
        cout<<endl;
        i2++;
    }
    

        
        

    
}