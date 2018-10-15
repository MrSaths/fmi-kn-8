#include <iostream>

using namespace std;

int main(){
   int number,number_0,number_1=0;

   cout<<"Enter number:";
   cin>>number_0;
   number=number_0;



   while(number!=0)
   {number_1=number_1*10+number%10;
     number=number/10;
   }

    if(number_0==number_1) cout<<"True";
    else cout<<"False";






    return 0;}
