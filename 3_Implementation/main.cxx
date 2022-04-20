#include"headerfile.h" 

int main()
{
     
    Electronic_Appliance obj; //Object declaration for Class Electronic_Appliance
    string UserInput; //declaration of Input string 
    Switch s_object; //Object declaration for Class Switch
    int check; //Variable declaration for Encryption input
    int temp; //temporary variable to transferring data
    int s; //variable for Device power status

 while (1) //Continuous Loop, to Control and view the status of the electronic appliances
 {  
     //Display Messages for the User
    cout<<"--------------------------     MENU     --------------------------"<<endl;
    cout<<"\n Please Type in the Electronic Appliance Name to control respectively. \n \n Available Appliances: 'Light' , 'Fan' , 'Refrigerator' "<<endl;
    cout<<"\n";
    cout<<"Please Type in 'status' to Display the status of Electronic Appliance"<<endl;
    cout<<"\n";
    cout<<"--------------------------  End of Menu  --------------------------"<<endl;

    cin>>UserInput; //Input from the User
    switchDec Selection = inputstr(UserInput);

    switch (Selection)  //condition to check power, status & control the appliance
    {
    case light: //Light Power & Brightness control
    cout<<"Please Select \n '1' to Power ON the Device \n '0' to Turn OFF the Device \n >>";  
    cin>>s; //Power Control Input
    if(s>0)
    {
        cout<<"Device Powered ON & Ready \n";
        cout<<"Brightness Adjustment Levels:\n 0.Idle \n 1.Low \n 2.Medium \n 3.High \n";
        cin>>temp; //Brightness Control Input
        check = s_object.DataEncryption(temp); //Encryption
        check = obj.Decryption(check); //Decryption
        s_object.lightselection1 = check; //Display Status message after succesfull change in Brightness
        if(temp ==1)
        {
           cout<< "Brightness of the Light is adjusted to LOW" <<endl;
          
        }
        else if(temp ==2)
        {
            cout<< "Brightness of the Light is adjusted to MEDIUM" <<endl;
        }
        else if(temp ==3)
        {
            cout<< "Brightness of the Light is adjusted to HIGH" <<endl;
        }
        else
        {
            cout<< "Device Powered ON & IDLE" <<endl;
        }
        cout<<"Please reselect from the Menu"<<endl;
        cout<<"Else, Enter X to Exit Menu"<<endl;
        break;
         }
    else
    {
        cout<<"Device Turned OFF";
        break;
    }

          case fan:
    cout<<"Please Select \n '1' to Power ON the Device \n '0' to Turn OFF the Device \n >>";   
    cin>>s; //Power Control Input
    if(s>0)
    {
        cout<<"Device Powered ON & Ready \n";
        cout<<"Speed Adjustment Levels:\n 0.Idle \n 1.Low \n 2.Medium \n 3.High \n";
        cin>>temp; //Speed Control Input
        check = s_object.DataEncryption(temp);
        check = obj.Decryption(check);
        s_object.fanselection1 = check;
       if(temp ==1)
        {
           cout<< "Speed of the Fan is adjusted to LOW" <<endl;
        }
        else if(temp ==2)
        {
            cout<< "Speed of the Fan is adjusted to MEDIUM" <<endl;
        }
        else if(temp ==3)
        {
            cout<< "Speed of the Fan is adjusted to HIGH" <<endl;
        }
        else
        {
            cout<< "Device Powered ON & IDLE" <<endl;
        }
        cout<<"Please reselect from the Menu"<<endl;
        cout<<"Else, Enter X to Exit Menu"<<endl;
        break;
    }
    else
    {
        cout<<"Device Turned OFF";
        break;
    }
              
        case Refrigerator: //Refrigerator Power & Temperature control
     cout<<"Please Select \n '1' to Power ON the Device \n '0' to Turn OFF the Device \n >>"; 
    cin>>s; //Power Control Input
    if(s>0)
    {
        cout<<"Device Powered ON & Ready \n";
         cout<<"Temperature Adjustment Levels:\n 0.Idle \n 1.Winter \n 2.Summer \n 3.Super Chill \n";
        cin>>temp; //Temperature Control Input
        check = s_object.DataEncryption(temp); //Encryption
        check = obj.Decryption(check); //Decryption
        s_object.Refrigeratorselection1 = check; //Display Status message after succesfull change in Temperature
        if(temp == 1 )
        {
           cout<< "Temperature of the Refrigerator is adjusted to Winter" <<endl;
        }
        else if(temp == 2)
        {
            cout<< "Temperature of the Refrigerator is adjusted to Summer" <<endl;
        }
        else if(temp == 3)
        {
            cout<< "Temperature of the Refrigerator is adjusted to Super Chill" <<endl;
        }
        else
        {
            cout<< "Device POwered ON & IDLE" <<endl;
        }
        cout<<"Please reselect from the Menu"<<endl;
        cout<<"Else, Enter X to Exit Menu"<<endl;
        break;
         }
    else
    {
        cout<<"Device Turned OFF";
        break;
    }


    case status:
        cout<<"-- Status of the Appliances --"<<endl;       
        cout<<" Brightness of Light = " <<s_object.lightselection1<<"\n Speed of fan = " <<s_object.fanselection1<<"\n Temperature of Refrigerator = " <<s_object.Refrigeratorselection1<<endl;
        cout<<"'0' Indicates not Functional '1' Indicates Low \n '2' Indicates Medium \n '3' Indicates High \n ";
        cout<<"\nPlease reselect from the Menu"<<endl;
        cout<<"\nElse, Enter X to Exit Menu"<<endl;
        break;

    case rettype:
        cout<<" Wrong Selection, Please Re-Check the options\n";
        cout<<"Please reselect from the Menu"<<endl;
        cout<<"Else, Enter X to Exit Menu"<<endl;
        break;

    case x:
        exit(0);
        break;
 
     default: //default condition to break the switch case
        break;
    }
    }
}
