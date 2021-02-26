
#include "football_club.h"


  // Constructor
    FootballClub::FootballClub(string clubname, string district, string stripColour){
    this->clubname=clubname;
    this->district=district;
    this->stripColour=stripColour;
    }

    string   FootballClub::getclubname(){
    return clubname;
    }
    string   FootballClub::getdistrict(){
    return district;
    }
        string   FootballClub::getstripColour(){
    return stripColour;
    }

    void   FootballClub::printInfo(){
        cout<<"CLUB INOFORMATION:\n\nClub Name = "<<clubname<<"\nDistrict = "<<district<<"\nStrip Colour = "<<stripColour<<endl;
    }
    };
