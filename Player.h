/*
  Filename   : Player.h
  Author     : Salvatore Fugarino
  Description: Generic structure of a header file
*/   

/************************************************************/
// Macro guard to prevent multiple inclusions

#ifndef PLAYER_H         
#define PLAYER_H

/************************************************************/
// System includes

#include <string>
#include <iostream>

/************************************************************/
// Local includes

/************************************************************/
// Using declarations

using std::string;
using std::ostream;
using std::string;

/************************************************************/

class Player
{
public:

  Player(/*string race,*/ bool gender, int intel, int brutality, int dex, int stam, int luck);
  
  string getRace();
  bool getGender() const;
  int getIntel() const;
  int getBrutality() const;
  int getDex() const;
  int getStam() const;
  int getLuck() const;

  void examine();
  
  //void equip(armor wearable);
  //void dequip(armor wearable);
  
  int getPhysicalDamage();
  int getMagicalDamage();
  

private:
  
  string name;
  //race race;
  int level;
  bool m_gender;
  int experience;
  int m_health;
  int m_mana;
  int m_attack;
  int m_defence;
  int m_intel;
  int m_brutality;
  int m_dex;
  int m_stam;
  int m_luck;
  /*Armor head;
  Armor trinket;
  Armor earrings;
  Armor chest;
  Armor arms;
  Armor hands;
  Armor leftFinger;
  Armor rightFinger;
  Armor legs;
  Armor feet;*/
};

// Place all free function prototypes after the class declaration
//   Include only functions that act on the class

/************************************************************/

#endif

/************************************************************/
