/*
  Filename   : Template.cc
  Author     : Salvatore Fugarino
  Course     : CSCI 362-01
  Assignment : 
  Description: Generic structure of a C++ source file
*/   

/************************************************************/
// System includes

#include <iostream>
#include <string>
#include <cstdlib>

/************************************************************/
// Local includes

#include "Player.h"

/************************************************************/
// Using declarations

using std::cout;
using std::cin;
using std::endl;

/************************************************************/
// Function prototypes/global vars/typedefs

/************************************************************/

int      
main (int argc, char* argv[]) 
{ 
  cout << "Please identify your gender, Male or Female? ";
  string gender;
  cin >> gender;
  
  bool determinedGender;
  
  if(gender == "male" || gender == "Male")
    {
      determinedGender = true;
    }
  else if(gender == "Female" || gender == "female")
    {
      
      determinedGender = false;
    }
  cout << "Enter your starter stats!" << endl << "Your stats now are:" << endl;
  cout << "Intelligence: 6" << endl;
  cout << "Dexterity: 6" << endl;
  cout << "Brutality: 6" << endl;
  cout << "Stamina: 6" << endl;
  cout << "Luck: 6" << endl;
  cout << endl <<  "You have 10 points to your disposal, choose wisely" << endl;
  
  int intelligence = 6;
  int dexterity = 6;
  int brutality = 6;
  int stamina = 6;
  int luck = 6;
  bool finished = false;
  int totalPoints = 10;
  while ((intelligence + dexterity + brutality + stamina + luck) != 40 && (!(finished)))
    {
     
      cout << "Please only enter a total of " << totalPoints  << " points between your attributes" << endl;
      cout << "(1)Intelligence: " << intelligence << endl;
      cout << "(2)Dexterity: " << dexterity << endl;
      cout << "(3)Brutality: " << brutality << endl;
      cout << "(4)Stamina: " << stamina << endl;
      cout << "(5)Luck: " << luck << endl;
      
      string addOrSub;
      cout << "Do you want to add or subtract (Type: +, or -): ";
      cin >> addOrSub;
      int points;
      int attribute;
      if(addOrSub == "+")
  {
	  cout << "Which one would you like to add to 1, 2, 3, 4, or 5 ";
	  cin >> attribute;
	  cout << "How many would you like to add to " << attribute << ": "  << endl;
	  cin >> points;
	  
	  if((attribute = 1))
	    {
	      
	      intelligence += points;
	      totalPoints -= points ;
	    }
	  else if((attribute = 2))
	    {
	      
	      dexterity += points;
	      totalPoints -= points ;
	    }
	  else if((attribute = 3))
	    {
	      
	      brutality += points;
	      totalPoints -= points ;
	    }
	  else if((attribute = 4))
	    {
	      
	      stamina += points;
	      totalPoints -= points ;
	    }
	  else if((attribute = 5))
	    {
	      
	      luck += points;
	      totalPoints -= points; 
	    }


	}
      else if(addOrSub == "-")
	{
	  cout << "Which one would you like to subtract from 1, 2, 3, 4, or 5: ";
	  cin >> attribute;
	  cout << "How many would you like to subtract from " << attribute << ": ";
	  cin >> points;
	  
	  if((attribute = 1) && (intelligence - points > 6) )
	    {
	      
	      intelligence -= points;
	      totalPoints += points; 
	    }
	  else if((attribute = 2) && (dexterity - points > 6 ))
	    {
	      
	      dexterity-= points;
	      totalPoints += points;
	    }
	  else if((attribute = 3) && (brutality - points > 6 ))
	    {
	      
	      brutality -= points;
	      totalPoints += points;
	    }
	  else if((attribute = 4) && (stamina - points > 6))
	    {
	      
	      stamina -= points;
	      totalPoints += points;
	    }
	  else if((attribute = 5) && (luck - points > 6 ))
	    {
	      
	      luck -= points;
	      totalPoints += points;
	    }
	  else
	    {

	      cout << endl << endl<< "You cannot subtract from the original 6, please try again" << endl;
	    }
	}
      if((intelligence + dexterity + brutality + stamina + luck) == 40)
	{
	  
	  cout << "Are you done adding?(Yes or No?) ";
	  string answer;
	  cin >> answer;
	  if (answer == "Yes" || answer == "yes" ||answer == "y" ||answer == "Y")
	    {
	    
	      finished = true;
	    }
	}
    }
  
  Player newPlayer(determinedGender, 6, 6, 6, 6, 6);
  // newPlayer.examine();
  
  
  return EXIT_SUCCESS; 
}

/************************************************************/
/************************************************************/
