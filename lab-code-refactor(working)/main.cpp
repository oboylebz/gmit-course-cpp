#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "football_club.h"

int main()
{
    FootballClub club;
    club.printInfo();
    club.setClubname("CROSSMOLINA\n");//Change clubname here
    club.setDistrict("MAYO\n");//Change district info here
    club.setManager("BRENDAN O BOYLE \n");//Change manager info here

    string clubname = club.getClubname();
    string district = club.getDistrict();
    string manager = club.getManager();

    cout <<clubname<<district<<manager<< endl;

    Player playerTemp;

    //READING DATA FROM A FILE
    fstream infile;
    infile.open("teamSquad.csv", ios::in);
    string firstName, secondName, dob, position, mobile, play ;
    string line;
    int i = 0;
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile>>play)){
            break;
        }
        else{
            //cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<" "<<play<<" "<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setPlay(play);
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            club.addPlayerToSquad(playerTemp, i);
        }
        //increments
        i =i+1;
    }
    infile.close();



    cout<<"<<---------------->>"<<endl;
    cout<<"SQUAD"<<endl;
    club.printSquad();
    //cout<<"TEAM"<<endl;
   // club.printTeam();




    return 0;
}
