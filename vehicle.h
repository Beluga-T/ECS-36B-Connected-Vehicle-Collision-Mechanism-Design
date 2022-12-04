#ifndef _VEHICLE_H_
#define _VEHICLE_H_

#include "person.h"
class vehicle{
    private:
        bool ejection_seat;
        bool helmet;
        bool seatbelt;
        bool airbag;
        person p1;
        
    public:
        vehicle();
        vehicle(person arg_person, bool arg_ejection_seat, bool arg_helmet,bool arg_seatbelt, bool arg_airbag);
        Json::Value dump2json();
        double CAL_SURVIVING_SCORE();
        
};
#endif