//Library
#include <iostream>
using namespace std;
//Counting number of digits in given number
int main() {
int n, i, count = 0;
cout <<"To count the number of digits in a number."<< endl;
//Asking for input
cout << "Enter a number: ";
cin >> n;
//Displaying result
if (n == 0) {
cout << n << " is not prime";
}
else {
for(i=2; i < n; i++)
if (n % i == 0) {
count++;
}
if (count > 1) {
cout << n << " is not prime.";
}
else {
cout << n << " is prime.";
}
}
return 0;
}
