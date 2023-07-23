#include<iostream>
using namespace std;

int main() {
	int n,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,evensum=0,oddsum=0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
    cin>>n;
    d1=n%10;
    d2=((n%100)/10);
    d3=((n%1000)/100);
    d4=((n%10000)/1000);
    d5=((n%100000)/10000);
    d6=((n%1000000)/100000);
    d7=((n%10000000)/1000000);
    d8=((n%100000000)/10000000);
    d9=((n%1000000000)/100000000);
    d10=((n%10000000000)/1000000000);
    r1=d1%2;
    r2=d2%2;
    r3=d3%2;
    r4=d4%2;
    r5=d5%2;
    r6=d6%2;
    r7=d7%2;
    r8=d8%2;
    r9=d9%2;
    r10=d10%2;
    if (r1==0){
        evensum=evensum+d1;
    }
    else {
        oddsum=oddsum+d1;
    }
    if (r2==0){
        evensum=evensum+d2;
    }
    else {
        oddsum=oddsum+d2;
    }
    if (r3==0){
        evensum=evensum+d3;
    }
    else {
        oddsum=oddsum+d3;
    }
    if (r4==0){
        evensum=evensum+d4;
    }
    else {
        oddsum=oddsum+d4;
    }
    if (r5==0){
        evensum=evensum+d5;
    }
    else {
        oddsum=oddsum+d5;
    }
    if (r6==0){
        evensum=evensum+d6;
    }
    else {
        oddsum=oddsum+d6;
    }
    if (r7==0){
        evensum=evensum+d7;
    }
    else {
        oddsum=oddsum+d7;
    }
    if (r8==0){
        evensum=evensum+d8;
    }
    else {
        oddsum=oddsum+d8;
    }
    if (r9==0){
        evensum=evensum+d9;
    }
    else {
        oddsum=oddsum+d9;
    }
    if (r10==0){
        evensum=evensum+d10;
    }
    else {
        oddsum=oddsum+d10;
    }
    cout<<evensum<<" "<<oddsum<<endl;



	
}
