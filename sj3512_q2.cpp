#include <iostream>

using namespace std;
void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);
int main(){
    int n;
    int m;
    char symbol;

    cout<<"Please give the number of lines, and symbol you want to fill in that order"<<endl;
    cin>>n>>symbol;

    printPineTree(n, symbol);

    return 0;
}

void printShiftedTriangle(int n, int m, char symbol){
    int spaceCount, lineCount, symbolCount;
    for(lineCount = 1; lineCount <= n; lineCount++){
        for(spaceCount  = 1; spaceCount <= (n + m) - lineCount; spaceCount++){
            cout<<" ";
        }
        for(symbolCount = 1; symbolCount <= (lineCount*2) - 1; symbolCount++){
            cout<<symbol;
        }
        cout<<endl;
    }
    return;
}

void printPineTree(int n, char symbol){
    int spaceCount, lineCount, symbolCount;
    for(lineCount = 1; lineCount <= n; lineCount++){
        printShiftedTriangle(lineCount + 1, n -lineCount,symbol);
    }

}