#ifndef FOOTBALL_CLUB_H_INCLUDED
#define FOOTBALL_CLUB_H_INCLUDED
#include <iostream>
#pragma once
using namespace std;

#endif // FOOTBALL_CLUB_H_INCLUDED


class FootballClub {

   private:
    string clubname;
    string district;
    string stripColour;
    string PlayerSquad [10]= {"Brendan","Pat","James","Shane","Fergus","Ronan","Peter","Stephen","Alan","Tom"};//You can add or remove players to the Squade here.
    string PlayerTeam [5]= {"Ronan","Alan","James","Shane","Fergus"};//Change players on the team here
    public :
    // Constructor
   FootballClub(string clubname, string district, string stripColour ,string PlayerSquad,string PlayerTeam ){
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

   string getPlayerSquad() {
    return PlayerSquad[10] ;
    }

     string getPlayerTeam(){
    return PlayerTeam [5];
    }
    void printInfo(){
        cout<<"\n**********ALL IRELAND FIVE A SIDE **********\n";
        cout<<"CLUB INOFORMATION:\n\nClub Name = "<<clubname<<"\nDistrict = "<<district<<"\nStrip Colour = "<<stripColour<<endl;
        cout<<"\n10 SQUAD MEMBERS :\n\n";
   for (int i=0;i<10;i++){
        cout<<PlayerSquad [i]<<endl;
        }
       cout<<"\nTEAM BEING FIELDED :\n"<<endl;
    for  (int i=0;i<5;i++){
        cout<<PlayerTeam [i]<<endl;
        }
    }
    };

