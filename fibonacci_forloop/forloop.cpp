#include <iostream>
using namespace std;
int main(){
    int n,nextno,prevno,i,k;
    cin>>n;
    if (n<=2){
        cout<<1<<endl;
    }
    else{
    for(nextno=1,prevno=1,i=3;i<=n;i++){
        k=nextno + prevno;
        prevno=nextno;
        nextno=k;
        
        
        }
        cout<<k<<endl;


    }
}

