#include <iostream>
#include "football_club.h"
#include "player.h"
using namespace std;


int main()
{
    // Squad and Team Members can be changed in football_club.h
    FootballClub Foot("HOLLISTER Utd","MAYO","RED and GREEN","","");//You can change Club Info here
    Foot.printInfo();

    Player Info("Brendan","O Boyle","Any He is Mighty","087-654321");//you can change player Info here
    Info.print();
    Player2 p("Pat","Loftus","Backs","087-6854671");//you can change player Info here
    p.print();
    Player3 l("James","Hughes","Backs","087-2878971");//you can change player Info here
    l.print();
    Player4 a("Shane","McDonnell","Forwards","087-3579146");//you can change player Info here
    a.print();
    Player5 y("Fergus","O Boyle","Forwards","086-1235468");//you can change player Info here
    y.print();
    Player6 e("Ronan","O Boyle","Mid Field","087-3579146");//you can change player Info here
    e.print();
    Player7 r("Peter","Hester","Mid Field","085-65445646");//you can change player Info here
    r.print();
    Player8 i("Stephen","McDonnell","Forwards","087-311116");//you can change player Info here
    i.print();
    Player9 n("Alan","Conboy","Goal","083-9999996");//you can change player Info here
    n.print();
    Player10 f("Tom","McLoughan","Forwards","087-5255546");//you can change player Info here
    f.print();
    return 0;
}

