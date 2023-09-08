#include <iostream>
using namespace std;

void arrange(int arr[] ,int n){
    for( int start=1,i=0,flag=1;flag<=n;start=start+2,flag++,i++){
        arr[i]=start;
       flag++;
        arr[n-i-1]=start+1;

    }
    
}
void printArray(int arr[], int n) {
    arrange();
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
}
int main(){
    printArray();
    
}
