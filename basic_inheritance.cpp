/* Program to demonstrate inheritance */

#include <iostream>
using namespace std;

// Base class
class building{
    int rooms;
    int floors;
    int area;
public:
    void set_rooms(int n);
    int get_rooms();
    void set_floors(int n);
    int get_floors();
    void set_area(int n);
    int get_area();
};

// Derived class 1
class house : public building{
    int bedrooms;
    int baths;
public:
    void set_bedrooms(int n);
    int get_bedrooms();
    void set_baths(int n);
    int get_baths();
};

// Derived class 2
class school : public building{
    int classrooms;
    int offices;
public:
    void set_classrooms(int n);
    int get_classrooms();
    void set_offices(int n);
    int get_offices();
};

void building::set_rooms(int n){
    rooms = n;
}

void building::set_floors(int n){
    floors = n;
}

void building::set_area(int n){
    area = n;
}

int building::get_rooms(){
    return rooms;
}

int building::get_floors(){
    return floors;
}

int building::get_area(){
    return area;
}

void house::set_bedrooms(int n){
    bedrooms = n;
}

void house::set_baths(int n){
    baths = n;
}

int house::get_bedrooms(){
    return bedrooms;
}

int house::get_baths(){
    return baths;
}

void school::set_classrooms(int n){
    classrooms = n;
}

void school::set_offices(int n){
    offices = n;
}

int school::get_classrooms(){
    return classrooms;
}

int school::get_offices(){
    return offices;
}

int main()
{
    house h;
    school s;
    
    h.set_rooms(12);
    h.set_floors(3);
    h.set_area(4500);
    h.set_bedrooms(5);
    h.set_baths(4);
    
    s.set_rooms(200);
    s.set_classrooms(160);
    s.set_offices(20);
    s.set_area(25000);
    
    cout << "House has " << h.get_rooms() << " rooms with " << h.get_bedrooms() << " bedrooms and " << h.get_baths() << " bathrooms." << endl;
    cout << "School has " << s.get_rooms() << " rooms with " << s.get_classrooms() << " classrooms and " << s.get_offices() << " offices." << endl;
    return 0;
}