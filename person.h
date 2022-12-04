#ifndef _PERSON_H_
#define _PERSON_H_
#include <strings.h>
#include <string>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <exception> 
#include <json/json.h>
using namespace std;

class person {
    private:
        std::string person_name;
        int person_age;

    public:
        person();
        person(std::string arg_name, int arg_age);
        Json::Value dump2json();
        std::string getname();
        int getage();
};
#endif