#include <iostream>

using namespace std;

int factorial(int number)
{
   int result=1;
   for(int i=1;i<=number;i++)
     result *= i;

   return result;
}



int main(){

   int n;
   cout<<"n=";
   cin>>n;
   cout<<factorial(n);

return 0;}
