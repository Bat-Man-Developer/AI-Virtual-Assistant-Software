#include "assistant.h"
using namespace std;
assistant a; //create object for assistance header to call functions
class aiva_safe_city_identifier{
private:
    FILE *fc;//create file object
    int counter_t = 0, temp;
    string city;
    struct unsafe_citys
    {
        int joburg_c = 0, capetown_c = 0, durban_c = 0, pretoria_c = 0, bloemfontein_c = 0, gqeberha_c = 0, eastlondon_c = 0, vereeniging_c = 0, pietermaritzburg_c = 0, polokwane_c = 0, kimberley_c = 0, soweto_c = 0, mbombela_c = 0, welkom_c = 0, benoni_c = 0, carletonville_c = 0, makhanda_c = 0, upington_c = 0, klerksdorp_c = 0, potchefstroom_c = 0, newcastle_c = 0, mosselbay_c = 0, mahikeng_c = 0, thohoyandou_c = 0, volksrust_c = 0, oudtshoorn_c = 0, warrenton_c = 0, mthatha_c = 0, brits_c = 0, kroonstad_c = 0, ulundi_c = 0, aliwalnorth_c = 0, barklywest_c = 0, tembisa_c = 0, alberton_c = 0, bethal_c = 0, vryburg_c = 0, vanderbijlpark_c = 0, bisho_c = 0, rustenburg_c = 0, qonce_c = 0, mokopane_c = 0, balfour_c = 0, louistrichardt_c = 0, theunissen_c = 0, kwadukuza_c = 0, ladybrand_c = 0, sasolburg_c = 0,jankempdorp_c = 0, brakpan_c = 0, stutterheim_c = 0, saftey1 = 0, saftey2 = 0, saftey3 = 0, saftey4 = 0, saftey5 = 0, saftey6 = 0, saftey7 = 0, saftey8 = 0, saftey9 = 0, saftey10 = 0, saftey11 = 0, saftey12 = 0, saftey13 = 0, saftey14 = 0, saftey15 = 0, saftey16 = 0, saftey17 = 0, saftey18 = 0, saftey19 = 0, saftey20 = 0, saftey21 = 0, saftey22 = 0, saftey23 = 0, saftey24 = 0, saftey25 = 0, saftey26 = 0, saftey27 = 0, saftey28 = 0, saftey29 = 0, saftey30 = 0, saftey31 = 0, saftey32 = 0, saftey33 = 0, saftey34 = 0, saftey35 = 0, saftey36 = 0, saftey37 = 0, saftey38 = 0, saftey39 = 0, saftey40 = 0, saftey41 = 0, saftey42 = 0, saftey43 = 0, saftey44 = 0, saftey45 = 0, saftey46 = 0, saftey47 = 0, saftey48 = 0, saftey49 = 0, saftey50 = 0, saftey51 = 0;
    };
    struct unsafe_citys obj;
protected:
public:
    aiva_safe_city_identifier()//Constructor
    {

    }
    void survey()
    {
        string x1,x2,x3,x4;
        fc=fopen("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/City Crime Data Pool  (csv)/city_crime_data.txt", "ab");//Open and write File
        if(fc)
        {
            cout<<"\n"<<endl;
            cout<<" --SOUTH AFRICAN GOVERNMENT PERSONAL ARTIFICIAL INTELLIGENT VIRTUAL ASSISTANT:::"<<endl;
            cout<<endl;
            cout<<" --SOUTH AFRICA'S TOP UNSAFE CITY'S INTELLIGENT LOCATOR:::"<<endl;
            cout<<endl;
            a.type_n_speak_func("IDENTIFY IF YOUR CITY IS UNSAFE IN SOUTH AFRICA. TAKE A SHORT SURVEY BELOW. AND COMPLETE THE QUESTIONS THAT FOLLOW");
            city_individual_participant();
            cout<<"\n\n"<<endl;
            a.type_n_speak_func("2. IN YOUR CITY, IS THERE RANDOM GARBAGE EVERYWHERE? ENTER YES OR NO.");
            cout<<"\n"<<endl;
            cin>>x1;
            if(x1 == "yes")
                x1 = "1";
            else
                x1 = "0";

            cout<<"\n"<<endl;
            a.type_n_speak_func("3. IS THERE A LOT OF ILLEGAL ACTIVITIES IN YOUR CITY.? YES OR NO.");
            cout<<"\n"<<endl;
            cin>>x2;
            if(x2 == "yes")
                x2 = "1";
            else
                x2 = "0";

            cout<<"\n"<<endl;
            a.type_n_speak_func("4. DOES THE CITY YOU STAY IN, HAVE ALL BASIC INFRASTRUCTURE, IN GOOD CONDITION. TYPE YES OR NO.");
            cout<<"\n"<<endl;
            cin>>x3;
            if(x3 == "yes")
                x3 = "1";
            else
                x3 = "0";

            cout<<"\n"<<endl;
            a.type_n_speak_func("LASTLY. ARE THERE GANGS IN YOUR CITY. AND RELATED GANG ACTIVITY. INPUT YES OR NO.");
            cout<<"\n"<<endl;
            cin>>x4;
            if(x4 == "yes")
                x4 = "1";
            else
                x4 = "0";

            cout<<"\n\n"<<endl;
            if(x1 == "0" && x2 == "0" && x3 == "0" && x4 == "1")//calculating number of people who are not safe
            {
                unsafe_city_calculator();
                a.unsafe_city_response();
            }
            else if(x1 == "0" && x2 == "0" && x3 == "1" && x4 == "1")//calculating number of people who are not safe
            {
                unsafe_city_calculator();
                a.unsafe_city_response();
            }
            else if(x1 == "0" && x2 == "1" && x3 == "1" && x4 == "1")//calculating number of people who are not safe
            {
                unsafe_city_calculator();
                a.unsafe_city_response();
            }
            else if(x1 == "0" && x2 == "1" && x3 == "0" && x4 == "1")//calculating number of people who are not safe
            {
                unsafe_city_calculator();
                a.unsafe_city_response();
            }
            else if(x1 == "1" && x2 == "1" && x3 == "1" && x4 == "1")//calculating number of people who are not safe
            {
                unsafe_city_calculator();
                a.unsafe_city_response();
            }
            else if(x1 == "1" && x2 == "0" && x3 == "0" && x4 == "1")//calculating number of people who are not safe
            {
                unsafe_city_calculator();
                a.unsafe_city_response();
            }
            else if(x1 == "1" && x2 == "0" && x3 == "1" && x4 == "1")//calculating number of people who are not safe
            {
                unsafe_city_calculator();
                a.unsafe_city_response();
            }
            else if(x1 == "1" && x2 == "1" && x3 == "0" && x4 == "0")//calculating number of people who are not safe
            {
                unsafe_city_calculator();
                a.unsafe_city_response();
            }
            else if(x1 == "1" && x2 == "1" && x3 == "0" && x4 == "1")//calculating number of people who are not safe
            {
                unsafe_city_calculator();
                a.unsafe_city_response();
            }
            else if(x1 == "0" && x2 == "1" && x3 == "0" && x4 == "0")//calculating number of people who are not safe
            {
                unsafe_city_calculator();
                a.unsafe_city_response();
            }
            else//calculating number of people who are safe
            {
                a.safe_city_response();
            }
            fwrite(&obj,sizeof(obj),1,fc);
            fclose(fc);//Close File
        }
        else
        {
            system("color 6");
            cout<<"\n\n\n\t\t\t\t\t\t<<<<<<<<<<<<<< FILE NOT CREATED >>>>>>>>>>>>>>>\n\n\t\t\t\t\t\t\t\t FIXING ERRORS\n";
            fclose(fc);//Close File
            Sleep(2000);
            system("CLS");
            return;
        }
    }
    void show_citys()
    {
        cout<<endl;
        cout<<" --SOUTH AFRICAN GOVERNMENT PERSONAL ARTIFICIAL INTELLIGENCE VIRTUAL ASSISTANT:::"<<endl;
        cout<<endl;
        cout<<" --SHOWING SOUTH AFRICA'S TOP UNSAFEST CITY'S:::\n"<<endl;
        a.speak_func("SHOW TOP UNSAFE CITY'S IN SOUTH AFRICA.");
        cout<<" --RANKED FROM UNSAFE TO SAFE. ACCORDING TO INFORMATION PROVIDED BY CITIZENS OF SOUTH AFRICA.\n"<<endl;
        fc=fopen("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/City Crime Data Pool  (csv)/city_crime_data.txt", "rb");//Open and read File
        if(fc)
        {
            while(fread(&obj, sizeof(obj), 1, fc))
            {
                system("CLS");
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |CITY NAME             | |TOTAL # OF PEOPLE| |NUMBER OF PEOPLE WHO SCORED UNSAFE|"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"1.JOHANNESBURG        |"<<" |  "<<obj.joburg_c<<"                |  "<<obj.saftey1<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"2.CAPE TOWN           |"<<" |  "<<obj.capetown_c<<"                |  "<<obj.saftey2<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"3.DURBAN              |"<<" |  "<<obj.durban_c<<"                |  "<<obj.saftey3<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"4.PRETORIA            |"<<" |  "<<obj.pretoria_c<<"                |  "<<obj.saftey4<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"5.BLOEMFONTEIN        |"<<" |  "<<obj.bloemfontein_c<<"                |  "<<obj.saftey5<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"6.GQEBERHA            |"<<" |  "<<obj.gqeberha_c<<"                |  "<<obj.saftey6<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"7.EAST LONDON         |"<<" |  "<<obj.eastlondon_c<<"                |  "<<obj.saftey7<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"8.VEREENIGING         |"<<" |  "<<obj.vereeniging_c<<"                |  "<<obj.saftey8<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"9.PIETERMARITZBURG    |"<<" |  "<<obj.pietermaritzburg_c<<"                |  "<<obj.saftey9<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"10.POLOKWANE          |"<<" |  "<<obj.polokwane_c<<"                |  "<<obj.saftey10<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"11.KIMBERLEY          |"<<" |  "<<obj.kimberley_c<<"                |  "<<obj.saftey11<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"12.SOWETO             |"<<" |  "<<obj.soweto_c<<"                |  "<<obj.saftey12<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"13.MBOMBELA           |"<<" |  "<<obj.mbombela_c<<"                |  "<<obj.saftey13<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"14.WELKOM             |"<<" |  "<<obj.welkom_c<<"                |  "<<obj.saftey14<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"15.BENONI             |"<<" |  "<<obj.benoni_c<<"                |  "<<obj.saftey15<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"16.CARLETONVILLE      |"<<" |  "<<obj.carletonville_c<<"                |  "<<obj.saftey16<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"17.MAKHANDA           |"<<" |  "<<obj.makhanda_c<<"                |  "<<obj.saftey17<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"18.UPINGTON           |"<<" |  "<<obj.upington_c<<"                |  "<<obj.saftey18<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"19.KLERKSDORP         |"<<" |  "<<obj.klerksdorp_c<<"                |  "<<obj.saftey19<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"20.POTCHEFSTROOM      |"<<" |  "<<obj.potchefstroom_c<<"                |  "<<obj.saftey20<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"21.NEWCASTLE          |"<<" |  "<<obj.newcastle_c<<"                |  "<<obj.saftey21<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"22.MOSSEL BAY         |"<<" |  "<<obj.mosselbay_c<<"                |  "<<obj.saftey22<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"23.MAHIKENG           |"<<" |  "<<obj.mahikeng_c<<"                |  "<<obj.saftey23<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"24.THOHOYANDOU        |"<<" |  "<<obj.thohoyandou_c<<"                |  "<<obj.saftey24<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"25.VOLKSRUST          |"<<" |  "<<obj.volksrust_c<<"                |  "<<obj.saftey25<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"26.OUDTSHOORN         |"<<" |  "<<obj.oudtshoorn_c<<"                |  "<<obj.saftey26<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"27.WARRENTON          |"<<" |  "<<obj.warrenton_c<<"                |  "<<obj.saftey27<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"28.MTHATHA            |"<<" |  "<<obj.mthatha_c<<"                |  "<<obj.saftey28<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"29.BRITS              |"<<" |  "<<obj.brits_c<<"                |  "<<obj.saftey29<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"30.KROONSTAD          |"<<" |  "<<obj.kroonstad_c<<"                |  "<<obj.saftey30<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"31.ULUNDI             |"<<" |  "<<obj.ulundi_c<<"                |  "<<obj.saftey31<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"32.ALIWAL NORTH       | "<<"|  "<<obj.aliwalnorth_c<<"                |  "<<obj.saftey32<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"33.BARKLY WEST        |"<<" |  "<<obj.barklywest_c<<"                |  "<<obj.saftey33<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"34.TEMBISA            |"<<" |  "<<obj.tembisa_c<<"                |  "<<obj.saftey34<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"35.ALBERTON           |"<<" |  "<<obj.alberton_c<<"                |  "<<obj.saftey35<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"36.BETHAL             |"<<" |  "<<obj.bethal_c<<"                |  "<<obj.saftey36<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"37.VRYBURG            |"<<" |  "<<obj.vryburg_c<<"                |  "<<obj.saftey37<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"38.VANDERBIJLPARK     |"<<" |  "<<obj.vanderbijlpark_c<<"                |  "<<obj.saftey38<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"39.STUTTERHEIM        |"<<" |  "<<obj.stutterheim_c<<"                |  "<<obj.saftey39<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"40.BISHO              |"<<" |  "<<obj.bisho_c<<"                |  "<<obj.saftey40<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"41.RUSTENBURG         |"<<" |  "<<obj.rustenburg_c<<"                |  "<<obj.saftey41<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"42.QONCE              |"<<" |  "<<obj.qonce_c<<"                |  "<<obj.saftey42<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"43.MOKOPANE           |"<<" |  "<<obj.mokopane_c<<"                |  "<<obj.saftey43<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"45.LOUIS TRICHARDT    | "<<"|  "<<obj.louistrichardt_c<<"                |  "<<obj.saftey45<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"46.THEUNISSEN         |"<<" |  "<<obj.theunissen_c<<"                |  "<<obj.saftey46<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"47.KWADUKUZA          |"<<" |  "<<obj.kwadukuza_c<<"                |  "<<obj.saftey47<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"48.LADYBRAND          |"<<" |  "<<obj.ladybrand_c<<"                |  "<<obj.saftey48<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"49.SASOLBURG          |"<<" |  "<<obj.sasolburg_c<<"                |  "<<obj.saftey49<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"50.JAN KEMPDORP       |"<<" |  "<<obj.jankempdorp_c<<"                |  "<<obj.saftey50<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"         |"<<"51.BRAKPAN            |"<<" |  "<<obj.brakpan_c<<"                |  "<<obj.saftey51<<"                               |"<<endl;
                cout<<"         ________________________ ___________________ ____________________________________  "<<endl;
                cout<<"Table "<<counter_t++<<endl;
            }
            fclose(fc);//Close File
        }
        else
        {
            system("color 6");
            cout<<"\n\n\n\t\t\t\t\t\t<<<<<<<<<<<<<< FILE NOT CREATED >>>>>>>>>>>>>>>\n\n\t\t\t\t\t\t\t\t FIXING ERRORS\n";
            fclose(fc);//Close File
            Sleep(2000);
            system("CLS");
            return;
        }
        cout<<"\n\n"<<endl;
        system("PAUSE");
        system("CLS");
    }
    void unsafe_city_calculator()
    {
        if(city == "johannesburg")
        {
            obj.saftey1++;
        }
        else if(city == "cape town")
        {
            obj.saftey2++;
        }
        else if(city == "durban")
        {
            obj.saftey3++;
        }
        else if(city == "pretoria")
        {
            obj.saftey4++;
        }
        else if(city == "bloemfontein")
        {
            obj.saftey5++;
        }
        else if(city == "gqeberha")
        {
            obj.saftey6++;
        }
        else if(city == "east london")
        {
            obj.saftey7++;
        }
        else if(city == "vereeniging")
        {
            obj.saftey8++;
        }
        else if(city == "pietermaritzburg")
        {
            obj.saftey9++;
        }
        else if(city == "polokwane")
        {
            obj.saftey10++;
        }
        else if(city == "kimberley")
        {
            obj.saftey11++;
        }
        else if(city == "soweto")
        {
            obj.saftey12++;
        }
        else if(city == "mbombela")
        {
            obj.saftey13++;
        }
        else if(city == "welkom")
        {
            obj.saftey14++;
        }
        else if(city == "benoni")
        {
            obj.saftey15++;
        }
        else if(city == "carletonville")
        {
            obj.saftey16++;
        }
        else if(city == "makhanda")
        {
            obj.saftey17++;
        }
        else if(city == "upington")
        {
            obj.saftey18++;
        }
        else if(city == "klerksdorp")
        {
            obj.saftey19++;
        }
        else if(city == "potchefstroom")
        {
            obj.saftey20++;
        }
        else if(city == "newcastle")
        {
            obj.saftey21++;
        }
        else if(city == "mossel bay")
        {
            obj.saftey22++;
        }
        else if(city == "mahikeng")
        {
            obj.saftey23++;
        }
        else if(city == "thohoyandou")
        {
            obj.saftey24++;
        }
        else if(city == "volksrust")
        {
            obj.saftey25++;
        }
        else if(city == "oudtshoorn")
        {
            obj.saftey26++;
        }
        else if(city == "warrenton")
        {
            obj.saftey27++;
        }
        else if(city == "mthatha")
        {
            obj.saftey28++;
        }
        else if(city == "brits")
        {
            obj.saftey29++;
        }
        else if(city == "kroonstad")
        {
            obj.saftey30++;
        }
        else if(city == "ulundi")
        {
            obj.saftey31++;
        }
        else if(city == "aliwal north")
        {
            obj.saftey32++;
        }
        else if(city == "barkly west")
        {
            obj.saftey33++;
        }
        else if(city == "tembisa")
        {
            obj.saftey34++;
        }
        else if(city == "alberton")
        {
            obj.saftey35++;
        }
        else if(city == "bethal")
        {
            obj.saftey36++;
        }
        else if(city == "vryburg")
        {
            obj.saftey37++;
        }
        else if(city == "vanderbijlpark")
        {
            obj.saftey38++;
        }
        else if(city == "stutterheim")
        {
            obj.saftey39++;
        }
        else if(city == "bisho")
        {
            obj.saftey40++;
        }
        else if(city == "rustenburg")
        {
            obj.saftey41++;
        }
        else if(city == "qonce")
        {
            obj.saftey42++;
        }
        else if(city == "mokopane")
        {
            obj.saftey43++;
        }
        else if(city == "balfour")
        {
            obj.saftey44++;
        }
        else if(city == "louis trichardt")
        {
            obj.saftey45++;
        }
        else if(city == "theunissen")
        {
            obj.saftey46++;
        }
        else if(city == "kwadukuza")
        {
            obj.saftey47++;
        }
        else if(city == "ladybrand")
        {
            obj.saftey48++;
        }
        else if(city == "sasolburg")
        {
            obj.saftey49++;
        }
        else if(city == "jan kempdorp")
        {
            obj.saftey50++;
        }
        else if(city == "brakpan")
        {
            obj.saftey51++;
        }
        fflush(stdin);
    }
    void city_individual_participant()
    {
        do
        {
            temp = 0;
            cout<<"\n"<<endl;
            a.type_n_speak_func("1. WHICH CITY, DO YOU RESIDE IN? ENTER YOUR CITY NAME.");
            cout<<"\n"<<endl;
            cin>>city;
            if(city == "johannesburg")
            {
                obj.joburg_c++;
            }
            else if(city == "cape town")
            {
                obj.capetown_c++;
            }
            else if(city == "durban")
            {
                obj.durban_c++;
            }
            else if(city == "pretoria")
            {
                obj.pretoria_c++;
            }
            else if(city == "bloemfontein")
            {
                obj.bloemfontein_c++;
            }
            else if(city == "gqeberha")
            {
                obj.gqeberha_c++;
            }
            else if(city == "east london")
            {
                obj.eastlondon_c++;
            }
            else if(city == "vereeniging")
            {
                obj.vereeniging_c++;
            }
            else if(city == "pietermaritzburg")
            {
                obj.pietermaritzburg_c++;
            }
            else if(city == "polokwane")
            {
                obj.polokwane_c++;
            }
            else if(city == "kimberley")
            {
                obj.kimberley_c++;
            }
            else if(city == "soweto")
            {
                obj.soweto_c++;
            }
            else if(city == "mbombela")
            {
                obj.mbombela_c++;
            }
            else if(city == "welkom")
            {
                obj.welkom_c++;
            }
            else if(city == "benoni")
            {
                obj.benoni_c++;
            }
            else if(city == "carletonville")
            {
                obj.carletonville_c++;
            }
            else if(city == "makhanda")
            {
                obj.makhanda_c++;
            }
            else if(city == "upington")
            {
                obj.upington_c++;
            }
            else if(city == "klerksdorp")
            {
                obj.klerksdorp_c++;
            }
            else if(city == "potchefstroom")
            {
                obj.potchefstroom_c++;
            }
            else if(city == "newcastle")
            {
                obj.newcastle_c++;
            }
            else if(city == "mossel bay")
            {
                obj.mosselbay_c++;
            }
            else if(city == "mahikeng")
            {
                obj.mahikeng_c++;
            }
            else if(city == "thohoyandou")
            {
                obj.thohoyandou_c++;
            }
            else if(city == "volksrust")
            {
                obj.volksrust_c++;
            }
            else if(city == "oudtshoorn")
            {
                obj.oudtshoorn_c++;
            }
            else if(city == "warrenton")
            {
                obj.warrenton_c++;
            }
            else if(city == "mthatha")
            {
                obj.mthatha_c++;
            }
            else if(city == "brits")
            {
                obj.brits_c++;
            }
            else if(city == "kroonstad")
            {
                obj.kroonstad_c++;
            }
            else if(city == "ulundi")
            {
                obj.ulundi_c++;
            }
            else if(city == "aliwal north")
            {
                obj.aliwalnorth_c++;
            }
            else if(city == "barkly west")
            {
                obj.barklywest_c++;
            }
            else if(city == "tembisa")
            {
                obj.tembisa_c++;
            }
            else if(city == "alberton")
            {
                obj.alberton_c++;
            }
            else if(city == "bethal")
            {
                obj.bethal_c++;
            }
            else if(city == "vryburg")
            {
                obj.vryburg_c++;
            }
            else if(city == "vanderbijlpark")
            {
                obj.vanderbijlpark_c++;
            }
            else if(city == "stutterheim")
            {
                obj.stutterheim_c++;
            }
            else if(city == "bisho")
            {
                obj.bisho_c++;
            }
            else if(city == "rustenburg")
            {
                obj.rustenburg_c++;
            }
            else if(city == "qonce")
            {
                obj.qonce_c++;
            }
            else if(city == "mokopane")
            {
                obj.mokopane_c++;
            }
            else if(city == "balfour")
            {
                obj.balfour_c++;
            }
            else if(city == "louis trichardt")
            {
                obj.louistrichardt_c++;
            }
            else if(city == "theunissen")
            {
                obj.theunissen_c++;
            }
            else if(city == "kwadukuza")
            {
                obj.kwadukuza_c++;
            }
            else if(city == "ladybrand")
            {
                obj.ladybrand_c++;
            }
            else if(city == "sasolburg")
            {
                obj.sasolburg_c++;
            }
            else if(city == "jan kempdorp")
            {
                obj.jankempdorp_c++;
            }
            else if(city == "brakpan")
            {
                obj.brakpan_c++;
            }
            else
            {
                a.speak_func("Oops. Incorrect city. Please type correct city name.");
                temp++;
            }
        }while(temp != 0);
        fflush(stdin);
    }
    ~aiva_safe_city_identifier()
    {
        cout<<""<<endl;
    }
};
class aiva_online_search{
private:
    string f_word;
public:
    aiva_online_search()
    {

    }
    void online_search()//online search
    {
        string query;
        cout<<endl;
        cout<<" --SOUTH AFRICAN GOVERNMENT PERSONAL ARTIFICIAL INTELLIGENCE VIRTUAL ASSISTANT:::"<<endl;
        cout<<endl;
        cout<<" --WEB BROWSER:::"<<endl;
        cout<<endl;
        a.type_n_speak_func("SEARCH ANYTHING ONLINE::");
        cout<<"\n\n\n"<<endl;
        a.type_n_speak_func("                           Type Your Search Here.");
        cout<<"\n"<<endl;
        cout<<" SEARCH HERE----------->"<<endl;
        cout<<endl;
        cin>>f_word;
        getline(cin, query);
        query = f_word + query;
        for (int i = 0; query[i] != '\0'; i++)
        {
            if (query[i] == ' ')
            query[i] = '+';
        }
        Sleep(200);
        system("cls");
        system("ipconfig");//call function for showing ip configurations
        cout<<endl;
        a.type_n_speak_func("All protocols are secured...");
        a.speak_func("Connecting to your browser.");
        string url;
        url = "start https://www.google.com/search?q=";//store google search adress in url string
        url += query;//add search query at the end of url ink to search automatically
        system(string(url).c_str());//call windows function for accessing windows applications by passing string as reference
        cout<<"\n\n\n"<<endl;
        system("PAUSE");
        system("CLS");
    }
    ~aiva_online_search()
    {

    }
};
class aiva_questions{
private:
    FILE *fl;//create file object
    int p;
    string str, line, word, temp_str, filename1 = "C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/Questions_data_Original.csv", filename2 = "C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/Answers_data_Original.csv";
protected:

public:
    struct knowledge
    {
        string questions, questions_compare;
    };
    struct knowledge obj_knowledge[999];
    aiva_questions()
    {

    }
    void copiedQuestions(string text_question, vector<vector<string>> content, vector<string> row, int temp)
    {
        //Store Current Question Input
        fstream file1("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/Questions_data_Original.csv", ios::in);
        if(file1.is_open())
        {
            while(getline(file1, line))
            {
                row.clear();
                stringstream str(line);
                while(getline(str, word, ','))
                    row.push_back(word);

                content.push_back(row);
            }
        }
        else
        {
            system("color 6");
            cout<<"\n\n\n\t\t\t<<<<<<<<<<<<<<            ...Accessing   Data   Files...             >>>>>>>>>>>>>>>\n";
            Sleep(2000);
            system("CLS");
            file1.close();
        }
        cout<<endl;
        p = 0;
        for(int i = 0; i < temp; i++)
        {
            obj_knowledge[p].questions_compare = content[i][0];
            cout<<obj_knowledge[p].questions_compare;
            cout<<"\n\n copied question input " <<p<< " in struct record question compare \n\n"<<endl;
            p++;
        }
        obj_knowledge[p].questions_compare = text_question;
        cout<<obj_knowledge[p].questions_compare;
        cout<<"\n\n copied question input " <<p<< " in struct record question compare \n\n"<<endl;
        content.clear();
        file1.close();
        remove("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/Questions_data_Original.csv");
    }
    void storedQuestions(string text_question, int temp)
    {
        //Questions input Excel file
        ofstream myExcelFile1;
        myExcelFile1.open(filename1);//open and write csv data file
        for(int i=0; i < temp; i++)
        {
            myExcelFile1 << obj_knowledge[i].questions_compare <<endl;// Send data to the stream
        }
        myExcelFile1 << text_question <<endl;// Send data to the stream
        myExcelFile1.close();// Close the file
        cout<<"\n\n Struct record question inputs stored succesfully. "<<endl;
    }
    void storedCurrentQuestion(string text_question)
    {
        //Questions input Excel file
        ofstream myExcelFile1;
        myExcelFile1.open(filename1);//open and write csv data file
        myExcelFile1 << text_question <<endl;// Send data to the stream
        myExcelFile1.close();// Close the file
        cout<<"\n\n New struct record question inputs stored succesfully. "<<endl;
    }
    ~aiva_questions()
    {

    }
};
class aiva_answers{
private:
    FILE *fl;//create file object
    int p;
    string str, line, word, temp_str, response, filename2 = "C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/Answers_data_Original.csv";
protected:
public:
    struct knowledge
    {
        string answers, answers_compare;
    };
    struct knowledge obj_knowledge[999];
    aiva_answers()
    {

    }
    void copiedAnswers(string text_answer, vector<vector<string>> content, vector<string> row, int temp)
    {
        //Store Current Answer Input
        fstream file2("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/Answers_data_Original.csv", ios::in);
        if(file2.is_open())
        {
            while(getline(file2, line))
            {
                row.clear();
                stringstream str(line);
                while(getline(str, word, ','))
                    row.push_back(word);

                content.push_back(row);
            }
        }
        else
        {
            system("color 6");
            cout<<"\n\n\n\t\t\t<<<<<<<<<<<<<<            ...Accessing   Data   Files...             >>>>>>>>>>>>>>>\n";
            Sleep(2000);
            system("CLS");
            file2.close();
        }
        cout<<endl;
        p = 0;
        for(int i = 0; i < temp; i++)
        {
            obj_knowledge[p].answers_compare = content[i][0];
            cout<<obj_knowledge[p].answers_compare;
            cout<<"\n\n copied answer input " <<p<< " in struct record answer compare \n\n"<<endl;
            p++;
        }
        obj_knowledge[p].answers_compare = text_answer;
        cout<<obj_knowledge[p].answers_compare;
        cout<<"\n\n copied answer input " <<p<< " in struct record answer compare \n\n"<<endl;
        content.clear();
        file2.close();
        remove("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/Answers_data_Original.csv");
    }
    void storedAnswers(string text_answer, int temp)
    {
        //Answers input Excel file
        ofstream myExcelFile2;
        myExcelFile2.open(filename2);//open and write csv data file
        for(int i=0; i<temp; i++)
        {
            myExcelFile2 << obj_knowledge[i].answers_compare <<endl;// Send data to the stream
        }
        myExcelFile2 << text_answer <<endl;// Send data to the stream
        myExcelFile2.close();// Close the file
        cout<<"\n\n Struct record answer inputs stored succesfully. "<<endl;
    }
    void storedCurrentAnswer(string text_answer)
    {
        //Answers input Excel file
        ofstream myExcelFile2;
        myExcelFile2.open(filename2);//open and write csv data file
        myExcelFile2 << text_answer <<endl;// Send data to the stream
        myExcelFile2.close();// Close the file
        cout<<"\n\n New struct record answer inputs stored succesfully. "<<endl;
    }
    ~aiva_answers()
    {

    }
};
class aiva_QnA{
private:
    FILE *fl;//create file object
    int logic1 = 0, p, x, m;
    string a_compare, q_compare, a_store, q_store, str, line, word, temp_str_QnA, temp_str_q, temp_str_a, response, filename = "C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/QnA_data_Original.csv";
    aiva_questions obj_questions;
    aiva_answers obj_answers;
protected:
public:
    aiva_QnA()
    {
    }
    void copiedQnA(vector<vector<string>> content, vector<string> row, int temp)
    {
        //Store Current Questions & Answers
        fstream file("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/QnA_data_Original.csv", ios::in);
        if(file.is_open())
        {
            while(getline(file, line))
            {
                row.clear();
                stringstream str(line);
                while(getline(str, word, ','))
                    row.push_back(word);

                content.push_back(row);
            }
        }
        else
        {
            system("color 6");
            cout<<"\n\n\n\t\t\t<<<<<<<<<<<<<<            ...Accessing   Data   Files...             >>>>>>>>>>>>>>>\n";
            Sleep(2000);
            system("CLS");
            file.close();
        }
        cout<<endl;
        p = 0;
        for(int i = 0; i < temp; i++)
        {
            unsigned int t = -1;
            x = m = 0;
            temp_str_QnA = content[i][1] + ", " + content[i][2];
            temp_str_q = content[i][1];
            for(unsigned int k=1; k<temp_str_QnA.length()+2; k++)
            {
                if(k == 1)
                {
                    for(unsigned int v=1; v<temp_str_q.length(); v++)
                    {
                        q_compare = q_compare + temp_str_q[v];
                    }
                    cout<<"Questions: "<<q_compare<<endl;
                }
                if(q_compare[x] == temp_str_QnA[k])
                {
                    q_store = q_store + temp_str_QnA[k];
                    x++;
                }
                if(temp_str_q[k] == '?' && q_store == q_compare)
                {
                    k = k + 2;
                    t = k;
                    logic1 = 1;
                    obj_questions.obj_knowledge[p].questions = q_store;
                    cout<<q_store;
                    cout<<"\n\n Struct record QnA  Question "<<p<<" copied succesfully. \n\n"<<endl;
                }
                if(k == t)
                {
                    temp_str_a = content[i][2];
                    for(unsigned int v=1; v<temp_str_a.length(); v++)
                    {
                        a_compare = a_compare + temp_str_a[v];
                    }
                    cout<<"Answers: "<<a_compare<<"\n"<<endl;
                }
                if(a_compare[m] == temp_str_QnA[k] && logic1 == 1)
                {
                    a_store = a_store + temp_str_QnA[k];
                    m++;
                }
                if(temp_str_QnA[k] == '.' && a_store == a_compare)
                {
                    obj_answers.obj_knowledge[p].answers = a_store;
                    cout<<a_store;
                    cout<<"\n\n Struct record QnA  Answer "<<p<<" copied succesfully. \n\n"<<endl;
                    break;
                }
            }
            q_compare = a_compare = q_store = a_store = "";
            logic1 = 0;
            p++;
        }
        content.clear();
        file.close();
        remove("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/QnA_data_Original.csv");
    }
    void storedQnA(string text_question, string text_answer, int temp)
    {
        //Q n A Excel file
        ofstream myExcelFile;
        myExcelFile.open(filename);//open and write csv data file
        //myExcelFile << "ID" << ", " << "QUESTIONS" << ", " << "ANSWERS" <<endl;// Send data to the stream
        for(int i=0; i<temp; i++)
        {
            myExcelFile << i << ", " << obj_questions.obj_knowledge[i].questions << ", " << obj_answers.obj_knowledge[i].answers <<endl;// Send data to the stream
        }
        myExcelFile << temp << ", " << text_question << ", " << text_answer <<endl;// Send data to the stream
        myExcelFile.close();// Close the file
        cout<<"\n\n Struct record QnA inputs stored succesfully. "<<endl;
    }
    void storedCurrentQnA(string text_question, string text_answer, int temp)
    {
        //Q n A Excel file
        ofstream myExcelFile;
        myExcelFile.open(filename);//open and write csv data file
        myExcelFile << temp << ", " << text_question << ", " << text_answer <<endl;// Send data to the stream
        myExcelFile.close();// Close the file
        cout<<"\n\n New struct record QnA inputs stored succesfully. "<<endl;
    }
    ~aiva_QnA()
    {
    }
};
class aiva_response{
private:
    int logic = 0, logic1 = 0, x;
    string temp_text_question, str, line, word, temp_str_r, temp_response, response;
protected:
public:
    aiva_response()
    {
    }
    int outputQnA(vector<vector<string>> content, vector<string> row, string text_question)
    {
        logic = logic1 = 0;
        fstream file("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (csv)/QnA_data_Original.csv", ios::in);
        if(file.is_open())
        {
            while(getline(file, line))
            {
                row.clear();
                stringstream str(line);
                while(getline(str, word, ','))
                    row.push_back(word);

                content.push_back(row);
            }
        }
        else
        {
            system("color 6");
            cout<<"\n\n\n\t\t\t<<<<<<<<<<<<<<            ...Accessing   Data   Files...             >>>>>>>>>>>>>>>\n";
            Sleep(2000);
            system("CLS");
            content.clear();
            file.close();
        }
        cout<<endl;
        for(unsigned int i = 0; i < content.size(); i++)
        {
            temp_str_r = content[i][1] + content[i][2];
            for(unsigned int k = 0; k < temp_str_r.length()+1; k++)
            {
                if(text_question[x] == temp_str_r[k])
                {
                    temp_text_question = temp_text_question + temp_str_r[k];
                    x++;
                }
                if(text_question[x-1] == '?' && temp_text_question == text_question)
                {
                    logic1 = 1;
                }
                if(text_question[x-1] == '?' && logic1 == 1)
                {
                    k = k + 2;
                    for(unsigned int z = k; z < temp_str_r.length(); z++)
                    {
                        temp_response = temp_response + temp_str_r[z];
                    }
                    for(unsigned int y = 0; y<temp_response.length(); y++)
                    {
                        if(temp_response[y] != '\0')
                        {
                            response = response + temp_response[y];
                        }
                    }
                    system("CLS");
                    cout<<endl;
                    cout<<"Processing Speech Answer..............\n"<<endl;
                    a.type_n_speak_func(response);
                    logic = 1;
                    cout<<"\n\n"<<endl;
                    break;
                }
            }
            temp_text_question = temp_response = response = "";
            logic1 = x = 0;
            if(logic == 1)
            {
                content.clear();
                file.close();
                return logic;
            }
        }
        content.clear();
        file.close();
        return logic;
        cout<<"\n";
    }
    ~aiva_response()
    {
    }
};
class aiva_ask_me_anything{
private:
    aiva_questions obj_questions;
    aiva_answers obj_answers;
    aiva_QnA obj_QnA;
    aiva_response obj_response;
    FILE *fk, *fl;//create file object
    int logic = 0, temp = 0, p, x, m;
    string f_word, text_question, temp_text_question, text_answer, str, line, word, temp_str, response;
    struct logic
    {
        int counter = 0;
    };
    struct logic obj_logic;
protected:
public:
    vector<vector<string>> content;
    vector<string> row;
    aiva_ask_me_anything()
    {

    }
    void ask()
    {
        do
        {
            cout<<"\n"<<endl;
            cout<<" --SOUTH AFRICAN GOVERNMENT PERSONAL ARTIFICIAL INTELLIGENCE VIRTUAL ASSISTANT:::"<<endl;
            cout<<endl;
            fl=fopen("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Logic (txt)/logic_data.txt", "rb");//Open and read File
            if(fl)
            {
                while(fread(&obj_logic, sizeof(obj_logic), 1, fl))
                {
                    system("CLS");
                    cout<<" --KNOW it ALL DEEP LEARNING SERVICE                                       Total Questions in Database: "<<obj_logic.counter<<endl;
                    temp = obj_logic.counter;
                }
                fclose(fl);//Close File
            }
            else
            {
                error_message();
            }
            cout<<endl;
            a.type_n_speak_func("ASK ME ANYTHING, YOU WANT TO KNOW? Start by typing aiva first.");
            cout<<"\n"<<endl;
            cout<<"                                 Start by typing aiva first."<<endl;
            cout<<"\n"<<endl;
            cout<<"  ____________________________________________________________________________________________________________"<<endl;
            cout<<"     ";
            cin>>f_word;
            getline(cin, text_question);
            cout<<"  _____________________________________________________________________________________________________________"<<endl;
            cout<<"\n\n"<<endl;
            if(temp >= 1)
            {
                logic = obj_response.outputQnA(content, row, text_question);//Output Result From Excel File
            }
            if(logic == 0)
            {
                cout<<"Processing Speech Query..............\n"<<endl;
                a.type_n_speak_func(" --OOPS!!!... THAT IS NOT IN MY KNOWLEDGE. PLEASE ENTER THE ANSWER FOR YOUR QUESTION IN ORDER TO MAKE ME BETTER");
                cout<<"\n"<<endl;
                cin>>f_word;
                getline(cin, text_answer);
                text_answer = f_word + text_answer;
                if(temp >= 1)
                {
                    obj_questions.copiedQuestions(text_question, content, row, temp);
                    obj_answers.copiedAnswers(text_answer, content, row, temp);
                    obj_QnA.copiedQnA(content, row, temp);
                    obj_QnA.storedQnA(text_question, text_answer, temp);
                    obj_questions.storedQuestions(text_question, temp);
                    obj_answers.storedAnswers(text_answer, temp);
                }
                else
                {
                    obj_QnA.storedCurrentQnA(text_question, text_answer, temp);
                    obj_questions.storedCurrentQuestion(text_question);
                    obj_answers.storedCurrentAnswer(text_answer);
                }
                fl=fopen("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Logic (txt)/logic_data.txt", "ab");//Open and write File
                if(fl)
                {
                    obj_logic.counter++;
                    fflush(stdin);
                    fwrite(&obj_logic, sizeof(obj_logic), 1, fl);//Close File
                    fclose(fl);
                }
                else
                {
                    error_message();
                }
            }
            cout<<"Processing Results..............\n"<<endl;
            a.type_n_speak_func(" THANK YOU!!!!!");
            cout<<"\n"<<endl;
            system("PAUSE");
            system("CLS");
        }while(text_question != " exit");
    }
    void error_message()
    {
        system("color 6");
        cout<<"\n\n\n\t\t\t\t\t\t<<<<<<<<<<<<<< REFRESHING >>>>>>>>>>>>>>>\n";
        Sleep(2000);
        system("CLS");
        fclose(fl);//Close File
    }
    void error_message1()
    {
        system("color 6");
        cout<<"\n\n\n\t\t\t\t\t\t<<<<<<<<<<<<<< REFRESHING >>>>>>>>>>>>>>>\n";
        Sleep(2000);
        system("CLS");
        fclose(fk);//Close File
    }
    void error_message2()
    {
        system("color 6");
        cout<<"\n\n\n\t\t\t\t\t\t<<<<<<<<<<<<<< PROGRAM DID NOT OPEN PROPERLY --------- RESTARTING >>>>>>>>>>>>>>>\n";
        Sleep(2000);
        system("CLS");
        fclose(fk);
        return;
    }
    ~aiva_ask_me_anything()
    {
    }
};
class aiva_menu{
private:
    aiva_safe_city_identifier obj;
    aiva_online_search obj1;
    aiva_ask_me_anything obj2;
    char option;
public:
    aiva_menu()
    {

    }
    void display()
    {
        do
        {
            system("CLS");
            system("color b");//color font
            cout<<" --SOUTH AFRICAN GOVERNMENT PERSONAL ARTIFICIAL INTELLIGENCE VIRTUAL ASSISTANT:::"<<endl;
            cout<<endl;
            cout<<" --SOUTH AFRICA'S TOP UNSAFE CITY'S INTELLIGENCE LOCATOR:::"<<endl;
            cout<<"\n"<<endl;
            cout<<"  1 - IDENTIFY IF YOUR CITY IS UNSAFE IN SOUTH AFRICA.\n"<<endl;;
            cout<<"  2 - SHOW TOP UNSAFE CITY'S IN SOUTH AFRICA.\n"<<endl;
            cout<<"  3 - SEARCH ONLINE.\n"<<endl;
            cout<<"  4 - ASK AIVA ANYTHING. (DEEP LEARNING)\n"<<endl;
            a.speak_func("ENTER OPTION NUMBER BELOW");
            cout<<" -------ENTER OPTION # HERE------                                           PRESS 9 TO EXIT\n"<<endl;
            cin>>option;
            cout<<"\n"<<endl;
            switch(option)
            {
            case '1':
                system("CLS");
                obj.survey();//input survey
                break;
            case '2':
                system("CLS");
                obj.show_citys();//show top poor cities in order
                break;
            case '3':
                system("CLS");
                obj1.online_search();//search the web
                break;
            case '4':
                system("CLS");
                obj2.ask();//get knowledge or store knowledge
                break;
            case '9':
                system("PAUSE");
                system("CLS");
                exit(1);//exit function
                break;
            default:
                a.type_n_speak_func("SORRY. PLEASE ENTER CORRECT OPTION NUMBER.");
                cout<<"\n\n"<<endl;
                break;
            }
        }while(option != '9');
    }
    ~aiva_menu()
    {

    }
};
class aiva_security{
private:
    string text_username, text_password;
    struct users
    {
        string username, password;
    };
    struct users rec[1000];
public:
    aiva_security()
    {
        rec[0].username = "KKAY.MUDAU";
        rec[0].password = "OHLord.01";
        cout<<"\n\n\n"<<endl;
        system("color f");
        cout<<"\t\t\t <<<<<<<<<<<<<<<<             WELCOME   TO   BLACKKARMAHOLYSPIRIT   Inc.              >>>>>>>>>>>>>>>\n\n"<<endl;
        Sleep(3000);
        /*do
        {
            system("CLS");
            system("color e");//color font
            cout<<"\n\n\n\n"<<endl;
            cout<<"\t\t\t\t\t\t\t <<<<<< --LOGIN DETAILS-- >>>>>>"<<endl;
            cout<<"\n\t\t\t\t\t\t ENTER USERNAME: ";
            cin>>text_username;
            cout<<endl;
            cout<<"\n\t\t\t\t\t\t ENTER PASSWORD: ";
            cin>>text_password;
            cout<<endl;
            for(int i=0; i<1000; i++)
            {
                if(text_username == rec[i].username && text_password == rec[i].password)
                    break;
            }
        }while(text_username != rec[i].username && text_password != rec[i].password );*/
        system("CLS");
    }
    void welcome_message()
    {
        system("color b");
        cout<<"\n\n\n\n\n\n\t\t\t <<<<<<<<<<<<<<                     ...SUCCESSFUL LOGIN...                      >>>>>>>>>>>>>>>\n\n"<<endl;
        Sleep(3000);
        system("CLS");
        system("color 6");
        a.welcome_msg();//call welcome function from assistant class
        cout<<"\n\n\n\n\n\n\t\t\t <<<<<<<<<<<<<<            ...STARTING   APPLICATION   PLEASE WAIT...           >>>>>>>>>>>>>>>\n\n"<<endl;
        Sleep(3000);
    }
    ~aiva_security()
    {
        cout<<""<<endl;
    }
};
int main()
{
    aiva_security obj;
    aiva_menu obj1;

    obj.welcome_message();
    obj1.display();
    return 0;
}
