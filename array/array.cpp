#include<iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    int array[10000];
    //input in array from user
    for(int i=0;i<n;i++){
         cin>>array[i];
    }
    int min=INT_MAX;
    //checking elements in array
    for(int t=0;t<n;t++){
        if(array[t]<min){
            min=array[t];
        }
    }
	cout<<min<<endl;
}
