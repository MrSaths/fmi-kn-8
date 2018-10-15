#include <iostream>

using namespace std;

int prime_check(int number)
{ int prime=0;

    for(int i=2;i<number;i++)
        if(number%i==0) prime=1;

    if(prime==0) prime=number;
      return prime;
}

void print_prime(int n)
{ for(int i=1;i<n;i++)
    if(prime_check(i)!=1) cout<<i<<" ";
}


int main(){

int n;
cin>>n;
print_prime(n);




return 0;}
