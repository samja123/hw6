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
   double fact;
   fact = 1;
   val = 1;
   for(count = 1; count <= n; count++){
       fact *= count;
       val += (1 / fact);
   }
   return val;

}
