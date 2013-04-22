/*
  Filename   : Player.cc
  Author     : Salvatore Fugarino
  Description: Generic structure of an implementation file
*/   

/************************************************************/
// System includes

#include <iostream>
#include <string>

/************************************************************/
// Local includes

#include "Player.h"
//#include "Armor.h"

/************************************************************/
// Using declarations

using std::cout;
using std::endl;
using std::string;

/************************************************************/
// Function prototypes/global vars/typedefs

/************************************************************/

// Constructor
//   Cannot repeat default arguments in the implementation
Player::Player (/*race character,*/ bool gender, int intel, int brutality, int dex, int stam, int luck)
  : /*m_character(charater), */ m_gender (gender), m_intel(intel), m_brutality(brutality), m_dex(dex), m_stam(stam),m_luck(luck)
{

}

/************************************************************/

int
Player::getMagicalDamage () 
{
  return 0;
}



void
Player::examine()
{
  cout << getLuck() << endl;
  if(getGender())
    {
      cout << "Male" << endl;
    }
  else
    {

      cout << "Female" << endl;
    }
}

int
Player::getLuck() const
{
  
  return m_luck;
}

bool
Player::getGender() const
{
  bool gender = true;
  if(!m_gender)
    {
      gender = false;
    }
      return gender;   
}
/************************************************************/
/************************************************************/
