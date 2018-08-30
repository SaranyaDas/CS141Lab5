#include <iostream>
using namespace std;
int main() {
int a;
cout <<"Enter a number: "<< endl;
cin >> a;
int mod = a%2;
cout <<"The number is ";
if (mod==0) {
cout <<"even."<< endl;
}
else {
cout <<"odd."<< endl;
}
return 0;
}
