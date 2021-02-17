#include <iostream>

using namespace std;
double eApprox(int n);
double factorial(int n);
int main(){

        cout.precision(30);
        for (int n = 1; n <= 15; n++) {
            cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
        }
        return 0;
    }

double eApprox(int n){
   int count;
   double val;
   double sum;
   val = 1;
   for(count = n; count > 0; count--){
       sum = 1 + val * sum / count;
   }
   return sum;
}
