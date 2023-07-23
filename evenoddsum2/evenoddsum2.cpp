#include<iostream>
using namespace std;

int main() {
    int n,d,evensum=0,oddsum=0 ;
    cin>>n;
    while(n>0){
        d=n%10;
        if (d%2==0){
            evensum=evensum+d;
        }
        else{
            oddsum=oddsum+d;
        }
        n=n/10;
    }
    cout<<evensum<<" "<<oddsum<<endl;
}