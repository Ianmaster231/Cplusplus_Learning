#include <iostream>
#include <climits> 
using namespace std;
int main(){
    cout << "sizeofinformation" << endl;
    cout << "=================" << endl;
    
    cout << "char: " << sizeof(char) << "bytes." <<endl;
    cout << "int: " << sizeof(int) << "bytes." <<endl;
    cout << "unsigned int: " << sizeof(unsigned int) << "bytes." <<endl;
    cout << "short: " << sizeof(short) << "bytes." <<endl;
    cout << "long: " << sizeof(long) << "bytes." <<endl;
    cout << "long long:" << sizeof(long long)<< "byets." <<endl;
    
    cout << "=================" << endl;
    
    cout << "float: " << sizeof(float) << "bytes. " <<endl;
    cout << "double: " << sizeof(double) << "bytes. " <<endl;
    cout << "long double: " << sizeof(long double) << "bytes. " <<endl;
    
    cout << "=================" << endl;
    
    cout << "Minimum value: " << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " <<INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;
    
    cout << "=================" << endl;
    
    cout << "Minimum value: " << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " <<INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;
    
    cout << "=================" << endl;
    
    cout << "size o using variable name " << endl;
    int age {21};
    cout << "age is" << sizeof(age) << "bytes." <<endl;
    //or
    cout << "age is" << sizeof age << "bytes." <<endl;
    cout << "=================" << endl;
    double wage {22.24};
    cout << "wage is " <<sizeof(wage) << "bytes." <<endl;
    //or
    cout << "wage is " <<sizeof wage << "bytes." <<endl;
    
}