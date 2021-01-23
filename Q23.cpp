#include<iostream>
#include<math.h>
using namespace std;

long long convert(int n);
int main() {
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    cout<<convert(n);
    return 0;
}

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n % 2;
       // printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, rem, n / 2);
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
