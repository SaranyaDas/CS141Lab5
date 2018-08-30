#include <iostream>
using namespace std;
int main() {
int x;
cout <<"Enter month number: "<< endl;
cin >> x;
cout <<"The month has ";
if (x==2) {
cout <<"28 or 29 days, depending on the year."<< endl;
}
else { if (x==4 or x==6 or x==9 or x==11) {
cout <<"30 days."<< endl;
}
else {
cout <<"31 days."<< endl;
}
}
return 0;
}
