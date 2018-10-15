#include <iostream>

using namespace std;

int power(int n,int m)
 { int pw=1;
     for(int i=0;i<m;i++)
     pw=pw*n;
  return pw;
 }

int main(){

    int n,m;
cout<<"n=";
cin>>n;
cout<<"m=";
cin>>m;

cout<<"n^m="<<power(n,m);


return 0;}
