#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED
#include <iostream>
using namespace std;

#endif // FOOTBALL_CLUB_H_INCLUDED


class FootballClub {

    private:
    string clubname;
    string district;
    string stripColour;

public :
    // Constructor
    FootballClub(string clubname, string district, string stripColour){
    this->clubname=clubname;
    this->district=district;
    this->stripColour=stripColour;
    }

    string getclubname(){
    return clubname;
    }
    string getdistrict(){
    return district;
    }
        string getstripColour(){
    return stripColour;
    }

    void printInfo(){
        cout<<"CLUB INOFORMATION:\n\nClub Name = "<<clubname<<"\nDistrict = "<<district<<"\nStrip Colour = "<<stripColour<<endl;
    }
    };
