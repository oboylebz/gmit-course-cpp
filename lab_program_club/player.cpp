#include "player.h"

    Player::Player(string forename, string surname, string position,string mobileNumber){
    this->forename=forename;
    this->surname=surname;
    this->position=position;
    this->mobileNumber=mobileNumber;
    }

    string Player::getforename(){
    return forename;
    }
    string Player::getsurname(){
    return surname;
    }
    string Player::getposition(){
    return position;
    }
    string Player::getmobileNumber(){
    return mobileNumber;
    }


    void Player::print(){
        cout<<"\nPLAYER INOFORMATION\n\nForname = "<<forename<<"\nSurname = "<<surname<<"\nPosition = "<<position<<"\nMobile Number = "<<mobileNumber<<endl;
    }
    };
