//Library
#include <iostream>
using namespace std;
//Finding out whether given number is odd or even
int main() {
int a;
cout <<"To find out whether a number is odd or even."<< endl;
//Asking for input
cout <<"Enter a number: "<< endl;
cin >> a;
int mod = a%2;
//Displaying result
cout <<"The number is ";
if (mod==0) {
cout <<"even."<< endl;
}
else {
cout <<"odd."<< endl;
}
return 0;
}
