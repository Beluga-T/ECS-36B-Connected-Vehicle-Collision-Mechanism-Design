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

double vehicle::CAL_SURVIVING_SCORE(){
    double survive_score = 10;
    if (this->ejection_seat == true){
     survive_score = survive_score + 40;
        cout<< p1.getname()<<" has ejection seat, SS = "<< survive_score<<endl;
    }
    if (this-> helmet== true){
     survive_score = survive_score + 15;
        cout<< p1.getname()<< " has helmet, SS = "<< survive_score<<endl;
    }
    if (this-> seatbelt== true){
     survive_score = survive_score + 10;
        cout<< p1.getname()<<" has seatbelt, SS= "<< survive_score<<endl;
    }
    if (this-> airbag == true){
         survive_score = survive_score + 20;
         cout<< p1.getname()<<" has seatbelt, SS = "<< survive_score<<endl;
    }
    int person_age = -1;
    person_age = p1.getage();

    if ((person_age <= 16)){
        cout<< p1.getname()<<" age is " << person_age << endl;
        survive_score = survive_score -20;
    }
    else if ((person_age >= 16)&(person_age <= 35)){
        
        cout<< p1.getname()<<" age is " << person_age << endl;
        survive_score = survive_score+10;
    }
    else if ((person_age < 35)&(person_age<55)){
        cout<< p1.getname()<<" age is " << person_age << endl;
        survive_score = survive_score;
    }
    else if ((person_age>=55)&(person_age<70)){
         cout<< p1.getname()<<" age is " << person_age << endl;
         survive_score = survive_score - 10;
    }
    else if (person_age>=55){
        cout<< p1.getname()<<" age is " << person_age << endl;
        survive_score = survive_score - 20;
    }

    // cout<< p1.getname()<<" Survive_rate = "<< survive_score<<endl;
    return survive_score;
}

