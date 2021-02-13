#include <iostream>
#include <cmath>
using namespace std;
void printDivisors(int num);

int main(){
    int n;
    cout<<"Please enter a positive integer >= 2: ";
    cin>>n;

    printDivisors(n);

    return 0;
}
void printDivisors(int num){
    int count;
    for(count = 1; count <= sqrt(num); count++){
        if(num % count == 0){
            cout<<count<<" ";

        }
    }
    for(count = sqrt(num); count <= num; count++){
        if(num % count == 0){
            if(num / count != count){
                cout<<count<<" ";
            }
        }



    }

}