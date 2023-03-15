#include "assistant.h"
using namespace std;
string greet_msg;
assistant::assistant()//constructor
{
  system("md data");
  system("attrib +s +h data");//sets the read only file
  system("cls");
  system("title GOVERNMENT PERSONAL ARTIFICIAL INTELLIGENCE VIRTUAL ASSISTANT");
}
void assistant::welcome_msg()//Welcome message
{
    string DAYS[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string numDesc[] = {"th", "st", "nd", "rd", "th", "th", "th", "th", "th", "th"};
    string monthDesc[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    time_t now = time(0);
    tm*ltm = localtime(&now);
    if(ltm->tm_hour < 12)
    {
        greet_msg = "Good morning,";
    }
    else if(ltm->tm_hour >= 12)
    {
        if(ltm->tm_hour > 16)
        {
            greet_msg = "Good evening,";
        }
        else
        {
            greet_msg = "Good Afternoon,";
        }
    }

    greet_msg += "User.";
    speak_func(greet_msg);
}
void assistant::speak_func(string s)//speak function
{
  ofstream file;
  file.open("data//speak.vbs", ios::out);//open windows speech file
  file << "dim s";
  file << "\nset s = createObject(\"sapi.spvoice\")";//creating voice windows object
  file << "\ns.speak \"" << s << "\"";//create it to speak
  file.close();
  system("start data//speak.vbs");
  Sleep(300);
}
void assistant::type_n_speak_func(string t)//type & speak function
{
  speak_func(t);   //----------for speaking the text
  for (int i = 0; t[i] != '\0'; i++)
  {
    cout << t[i];
    Sleep(65);
  }
}
void assistant::safe_city_response()
{
    system("CLS");
    type_n_speak_func("THANK YOU, FOR COMPLETING THE SURVEY");
    cout<<"\n"<<endl;
    cout<<"Processing......................."<<endl;
    Sleep(3000);
    type_n_speak_func("ACCORDING TO THE INFORMATION PROVIDED.");
    cout<<"\n"<<endl;
    type_n_speak_func("YOUR CITY FALLS UNDER THE SAFEST CITY CATEGORY");
    cout<<"\n"<<endl;
    type_n_speak_func("YOUR NEIGHBOURHOOD IS THE SAFEST TO STAY IN. THEREFORE, YOU ARE NOT AT RISK OF LIVING IN AN UNSAFE NEIGHBOURHOOD.");
    cout<<"\n"<<endl;
    type_n_speak_func("DONT FORGET TO FOLLOW THESE 3 TIPS:");
    cout<<"\n"<<endl;
    type_n_speak_func("1. INSTALLING SECURITY CAMERAS.");
    cout<<"\n"<<endl;
    type_n_speak_func("2. STAYING ALERT AND REPORTING SUSPICIOUS ACTIVITIES TO THE POLICE.");
    cout<<"\n"<<endl;
    type_n_speak_func("3. GETTING TO KNOW YOUR NEIGHBOURHOODS.");
    cout<<"\n"<<endl;
    type_n_speak_func("THANK YOU FOR PARTICIPATING IN THE SURVEY.");
    cout<<"\n"<<endl;
    system("PAUSE");
    system("CLS");
}
void assistant::unsafe_city_response()
{
    cout<<endl;
    system("CLS");
    type_n_speak_func("THANK YOU, FOR COMPLETING THE SURVEY");
    cout<<endl;
    cout<<endl;
    cout<<"Processing......................."<<endl;
    Sleep(3000);
    type_n_speak_func("ACCORDING TO THE INFORMATION PROVIDED.");
    cout<<"\n"<<endl;
    type_n_speak_func("YOUR CITY FALLS UNDER THE UNSAFEST CITY CATEGORY");
    cout<<"\n"<<endl;
    type_n_speak_func("YOUR NEIGHBOURHOOD IS NOT SAFE TO STAY IN.");
    cout<<"\n"<<endl;
    type_n_speak_func("THESE ARE THE TIPS TO FOLLOW IF YOU STAY IN A BAD NEIGHBOURHOOD:");
    cout<<"\n"<<endl;
    type_n_speak_func("1. INSTALL SECURITY CAMERAS.");
    cout<<"\n"<<endl;
    type_n_speak_func("2. STAY ALERT AND REPORT SUSPICIOUS ACTIVITIES TO THE POLICE.");
    cout<<"\n"<<endl;
    type_n_speak_func("3. GET TO KNOW YOUR NEIGHBOURHOODS.");
    cout<<"\n"<<endl;
    type_n_speak_func("THANK YOU FOR PARTICIPATING IN THE SURVEY.");
    cout<<"\n"<<endl;
    system("PAUSE");
    system("CLS");
}
assistant::~assistant()
{
  system("attrib +s +h data");//sets / or clears the read only file atrributes
}
