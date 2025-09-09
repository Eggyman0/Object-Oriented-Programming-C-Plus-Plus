#include <iostream>
#include <cstdlib>
using namespace std;

bool isGreaterThan(double x, int y);

int main(){
    double n1 = 0;
    int n2 = 0;
    cout << "Enter any number value: ";
    cin >> n1;
    cout << "Enter any integer value: ";
    cin >> n2;
    if (isGreaterThan(n1, n2)) {
        cout << n1 << " is greater than " << n2;
    } else {
        cout << n1 << " is less than or equal to " << n2;
    }
    return 0;
}

bool isGreaterThan(double x, int y){
    if (x > y) {
        return true;
    } else {
        return false;
    }
}
