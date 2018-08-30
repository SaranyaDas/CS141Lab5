#include <iostream>
using namespace std;
int main() {
int a, b, c;
cout <<"Enter lengths of three sides of triangle: "<< endl;
cin >> a >> b >> c;
cout <<"The triangle is ";
if (a==b and b==c and c==a) {
cout <<"equilateral."<< endl;
}
else {
if (a==b or b==c or c==a) {
cout <<"isoceles."<< endl;
}
else {
cout <<"scalene."<< endl;
}
}
return 0;
}
