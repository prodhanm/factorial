#include <iostream>
using namespace std;

int factorial(int num){
    if (num < 0){
        cout << "Error: Factorial of negative number is not defined.\n";
        return -1;
    }
    else if (num == 0 || num == 1){
        return 1;
    }
    else{
        return num * factorial(num - 1);        
    }
}

int main(){
    int num;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    int result = num * factorial(num-1);
    printf("The factorial of %d! is %d", num, result);
    return 0;
}

