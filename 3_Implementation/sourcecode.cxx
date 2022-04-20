#include "headerfile.h"
 
Switch :: Switch():Electronic_Appliance()
{
   //Initialize Values to 0   
};

Electronic_Appliance :: Electronic_Appliance():fanselection1(0),lightselection1(0),Refrigeratorselection1(0)
{
};

unsigned short Electronic_Appliance :: Decryption(unsigned short input) //Decryption
{
    if(input>0 && input<33)
{
        return 0;
    }
    else if(input>=33 && input<66)
{
        return 1;
    }
    else if(input>=66 && input<99)
{
        return 2;
    }

    else if(input>=99 && input<132)
{
        return 3;
    }
 return 5;
}

switchDec inputstr(const string& str)
{
    if(str == "light" || str == "Light" || str == "LIGHT") return light;
    else if(str == "fan" || str == "Fan" || str == "FAN") return fan;
    else if(str == "refrigerator" || str == "Refrigerator" || str == "REFRIGERATOR") return Refrigerator;
    else if(str == "STATUS" || str == "Status" || str == "status") return status;
    else if(str == "x" || str == "X") return x;
    return rettype;
 }

unsigned short Switch :: DataEncryption(unsigned short input) //Encryption
{
     unsigned short temp=0;
    if(input == 0)
{
        temp = 1 + rand()%33; 
        return temp;
    }
    else if (input == 1)
{
        temp = 34 + rand()%33; 
        return temp;
    }
    else if (input == 2)
{
        temp = 67 + rand()%33; 
        return temp;
    }
    else if (input == 3)
{
        temp = 100 + rand()%33; // 100 to 133
        return temp;
    }
    return temp;
}
