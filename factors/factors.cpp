#include<iostream>
using namespace std;

int main() {
	int n,a=2;
    cin>>n;
    bool flag=false;
    while (a<n){
        int rem=n%a;
        if (rem==0){
            flag=true;
            cout<<a<<" ";
        }
        a=a+1;
    }
    if (flag==false){
        cout<<-1;
    }
	
}
