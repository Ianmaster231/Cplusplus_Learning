#include <iostream>
using namespace std;

    int age {18}; //This is a gobal variable
int main(){
    //if the local variable and the global variable it
    //will read the local variable first and ignore the global variable
    int age {16};
    cout << age <<endl;
    return 0;
}