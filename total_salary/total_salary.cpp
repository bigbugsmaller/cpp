#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double totalsalary,basic, hra,da,allow,pf;
    char grade;
    cin>>basic>>grade;
    hra= basic/5;
    da=basic/2;
    if(grade=='A'){
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    pf=0.11*basic;
    totalsalary=basic+ hra +da+allow-pf;
    int ans=round(totalsalary);
    cout<<ans<<endl;
	
}
