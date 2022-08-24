#include <iostream>
using namespace std;
//lesson 45
//This program will calculate the area of a room in square feet
int main(){
    //proper way to initialized a variable
    /*int age {21};
    cout << age << endl;*/
    
    //to check the square room of an area
    cout << "Enter the with of the room: ";
    int room_width {0};
    cin >> room_width;
    
    cout << "Enter the length of the room: ";
    int room_length {0};
    cin >> room_length;
    
    cout << "The area of the room is: " << room_width * room_length << " Square feet" <<endl;
    return 0;
}