#include <iostream>
using namespace std;
int main() {
int y;
cout <<"Enter year: "<< endl;
cin >> y;
int a = y%4;
int b = y%100;
int c = y%400;
cout <<y<< " is ";
if ((a==0 and b==0 and c==0) or (a==0 and b!=0)) {
cout <<"a leap year."<< endl;
}
else {
cout <<"not a leap year."<< endl;
}
return 0;
}
