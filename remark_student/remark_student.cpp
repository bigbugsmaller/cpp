#include<iostream>
using namespace std;

int main() {
	int a;
    cin>>a;
    if (a>75){
        cout<<"Distinction"<<endl;

    }
    else if(50<=a && a<=75){
        cout<<"Average"<<endl;
    }
    else{
        cout<<"Below Average";
    }
}