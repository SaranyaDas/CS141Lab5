//Library
#include <iostream>
using namespace std;
//Finding out whether given triangle is equilateral, isosceles or scalene
int main() {
int a, b, c;
cout <<"To find out whether a triangle is equilateral, isosceles or scalene."<< endl;
//Asking for input
cout <<"Enter lengths of three sides of triangle: "<< endl;
cin >> a >> b >> c;
//Displaying result
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
