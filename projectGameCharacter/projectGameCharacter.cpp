
#include <iostream>
#include<boost/ptr_container/ptr_vector.hpp>
#include "gooblin.h"
#include <boost/foreach.hpp>
#include <algorithm>
#include "sort_character_level.h"
#include "hoggoblin.h"
#include <boost/lexical_cast/lexical_cast_old.hpp>
#include <memory>



using namespace std;

int main()
{
    Pattern *ptr = new Goblin("Troll", 23, 45, 324, 4, 43, 3, 4);
    Pattern *action = new Goblin("Troll23", 23, 45, 324, 3, 34, 3, 4);
    Pattern* mass = new Goblin("Trl23", 23, 45, 324, 14, 134, 3, 4);
    Pattern* massHG = new Hoggoblin("Hogg", 23, 45, 324, 14, 134, 3, 4, "fire");
    Goblin *mm = new Hoggoblin("Hogg", 23, 45, 324, 14, 134, 3, 4, "fire");
   // Hoggoblin* hg = dynamic_cast<Hoggoblin*>(mm);
   // hg->Atack();
    cout << (*action < *ptr) << endl;
    boost::ptr_vector<Pattern> vect;
    vect.push_back(ptr);
    vect.push_back(action);
    vect.push_back(mass);
    vect.push_back(new Goblin("TLLLLL23", 23, 45, 324, 8, 1, 3, 4));
    vect.push_back(massHG);

   // vect.sort(vesortLevel());
    sort(vect.begin(), vect.end(), sortLevel());

    for (auto p = vect.begin(); p != vect.end(); p++) {
        p->show();
        cout << "\n" << string(50, '-');
    }

}

