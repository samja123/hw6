#include <iostream>

using namespace std;
int fib(int n);
int main(){
    int num;
    int fibOut;
    cout<<"Please enter a positive integer: ";
    cin>>num;

    fibOut = fib(num);

    cout<<fibOut<<endl;


    return 0;
}

int fib(int n){
    int sumOfPrev;
    int num1, num2;
    int count;
    sumOfPrev = 0;
    num1 = 0;
    num2 = 1;
    for(count = 1; count <= n - 1; count++){
        sumOfPrev = num1 + num2;
        num1 = num2;
        num2 = sumOfPrev;
    }
    return num2;
}
