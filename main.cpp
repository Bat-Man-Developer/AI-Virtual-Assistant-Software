#include "assistant.h"
using namespace std;
assistant a; //create object for assistance header to call functions
class app{
private:
    FILE *fc, *fk, *fl;//create file object
    int counter_t = 0, logic, logic1, temp = 0, i, x;
    string city, text_question, temp_text_question, text_answer, f_word, str, text_username, text_password, line, word, temp_str, response, xlsx = ".csv", filename;
    vector<vector<string>> content;
    vector<string> row;
    struct users
    {
        string username, password;
    };
    struct users rec[1000];
    struct knowledge
    {
        string questions, answers, *ptr_q1, *ptr_a1;
    };
    struct knowledge obj1[999];
    struct unsafe_citys
    {
        int counter = 0, j = 0, joburg_c = 0, capetown_c = 0, durban_c = 0, pretoria_c = 0, bloemfontein_c = 0, gqeberha_c = 0, eastlondon_c = 0, vereeniging_c = 0, pietermaritzburg_c = 0, polokwane_c = 0, kimberley_c = 0, soweto_c = 0, mbombela_c = 0, welkom_c = 0, benoni_c = 0, carletonville_c = 0, makhanda_c = 0, upington_c = 0, klerksdorp_c = 0, potchefstroom_c = 0, newcastle_c = 0, mosselbay_c = 0, mahikeng_c = 0, thohoyandou_c = 0, volksrust_c = 0, oudtshoorn_c = 0, warrenton_c = 0, mthatha_c = 0, brits_c = 0, kroonstad_c = 0, ulundi_c = 0, aliwalnorth_c = 0, barklywest_c = 0, tembisa_c = 0, alberton_c = 0, bethal_c = 0, vryburg_c = 0, vanderbijlpark_c = 0, bisho_c = 0, rustenburg_c = 0, qonce_c = 0, mokopane_c = 0, balfour_c = 0, louistrichardt_c = 0, theunissen_c = 0, kwadukuza_c = 0, ladybrand_c = 0, sasolburg_c = 0,jankempdorp_c = 0, brakpan_c = 0, stutterheim_c = 0, saftey1 = 0, saftey2 = 0, saftey3 = 0, saftey4 = 0, saftey5 = 0, saftey6 = 0, saftey7 = 0, saftey8 = 0, saftey9 = 0, saftey10 = 0, saftey11 = 0, saftey12 = 0, saftey13 = 0, saftey14 = 0, saftey15 = 0, saftey16 = 0, saftey17 = 0, saftey18 = 0, saftey19 = 0, saftey20 = 0, saftey21 = 0, saftey22 = 0, saftey23 = 0, saftey24 = 0, saftey25 = 0, saftey26 = 0, saftey27 = 0, saftey28 = 0, saftey29 = 0, saftey30 = 0, saftey31 = 0, saftey32 = 0, saftey33 = 0, saftey34 = 0, saftey35 = 0, saftey36 = 0, saftey37 = 0, saftey38 = 0, saftey39 = 0, saftey40 = 0, saftey41 = 0, saftey42 = 0, saftey43 = 0, saftey44 = 0, saftey45 = 0, saftey46 = 0, saftey47 = 0, saftey48 = 0, saftey49 = 0, saftey50 = 0, saftey51 = 0;
    };
    struct unsafe_citys obj;
protected:
public:
    app()//Constructor
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
        for (i = 0; query[i] != '\0'; i++)
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
    void ask()
    {
    do
    {
        filename = "C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Pool (xlsx)/QnA_data_";
        cout<<"\n"<<endl;
        cout<<" --SOUTH AFRICAN GOVERNMENT PERSONAL ARTIFICIAL INTELLIGENCE VIRTUAL ASSISTANT:::"<<endl;
        cout<<endl;
        fl=fopen("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Logic (txt)/logic_data.txt", "rb");//Open and read File
        if(fl)
        {
            while(fread(&obj, sizeof(obj), 1, fl))
            {
                system("CLS");
                cout<<" --KNOW it ALL DEEP LEARNING SERVICE                                       Total Questions in Database: "<<obj.counter<<endl;
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
        cin>>text_question;
        getline(cin, text_question);
        cout<<"  _____________________________________________________________________________________________________________"<<endl;
        cout<<"\n\n"<<endl;
        logic = 0;
        i = 0;
        fstream file("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Source (xlsx)/QnA_data_Original.csv", ios::in);
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

        for(unsigned int i = 1; i < content.size(); i++)
        {
            for(unsigned int j = 0; j < content[i].size(); j++)
            {
                temp_str = content[i][j];
                for(unsigned int k = 0; k < temp_str.length(); k++)
                {
                    if(text_question[x] == temp_str[k])
                    {
                        temp_text_question = temp_text_question + temp_str[k];
                        x++;
                    }
                    if(temp_str[k] == '?' && temp_text_question == text_question)
                    {
                        logic1 = 1;
                    }
                    if(temp_str[k] == '?' && logic1 == 1)
                    {
                        k = k + 2;
                        for(unsigned int z = k; z < temp_str.length(); z++)
                        {
                            response = response + temp_str[z];
                        }
                        system("CLS");
                        cout<<endl;
                        cout<<"Processing Speech Answer..............\n"<<endl;
                        a.type_n_speak_func(response);
                        logic = 1;
                        break;
                    }
                }
                temp_text_question = "";
                response = "";
                logic1 = 0;
                x = 0;
                if(logic == 1)
                    break;
            }
            cout<<"\n";
        }
        if(logic == 0)
        {
            fl=fopen("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Logic (txt)/logic_data.txt", "rb");//Open and read File
            if(fl)
            {
                while(fread(&obj, sizeof(obj), 1, fl))
                {
                    temp = obj.counter;
                }
                fclose(fl);//Close File
            }
            else
            {
                error_message();
            }
            cout<<"Processing Speech Query..............\n"<<endl;
            a.type_n_speak_func(" --OOPS!!!... THAT IS NOT IN MY KNOWLEDGE. PLEASE ENTER THE ANSWER FOR YOUR QUESTION IN ORDER TO MAKE ME BETTER");
            cout<<"\n"<<endl;
            cin>>f_word;
            getline(cin, text_answer);
            text_answer = f_word + text_answer;
            stringstream ss;
            ss << obj.j;
            str = ss.str();
            filename = filename + str + xlsx;
            ofstream myExcelFile;
            myExcelFile.open(filename);//open and write xlsx data file
            myExcelFile << obj.j << ", " << text_question << ", " << text_answer <<endl;// Send data to the stream
            myExcelFile.close();// Close the file
            filename = "";
            fl=fopen("C:/Users/kkaym/OneDrive/Desktop/Codeblocks Projects/AIVA pro/Data Management/QnA Data Logic (txt)/logic_data.txt", "ab");//Open and write File
            if(fl)
            {
                obj.j++;
                fflush(stdin);
                obj.counter = obj.j;
                fflush(stdin);
                fwrite(&obj, sizeof(obj), 1, fl);//Close File
                fclose(fl);
            }
            else
            {
                error_message();
            }
        }
        Sleep(2000);
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
    ~app()
    {
        for(int i = 0; i < obj.counter; i++)
        {
            delete obj1[i].ptr_q1;
            delete obj1[i].ptr_a1;
        }
    }
};
int main()
{
    app obj;//declare class object
    char option;
    system("color b");
    cout<<"\n\n\n\n\n\n\t\t\t <<<<<<<<<<<<<<                     ...SUCCESSFUL LOGIN...                      >>>>>>>>>>>>>>>\n\n"<<endl;
    Sleep(3000);
    system("CLS");
    system("color 6");
    a.welcome_msg();//call welcome function from assistant class
    cout<<"\n\n\n\n\n\n\t\t\t <<<<<<<<<<<<<<            ...STARTING   APPLICATION   PLEASE WAIT...           >>>>>>>>>>>>>>>\n\n"<<endl;
    Sleep(3000);
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
            obj.online_search();//search the web
            break;
        case '4':
            system("CLS");
            obj.ask();//get knowledge or store knowledge
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
    return 0;
}
