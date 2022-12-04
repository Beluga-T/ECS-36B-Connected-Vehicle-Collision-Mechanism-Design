#include "person.h"
#include "vehicle.h"

void ALERT(double arg_SS1, double arg_SS2);

int main()
{
    bool ejection_seat = true;
    bool helmet = true;
    bool seatbelt = true;
    bool airbag = true;

    bool NO_ejection_seat = false;
    bool NO_helmet = false;
    bool NO_seatbelt = false;
    bool NO_airbag = false;

    double SS1;
    double SS2;
    person driver1("Keanu Reeves",60);
    person driver2("Tom Cruise",30);
    vehicle motor1(driver1,ejection_seat,NO_helmet,NO_seatbelt,NO_airbag);
    vehicle motor2(driver2,NO_ejection_seat,helmet,NO_seatbelt,airbag);

    SS1 = motor1.CAL_SURVIVING_SCORE();
    cout<<driver1.getname()<<" surviving score is "<<SS1<<endl;

    SS2 = motor2.CAL_SURVIVING_SCORE();
    cout<<driver2.getname()<<" surviving score is "<<SS2<<endl;
    // SS1=SS2;
    ALERT(SS1,SS2);
    return 0;

}

void ALERT(double arg_SS1, double arg_SS2){
    if (arg_SS1>arg_SS2){
        cout<<"Prepare to hit Motor 1"<< endl;
    }
    else if (arg_SS1<arg_SS2){
        cout<<"Prepare to hit Motor 2"<< endl;
    }
    else if (arg_SS1==arg_SS2){
        cout<<"SS1 = SS2, randomly chose 1 to hit"<< endl;

        srand((unsigned) time(NULL));
        int n = rand()% 2; 

        if (n==0){
            cout<<"hit motor1"<< endl;
        }
        else if (n==1){
            cout<<"hit motor2"<< endl;
        }
    }
}