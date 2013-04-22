/*
  Filename   : armor.h
  Author     : Salvatore Fugarino
  Description: Generic structure of a header file
*/   

/************************************************************/
// Macro guard to prevent multiple inclusions

#ifndef CLASS_NAME_H         
#define CLASS_NAME_H

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

  Armor(string areaToWear);
  examineArmor();
  

private:
  
  int level;
  int plusLuck;
  int plusBrutality;
  int plusAttack;
  int plusStam;
  int plusHealth;
  int plusMana;
  int plusDefence;
  int plusIntel;
  int plusDex;
};

// Place all free function prototypes after the class declaration
//   Include only functions that act on the class

/************************************************************/

#endif

/************************************************************/
