#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <iostream>
using namespace std;


class Player {

    private:
    string forename;
    string surname;
    string position;
    string mobileNumber;

    public :
    // Constructor
    Player(string forename, string surname, string position,string mobileNumber){
    this->forename=forename;
    this->surname=surname;
    this->position=position;
    this->mobileNumber=mobileNumber;
    }

    string getforename(){
    return forename;
    }
    string getsurname(){
    return surname;
    }
    string getposition(){
    return position;
    }
    string getmobileNumber(){
    return mobileNumber;
    }


    void print(){
        cout<<"\nPLAYER INOFORMATION\n\nForname = "<<forename<<"\nSurname = "<<surname<<"\nPosition = "<<position<<"\nMobile Number = "<<mobileNumber<<endl;
    }
    };
#endif // PLAYER_H_INCLUDED
