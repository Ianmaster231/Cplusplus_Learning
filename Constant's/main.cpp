#include <iostream>
using namespace std;
int main(){
    cout << "Hello, welcome to Ian Room Cleaning Service" <<endl<<endl;
    cout << "How many rooms would you like to be cleaned? ";
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room{33};
    const double sales_tax{0.06};
    const int estimate_expiry{30};//days 
    //refractiring code means haning your code better without changing behaviour te code
    cout << "⧵nEstimate for carpet cleaning service: " <<endl;
    cout << "Number of rooms: " << number_of_rooms <<endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << price_per_room * number_of_rooms << endl;
    cout << "Tax: $" << price_per_room * number_of_rooms * sales_tax <<endl;
    cout << "================================" <<endl;
    cout << "Total estimate: $" <<(price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) <<endl;
    cout << "This estimate is valid for" << 30 << "days" <<endl;

    cout<<endl;
    return 0;
    
}