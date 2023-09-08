#include <iostream>
using namespace std;

int main(){
    int n,start=1,numb=1;
    cin>>n;
    if (n==0){
        cout<<"0"<<endl;
    }
    else {
        while(numb<=n){
           numb=start*start;
           if (((start+1) * (start+1))>n){
            break;
           }
           start++;
        }
        cout<<start<<endl;
    }
}    