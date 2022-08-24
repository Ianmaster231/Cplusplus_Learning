#include <iostream>
using namespace std;
int main(){
    //self correction My only main issue was te math function 
    //i was completly wrong below is the correct method
    cout << "Hello, welcome to Ian Room Cleaning Service" <<endl<<endl;
    
    int number_of_small_rooms {0};
    cout << "How many rooms small would you like to be cleaned? "<<endl;
    cin >> number_of_small_rooms;
    
    int number_of_large_rooms {0};
    cout << "How many rooms large would you like to be cleaned? "<<endl;
    cin >> number_of_large_rooms;
    
    const double price_per_small_room{25};
    const double price_per_large_room{35};
    
    const double sales_tax{0.06};
    const int estimate_expiry{30};//days 
    
    //refractiring code means haning your code better without changing behaviour te code
    cout << "⧵nEstimate for carpet cleaning service: " <<endl;
    cout << "Number of small rooms: " << number_of_small_rooms <<endl;
    cout << "Number of large rooms: " << number_of_large_rooms <<endl;
    
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    
    cout << "Cost: $" << (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms) << endl;
    cout << "Tax: $" << ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * sales_tax <<endl;
    cout << "================================" <<endl;
    cout << "Total estimate: $" << ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) + (((price_per_small_room * number_of_small_rooms) 
    + (price_per_large_room * number_of_large_rooms)) * sales_tax) <<endl;
    cout << "This estimate is valid for" << estimate_expiry << "days" <<endl;

    cout<<endl;
    return 0;
}