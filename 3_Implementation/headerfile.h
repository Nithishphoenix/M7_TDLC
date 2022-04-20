#ifndef __HEADERFILE_H
#define __HEADERFILE_H

#include <iostream>
using namespace std;
#include<string>
#include<cstdlib>  

enum switchDec //Declaration
 {
  light,
  fan,
  Refrigerator,
  status,
  x,
  rettype
};



switchDec inputstr(const string& str); 


 class Electronic_Appliance
{
  public:
   unsigned short fanselection1;
   unsigned short lightselection1;
   unsigned short Refrigeratorselection1; 
  unsigned short Decryption(unsigned short);

  
  Electronic_Appliance();
   
  
  
  const void display();
  ~Electronic_Appliance(){};
};

class Switch: public Electronic_Appliance{
  
  public:
  unsigned short DataEncryption(unsigned short);
  //void indata(unsigned short);
  Switch();
  ~Switch(){};
};
 

#endif
