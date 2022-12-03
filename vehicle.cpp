#include"vehicle.h"

vehicle::vehicle(){
    this->ejection_seat = false;
    this-> helmet = false;
    this-> seatbelt = false;
    this-> airbag = false;
    this->p1 = person{};
}
vehicle::vehicle(person arg_person, bool arg_ejection_seat, bool arg_helmet,bool arg_seatbelt, bool arg_airbag){
    if (arg_ejection_seat == true){
        this->ejection_seat = true;
    }else{
        this->ejection_seat = false;
    }
    if (arg_helmet == true){
        this-> helmet = true;
    }else{
        this-> helmet = false;
    }
    if (arg_seatbelt == true){
        this-> seatbelt = true;
    }else{
        this-> seatbelt = false;
    }
    if (arg_airbag == true){
        this-> airbag = true;
    }else{
        this-> airbag = false;
    }
    
    this->p1 = arg_person;
    // std::cout<<"vehicle create success"<< endl;
}