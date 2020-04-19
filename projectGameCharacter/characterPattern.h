#pragma once
#include <string>

class Pattern {
protected:
    std::string name;
    int agility;
    int health;
    int speed;
    int strength;
    int level;
public:
    Pattern() :name(""), agility(0), health(0), speed(0), strength(0),level(0){}
    Pattern(const std::string & nm, int agl, int hl, int sp, int stn, int lvl) 
        :name(nm), agility(agl), health(hl),speed(sp),strength(stn),level(lvl) {}
    virtual void show() {};
    virtual ~Pattern() {}
    bool operator >(Pattern& pat);
    bool operator <(Pattern& pat);
    bool operator ==(Pattern& pat);
    bool operator !=(Pattern& pat);
};