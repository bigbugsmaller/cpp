#include <iostream>
using namespace std;

int main(){
    int N,x,t,numb,count;
    cin>>x;
    count=1,N=1;
    while(count<=x){
        t=(3*N)+2;
        if (t%4 !=0){
            cout<<t<<" ";
            count++;
        }
        N++;
        

    }

}