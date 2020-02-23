#include <iostream>
// #include <string.h>
using namespace std;
int main(){
int userInput, inVerse=0, remainDer, triPple;
cout <<"Enter any Number\n";
cin>>userInput;
while(userInput != 0){
    remainDer = userInput%10;
    inVerse = (inVerse * 10) + remainDer;
    userInput/=10;
}
triPple =inVerse * 3;
cout <<"Inverse is "<< inVerse <<"\n";
cout <<"Tripple is "<< triPple <<"\n";

return 0;

}
