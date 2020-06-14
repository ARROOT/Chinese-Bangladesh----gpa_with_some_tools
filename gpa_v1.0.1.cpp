#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <cmath>
#include <fstream>
#include <iomanip>
#define co     SetConsoleTextAttribute
#define lo     GetStdHandle
#define rr     STD_OUTPUT_HANDLE
#define logo   cout<<"\t\t\t\t.       .\n"<<"\t\t\t\t|\\_____/|\n"<<"\t\t\t\t \\* | */\n"<<"\t\t\t\t  \\ ! /\n"<<"\t\t\t\t   \\_/\n"
#define ul     cout<<"\n\t\t\t"<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<"###"<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<'\n'
#define lock   cout<<"\n\t\t\t\t\t   @*@\n"<<"\t\t\t\t\t  @   @\n"<<"\t\t\t\t\t@@@@@@@@@\n"<<"\t\t\t\t\t@@@@.@@@@\n"<<"\t\t\t\t\t@@@[|]@@@\n"<<"\t\t\t\t\t@@@@@@@@@"
#define ulock  cout<<"\n\n\n\n\t\t\t\t\t   @*@\n"<<"\t\t\t\t\t  @   @\n"<<"\t\t\t\t\t      @\n"<<"\t\t\t\t\t@@@@@@@@@\n"<<"\t\t\t\t\t@@@@.@@@@\n"<<"\t\t\t\t\t@@@[/]@@@\n"<<"\t\t\t\t\t@@@@@@@@@"
int main();int gpain();int login();int record();int xrecord();int sw();int qr();void print();void show();void comment();void ntog();void registerin();void loginin();
using namespace std;  int R=0, fix, scode=0; char b=219, a=220; char encrypt[200];
  struct data
  { float point=0, credit=0, mark=0, tmark=0, fgpa=0, sum=0, tot=0, totCr=0, gpa=0, topo=0;
    string say, encsubname, smstr;
    int q, i, save=0, fline=0, ec=2, ccount=0, x=1; }d;
  struct info
  { string lname,  lpassword,  rname,  remail,  rpassword,  sname,  spassword, semail, y;
    int su=0, sp=0, logfail=0; }da;
  struct pdata
  {  float point=0, credit=0, mark=0, cm=0; int dc=2;
     string semester, getsemester, subname, say; int file; }dd;
int again() //Index_animation///////////////////////////////
{
                system("cls");system("color 3");
                cout<<"\n\n\n\t\t\t press | 1 | to return menu ";
                cout<<"\n\n\t\t\t press | 0 | to Exit";
                cout<<"\n\n\t\t\t press >>";
                char z=getch();
                switch (z)
                {
                case '1':
                   return main();
                case '0':
                    system("cls");  ExitProcess (0);
                default:
                    return again();
                }
                getch(); return again();
            }
void loading() //LOADING_FUNCTION///////////////////////////
{
 system("cls"); cout<<"\n\n\n\t\t\t\t\tPlease wait\n\n";
             char a=176, b=219;
             cout<<"\t\t\t\t\t";
             for (int i=0;i<=20;i++)
             cout<<a;  cout<<"\r";   cout<<"\t\t\t\t\t";
              for (int i=0;i<=20;i++)
             {
                 Sleep(10); cout<<b;
             }
            system("cls");
}
int mai( char pass[200] )  ///////////Encryption////////////
{
              int y,z,e=0;  scode=strlen(pass);
              if(scode<31)
              {
                z=((scode)*3);  pass[z]='\0';
                for(int i=0; i<scode+1; i++)
                    {
                        for(int j=(i*3); j<=(i*3+2); j++)
                            {
                            if((int)pass[i]<96)
                            {
                                if(e==0){
                                    encrypt[j]=pass[i]+scode; e++; scode--;
                                }
                                else if(e==1){
                                    encrypt[j]=pass[i]+(5+scode); e++;
                                }
                                else{
                                    encrypt[j]=pass[i]+(scode-3); e=0;
                                }
                            }
                            if((int)pass[i]>96)
                            {
                                if(e==0){
                                    encrypt[j]=pass[i]-scode; e++; scode++;
                                }
                                else if(e==1){
                                    encrypt[j]=pass[i]-(5+scode); e++;
                                }
                                else{
                                    encrypt[j]=pass[i]-(9+scode); e=0;
                                }   }   }   }
                    encrypt[z]='\0';  y=strlen(encrypt);  pass=encrypt;  }
}
int cgpa()//////////////////////cgpa////////////////////////
{
                system("cls");  int l;
                cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
                cout<<"How many semester results do you want input? :";  cin>>l;
                cout<<"\n\n"<<endl;  float semrs[l];
                for(int i=0;i<l;i++)
                {
                    cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
                    cin>>semrs[i];
                    cout<<"\n"<<endl;
                }
                float semtot=0;
                for(int j=0;j<l;j++)
                {
                    semtot=semtot+semrs[j];
                }
                cout<<"******** Your CGPA is "<<semtot/l<<" **********"<<endl;
          sub:  cout<<"\n\n\n\t\t1. Calculate Again"<<endl;
                cout<<"\t\t2. Go Back to Main Menu"<<endl;
                cout<<"\t\t3. Exit This App \n\n"<<endl;
                cout<<"\t\t Your Input: ";
                char inmenu=getch();
                switch(inmenu)
                {
                    case '1':
                            return cgpa();
                    case '2':
                            return main();
                    case '3':
                            return again();
                    default:
                          cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
                          goto sub;
                }  getch();
            }
int gpa()///////////////////////gpa/////////////////////////
{
    system("cls");  co(lo(rr), 11); fix=0;
    std::cout<<"\n\t\t\t-------------- GPA Calculating -----------------"<<endl;
    std::cout << "\t\t\t\tAccording to Chinese GPA system " ; ul;
    std::cout<< "\n\n\t\t1. Calculate G.P.A   *[option to save record]*\n"
             << "\t\t___________________________________________";
    std::cout<< "\n\t\t2. Calculate C.G.P.A\n"
             << "\t\t___________________________________________";
    std::cout<< "\n\t\t9. Return main menu \n"
             << "\t\t___________________________________________\n";
    std::cout<<"\t\t:> ";     char ch=getch();
    switch (ch) {
      case '1':
                while(1){
            come: system("cls");
            std::cout << "\n\n\n\n\n\t\t 1. Just calculate don't save record" <<'\n'
                      << "\t\t___________________________________________";
            std::cout << "\n\t\t 2. Calculate and [save record]" << '\n'
                      << "\t\t___________________________________________";
            std::cout << "\n\t\t 0. BACK" << '\n'
                      << "\t\t___________________________________________"
                      << "\n\t\t :> ";  char ch1=getch();
                      switch (ch1) {
                        case '1':
                            d.save=0;  gpain();  break;
                        case '2':
                          if (R==1)
                            {
                              d.save=1;  gpain();
                            }
                            else{
                              system("cls"); std::cerr << "\n\n\t\t To save data Log in first" << '\n'; Sleep(1000);
                              return login();
                            }
                            break;
                        case '0':  return gpa();
                        default:
                          system("color 4");
                          std::cout << "\t\t Wrong choice " << '\n';  goto come; Sleep(500);
                    }getch(); ///////////////
                  }
     case '2':
            cgpa();
            break;
     case '9':
            return main();
     default:
            system("color 4");
            std::cout << "\t\t Wrong choice " << '\n';
            return gpa(); Sleep(500);
    }getch();////////////
   return gpa();
}
void pnt() //////////////////point//////////////////////////
{
            d; inp: if(d.save==1) { if(d.x==1){cout<<"\n\t\t\t      Subject name's length should be >2-10<\n"; d.x++; }
            co(lo(rr), 3);                                                        string fake; getline(cin, fake);
            std::cout << "\n\t\t\t\t enter name of subject "<<d.i+1<<" : ";  co(lo(rr), 11);
            getline(cin, d.encsubname);
            std::cout << "\t\t\t\t         ______________" << '\n';
            std::cout << "\t\t\t\t\t  ---"<<d.encsubname<<"---";  }
            if(d.save!=1){
                cout<<"\n\t\t\t **Don't need subject name hare\n";
            }
               std::cout << "\n\t\t  ______________________________________________" << '\n';
               std::cout << "\t\t | Enter mark of subject     "<<d.i+1<<"  |   "; std::cin >> d.mark;
               std::cout << "\t\t |______________________________|_______________|"<<"\n";
            if (d.mark>100 || d.mark<0) {
                system("cls"); co(lo(rr), 4);
                std::cout << "\t\t\t\t  invalid mark of "<<d.encsubname<<" put it again. "<< '\n'; co(lo(rr), 11);
                goto inp;
              }
}
void crd() /////////////////credit//////////////////////////
{

    d;    std::cout << "\t\t | Enter credit of subject   "<<d.i+1<<"  |   ";std::cin >> d.credit;
            std::cout << "\t\t |______________________________|_______________|" << '\n';ntog(); comment(); std::cout <<fixed;
cout<<setprecision(2) << "\t\t            | subject comment   |"<<d.point<<"|"<<d.say<<" |\n";
            std::cout << "\t\t            |___________________|____|__________|" << '\n';
}
int gpain()///////////////////gpain/////////////////////////
{
          d; system("cls"); d.fline=0;
          if (d.save==1) {
                std::cout << "\n\n\t\t\t Enter your semester name should be like\n\t\t\t\t[winter2019] [spring2019]\n\t\t"
            <<"And you should remember this name for checking record"
            << "\n\t\t"<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a
                       <<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<'\n';
            }
            if(d.ccount>=1){ string fake; std::cout << "\n\n\t\t\t  Click enter to continue......."; getline(cin, fake); d.ccount=0; return gpain();}
            std::cout << "\n\n\t\t Enter semester name :> "; getline(cin, d.smstr);
            if (d.save==1) {
                ifstream onecheck("record.dat", ios::in);
                if(!onecheck.is_open())
                {
                    co(lo(rr), 4);  cerr<<"\n\t\t fail to open record file\n";  return gpa();
                }
                string semesterchk;
                while(!onecheck.eof())
                {
                    onecheck>>semesterchk;
                    if(semesterchk==d.smstr)
                    {
                        co(lo(rr), 4);  cerr<<"\n\t\t *This semester name already exist\n\n"; co(lo(rr), 11);
                        system("pause"); d.ccount=0; return gpain();
                    }
              }
        }
        cout<<"\n\t\t How many subject's you have :> "; cin>>d.q; system("cls");
           d.sum=0, d.tot=0, d.totCr=0, d.gpa=0, d.topo=0, d.tmark=0, d.fgpa=0;
          for(d.i=0; d.i<d.q; d.i++)
            {
              pnt();  crd();  ntog(); if (d.save==1) {  record();  }
              d.tmark+=d.mark;
              d.tot=d.credit*d.point;
              d.topo+=d.point;     // Calculation part
              d.sum+=d.tot;
              d.totCr+=d.credit;
              d.gpa=d.sum/d.totCr;
              }
               d.fgpa=d.gpa; d.fline=1; record(); co(lo(rr), 11);
            std::cout << "\n\n\n\t\t\t____________________________________________________________________________" << '\n'; std::cout<< fixed; d.point=d.gpa; comment();
            cout<<setprecision(2)<<"\t\t\t| Total Points: "<<d.topo<<" || Total Credits: "<<d.totCr<<" || Total GPA: "<<d.gpa<<"("<<d.say<<")"<<" |"<<endl;
            std::cout << "\t\t\t|___________________________________________________________________________|" <<"\n\n\n\n";
            system("pause");  d.ccount++;
    sub:
    system("cls");
    if (d.save==1) {
    cout<<"\n\n\n\t\t\t1. Calculate Again & (save)"<<endl
        <<"\t\t\t____________________________"<<endl; }
    else{
      cout<<"\n\n\n\t\t\t1. Calculate Again"<<endl
          <<"\t\t\t____________________________"<<endl;
    } fix=1;
    cout<<"\t\t\t0. Go Back to GPA page"<<endl
        <<"\t\t\t____________________________"<<endl;
    cout<<"\t\t\t9. Return main menu"<<endl
        <<"\t\t\t____________________________"<<endl;
    cout<<"\t\t\t===:> ";  char inmenu=getch();
    switch(inmenu)
    {   case '1':
             gpain();
             break;
        case '0':
             return gpa();
        case '9':
             return main();
        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }getch();////////////////////
    return gpa();
}
void ntog()/////////////////ntog////////////////////////////
{
  d;
  if (d.mark<=100 && d.mark>=96) {
    d.point=5.00;d.say="Excellent(优)";
  }
  else if (d.mark<=95 && d.mark>=86) {
    d.point=4.50;d.say="Excellent(优)";
  }
  else if (d.mark<=85 && d.mark>=76) {
    d.point=3.50;d.say="Good(良)";
  }
  else if (d.mark<=75 && d.mark>=66) {
    d.point=2.50;d.say="Medium(中)";
  }
  else if (d.mark<=65 && d.mark>=60) {
    d.point=1.50;d.say="pass(及格)";
  }
  else if (d.mark<=59 && d.mark>=0){
    d.point=0.00;d.say="fail(不及格)";
  }
  else{
      system("color 4");
    std::cerr << "\t\t Invalid Mark's it should [0-100]" << '\n';
  }
}
void comment()//////////////////comment/////////////////////
{
  d;
  if (d.point>=4.5 && d.point<=5.00) {
    d.say="Excellent";//(优)";
  }
  else if (d.point>=3.5 && d.point<4.5) {
    d.say="  Good   ";//(良)";
  }
  else if (d.point>=2.5 && d.point<3.5) {
    d.say=" Medium  ";//(中)";
  }
  else if (d.point>=1.5 && d.point<2.5) {
    d.say="  pass   ";//"(及格)";
  }
  else if (d.point>=0.00 && d.point<1.5) {
    d.say="  fail   ";//"(不及格)";
  }
  else {
    system("color 4");
      std::cerr << "\t\t Invalid point " << '\n';
  }
}
int record()//////////////////record////////////////////////
{
    d; float point=0, credit=0, mark=0;   string encsubname;
            point=d.point; credit=d.credit; mark=d.mark;
             encsubname=d.encsubname;
             ofstream save("record.dat", ios::app|ios::out);
             if (! save.is_open()) { system("color 4");
               std::cerr << "\t\t File couldn't open" << '\n';
             }
        if (d.fline==0)
        {
          if (d.ec%2==0) {
              point +=1234.85+scode;
              credit+=4321+scode;
              mark  +=161354+scode;
            }
          if (d.ec%2==1) {
              point +=1245.12+scode;
              credit+=4331+scode;
              mark  +=161344+scode;
            }
        save<<d.smstr<<" "<<encsubname<<" "<<mark<<" "<<point<<" "<<credit<<"\n"; d.ec++;
    }
    if (d.fline==1) {
      save<<d.smstr<<" "<<"Total"<<" "<<d.tmark+(161354+scode)<<" "<<d.fgpa+(1234.85+scode)<<" "<<d.totCr+(4321+scode)<<"\n\n";
    }
    save.close();
}
void index()/////////////////////index//////////////////////
{   system("cls"); logo; system("color 0a");  char a=220, b=219;
    cout<<"\n\t\t"<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<
    a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b; cout<<"    ______________________________________\n";
    cout<<"\t\t"<<b<<"                                    "<<b; cout<<"    "<<b<<"   First Login/Register to save     "<<b<<"\n";
    cout<<"\t\t"<<b<<"      1. Login/Register [user]      "<<b; cout<<"    "<<b<<"   your data hare for next time     "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b; cout<<"    "<<b<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a
    <<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<b<<"\n";
    cout<<"\t\t"<<b<<"      2. CALCULATOR [+-*/]          "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b<<"\n";
    cout<<"\t\t"<<b<<"      3. G.P.A Calculate            "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b<<"\n";
    cout<<"\t\t"<<b<<"      4. Record(add/show)           "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b<<"\n";
    cout<<"\t\t"<<b<<"      5. About Developer {;}        "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b<<"\n";
    cout<<"\t\t"<<b<<"      6. Tools                      "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b<<"\n";
    cout<<"\t\t"<<b<<"      0. exit                       "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b; cout<<"\t\t (c)github.com/ARROOT  v1.0.1"<<endl;
    cout<<"\t\t"<<b<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<
    a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<b<<"\n"; std::cout<<"\n\t\t    Press 1|2|3|4|0 :> ";
}
void check()/////////////////check//////////////////////////
{
    if (R==0) {  std::cerr << "\n\n\t\t\t Please login first " << '\n'; Sleep(1000); login();  }
}
int login()////////////////login////////////////////////////
{
           da; system("cls"); co(lo(rr), 11);
           cout<<"  \n\t\t\tWelcome to advanced login system for ADMIN "; ul;
           std::ofstream din_u("loginfo.dat",ios::app);   din_u.close();
           std::ifstream dck("loginfo.dat",ios::in);      string ck;   getline(dck,ck);
                   if (ck>="0"){
                     cout<<"\n\t\t\t\t _____________________\n"
                       <<"\t\t\t\t | 1.Login           |\n"
                       <<"\t\t\t\t |___________________|\n";
                   }
                   if (ck<="0") {
                      cout<<"\n\t\t\t\t _____________________\n"
                       <<"\t\t\t\t | 1.Register        |\n"
                       <<"\t\t\t\t |___________________|\n";
                    }
                   if (R==1) {
                      cout<< "\t\t\t\t | 2.Record(show/add)|\n"
                      <<     "\t\t\t\t |___________________|\n";
                    }
                   std::cout <<"\t\t\t\t | 9.Return main menu|\n"
                             <<"\t\t\t\t |___________________|\n";  char ch=getch();
                   switch (ch) {
                      case '1':
                            if (ck>="0") {
                                loginin();
                                }
                            if (ck<="0") {
                                registerin();
                                }
                                break;
                      case '2':
                            if (R==1) {
                                xrecord();
                                }
                            else {
                                return login();
                                }
                                break;
                      case '9':
                            return main();
                      default:
                        system("color 4");
                        std::cout << "wrong input" << '\n';
                        return login();
                } getch();
    return  login();
}
void registerin()///////////registerin//////////////////////
{
      da; char PASSWORD[200], EMAIL[200], UNAME[200];
      std::ofstream put("loginfo.dat",ios::app|ios::out|ios::in);
          if (! put.is_open() && ! put.is_open())
            {
              std::cerr << "\n"<<"\t could not open file\n";
              again();
            }
        loading();  system("cls");co(lo(rr), 11);
        std::cout << "\n\n\t\t\t\t      REGISTRATION PAGE"; ul;
        std::cout << "\n\n\t\t\t__________________________________________"
                  << "\n\t\t\t  New Email    : ";
                    cin.getline(EMAIL, 200);   mai(EMAIL);
                    da.remail=encrypt;
        std::cout << "\t\t\t__________________________________________"
                  << "\n\t\t\t  New Username : ";
                    cin.getline(UNAME, 200);   mai(UNAME);  da.rname=encrypt;
        strong:
        co(lo(rr), 6);  cout<<"\t\t\t****password length must be (10)****\n"; co(lo(rr), 11);
        cout<<"\t\t\t  New Password : ";
        cin.getline(PASSWORD, 200);
        int key = strlen(PASSWORD);
        if (key<10){
            system("cls"); goto strong;
        }
            mai(PASSWORD);   ////////// Encryption //////////////
            da.rpassword=encrypt;
      put<<da.rname<<"  "<<da.rpassword<<"  "<<da.remail<<std::endl;  put.close();
      if(da.remail<="0" || da.rname<="0" || da.rpassword<="0")
      {   co(lo(rr), 4); cerr<<"\n\n\t\t\t Something wrong file can't close\n\n\n";
          system("pause"); login(); co(lo(rr), 3);
      }
      else{ system("cls"); co(lo(rr), 10);cout<<"\n\n\t\t\t\t  *Registration complete.\n\n"; lock;
            std::cout << "\n\t\t\t "<<UNAME<<",  Your data is secure now.." << '\n'; Sleep(1000);
      }
}
void loginin()///////////////log_in/////////////////////////
{
      da; char lpass[200], lname[200], pas, En;
        int x;
        while(da.logfail<3)
        {
            system("cls"); co(lo(rr), 11);
            std::cout << "\n\n\t\t\t\t####**** Login Page ****##### ";
                      if(da.logfail==2)
                          {
                            co(lo(rr), 4);
                            cerr<<"\n\t\t\t\t\t[ Last time ]";
                            co(lo(rr), 11);
                          }
            std::ifstream get("loginfo.dat",ios::in); ul; co(lo(rr), 10); lock; co(lo(rr), 11);
            std::cout << "\n\n\t\t\t__________________________________________"
                      << "\n\t\t\t   Username : ";
                      cin.getline(lname, 200);
                      mai(lname);
                      da.lname=encrypt;
            int i=0;
            std::cout << "\n\t\t\t__________________________________________"
                  << "\n\t\t\t   Password : ";
            while (1)
            {
                taking:
                pas=getch();
                En=pas;  lpass[i]=pas;
                if(En=='\r')
                  {
                    lpass[i]='\0';
                    break;
                  }
                 if (En=='\b' && i>=1) {
                     std::cout << "\b \b";
                     i--; goto taking;
                }
                if (En!=13 && En!=8) {
                  std::cout << "*";
                  i++;
                }
            }
            mai(lpass); da.lpassword=encrypt;
            get>>da.sname>>da.spassword>>da.semail; std::cout<<"\n";
    if (da.sname==da.lname && da.spassword==da.lpassword)
        {
            system("cls"); system("color 0a"); ulock; R=1;
            std::cout << "\n\n\n\t\t\tLogin Successfully"<< "\n\t\t\tNow you can check and save record Dear, "; co(lo(rr),9); std::cout <<lname;
            da.logfail=4; std::cout<<"\n\n\n";
        }
    if (da.sname!=da.lname || da.spassword!=da.lpassword)
       {
            system("cls"); co(lo(rr), 4); da.logfail++; lock;
            std::cerr << "\n\n\t\t\tSomething wrong USERNAME or PASSWORD\n"
                      << "\n\t\tNB :\t"<<da.logfail<<" time failed to login attempts out of 3."<<"\n\n";
                        co(lo(rr),2);
            system("pause");
        }
    if(da.logfail==3)
        {
            system("cls"); co(lo(rr), 6);
            std::cout<<"\n\n\n\t\t\t You are failed to log_in 3 time's"
                     <<"\n\t\t\t Better Luck next time.";
        }
    }
}
int developer()//////////////developer//////////////////////
{
  lop: system("cls");
  system("color 3");
  cout<<endl;
  cout<<"\t\t\t"<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<
  a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<"\n";
  cout<<"\t\t\t"<<b<<"                                                  "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"               SAJIB AHAMED ARKO                  "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"               ID: *************                  "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"   JIANGSU UNIVERCITY OF SCIENCE AND TECHNOLOGY   "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"                                                  "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"               _________                          "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"              [Follow me]                         "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"              '''''''''''                         "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         1. Linkedin : SAJIB AHAMED               "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         2. Facebook : AHAMED SAJIB               "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         3. twitter  : Sazib arko                 "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         4. Github   : ARROOT                     "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         5. Wechat   : sazibarko                  "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"                                                  "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         9. Return_Main_Menu                      "<<b<<"\n";
  cout<<"\t\t\t"<<b<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<
  a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<b<<"\n";
  cout<<"\n\n\t\t\t     Press 1|2|3|4|5|0 >> ";  char fc=getch();
  switch (fc)
    {
      case '1':
        system("start https://www.linkedin.com/in/sajib-ahamed-a95303193/");
        cout<<"\t\t\t connecting.. Linkedin...";
        loading();
        goto lop;
      case '2':
        system("start https://www.facebook.com/sazibarkokl");
        cout<<"\t\t\t connecting..Facebook...";
        loading();
        goto lop;
     case '3':
        system("start https://twitter.com/SazibArko");
        cout<<"\t\t\t connecting..twitter...";
        loading();
        goto lop;
     case '4':
        system("start https://github.com/ARROOT");
        cout<<"\t\t\t connecting..Github...";
        loading();
        goto lop;
     case '9':
        return main();
     case '5':
        loading();
        system("cls");
        qr();
        goto lop;
    default:
      system("color 4");
      system("cls");
    cout<<"\n\n\n\t\t\t Something Going Wrong [wrong input or system fail]\n\n\n";
    system("pause");
    return developer();
 }                                                                                               string fake; getline(cin, fake);
 return developer();
}
void rcmain()/////////////////rcmain////////////////////////
{
  dd; system("cls");
  if(fix==1){ string fake; getline(cin, fake); fix=0;; }  system("cls");
  std::cout << "\n\n\t\t Enter semester name : "; getline(cin, dd.semester);  system("cls");
  std::cout << "\n\n\n\t\t 1. show record display in screen.\n"
  <<"\n\t\t 2. print record in a file. "
  <<"\n\t\t________________________________"; char ch=getch();
  ofstream clean("result_record.txt", ios::out);   //clean file of before record
  if (! clean.is_open()) { system("color 4");
  std::cerr << "\t\t Result File couldn't open" << '\n';
    }
    if (ch=='2') {
      clean<<"\n\n\t\t\t\t\tজিয়াংসু বিজ্ঞান ও প্রযুক্তি বিশ্ববিদ্যালয় "
           <<"\n\t\t\t\t\t   江苏科技大学\n";
    }  clean.close();
  ifstream take("record.dat", ios::app|ios::in);   // taking file
  if (! take.is_open()) { system("color 4");
    std::cerr << "\t\t Record File couldn't open" << '\n';
     }
      ofstream result("result_record.txt", ios::app|ios::out);   //create file and
     if (! result.is_open()) { system("color 4");
       std::cerr << "\t\t Result File couldn't open" << '\n';
        }
      system("cls");
      std::cout << "\n\t\t\t\t Please Wait ";
      while(!take.eof())
      {
        take>>dd.getsemester;
        if (!(dd.getsemester==dd.semester)) {
          std::cout << ".";
        }
        if (dd.semester==dd.getsemester) {
          take>>dd.subname>>dd.mark>>dd.point>>dd.credit; dd.cm++;
          if (dd.subname=="Total") {   dd.dc=0; }
          if(dd.dc%2==0) {
              dd.point -=1234.85+scode;
              dd.credit-=4321+scode;
              dd.mark  -=161354+scode;
            }
          if (dd.dc%2==1) {
              dd.point -=1245.12+scode;
              dd.credit-=4331+scode;
              dd.mark  -=161344+scode;
            }
             dd.dc++;   Wrong:
            if (ch=='2') {
                print();
                dd.file++;
            }
            else if (ch=='1') {  show();
                if (dd.subname=="Total"){
                std::cerr << "\n\n\t\t\t We found " <<dd.cm-1<< " Subject in this semester.\n\n\n";
                dd.subname="x";
              }  }
            else{
              goto Wrong;
              }  }  }
           if (dd.semester!=dd.getsemester && dd.cm==0)
          {
            system("cls");
            std::cerr << "\n\n\t\t No data Found " << '\n'; system("color 4");
            std::cerr << "\n\t\t\tAn error to found this semester data" << '\n'
            <<"\n\t\t\t****Please go Back and add record*****\n\n";  system("pause");
          }
}
int xrecord()////////////////xrecord////////////////////////
{
  dd.semester.clear(); dd.getsemester.clear(); dd.subname.clear();
   dd.point=0; dd.credit=0; dd.mark=0; dd.cm=0;  dd.dc=2; dd.file=0;   system("cls");
  ifstream check("record.dat", ios::app|ios::in);
  if (! check.is_open()) { system("color 4");
    std::cerr << "\t\t Record File couldn't open" << '\n';
  } string datacheck; datacheck.clear();
     check>>datacheck;   system("cls"); system("color 0a");
     if (datacheck>"0") { //cout<<fix;
     std::cout << "\n\n\t\t\t 1. Show courses (record)" << '\n';
     std::cout << "\n\t\t\t 2. Add courses (record)" << '\n';
      }
     if (datacheck<="0") {
       std::cout << "\n\t\t\t 1. Add courses ( save record)";     co(lo(rr), 5);
       std::cout << "  [ No record found yet]" << '\n';           co(lo(rr), 10);
       }
       std::cout << "\n\t\t\t 9. Return main menu" << '\n';
       std::cout << "\n\t\t\t :> ";   char ch=getch();
    switch (ch) {
      case '1':
          if (datacheck>="0") {
            rcmain();
            if(dd.file>=1){
            system("start result_record.txt");
          }}
          if (datacheck<="0") {
            return gpa();
          }
           break;
      case '2':
            if (datacheck>="0") {
              return gpa();
            }
            else{
              return xrecord();
            }
      case '9':
            return main();
    } getch();
   return xrecord();
}
void print()/////////////////print//////////////////////////
{
  dd; ofstream result("result_record.txt", ios::app|ios::out);
     if (! result.is_open()) { system("color 4");
       std::cerr << "\t\t Result File couldn't open" << '\n';
        }
  if (dd.cm==1) {
         result << "\n\n\t\t\tHare is your result of ("<<dd.semester<<")\n"
        <<"\t\t   _________________________________________________________\n"
        <<"\t\t   |  Subject             |  Mark  |  Points    |  credit  |\n"
        <<"\t\t   |______________________|________|____________|__________|";   }

        if (dd.subname!="Total" && dd.subname!="end") {
        result<<"\n\t\t   | "<<dd.subname<<"\t\t  |  "<<dd.mark<<"\t   |    ";
        std::cout<< fixed; result<<setprecision(3)<<dd.point<<" \t|  "<<dd.credit<<"\t   |\n";
        result<<"\t\t   |______________________|________|____________|__________|"; }
         if (dd.subname=="Total") { dd.subname="end";
          std::cout<< fixed;  result<<setprecision(3)
          <<"\n\t\t   | GPA : "<<dd.point<<"  | Total Credit : "<<dd.credit<<"\t\t\t   |\n";
          result<<"\t\t   |_____________|_________________________________________|";
          cout<<"\n\n\n\t\t File save successfully result_record.txt"; result.close();}
}
void show()/////////////////show////////////////////////////
{
  dd;
    if (dd.cm>=1 && dd.point>0 && dd.credit>0 && dd.mark>0)
      {
        if (dd.cm==1) {
        std::cout << "\n\n\t\t\tHare is your result of ("<<dd.semester<<")\n"
        <<"\t\t     _____________________________________________"; }
        if (dd.subname=="Total") { co(lo(rr), 6);
        cout<<"\n\n"<<"\t\t______________________________________________________";}

         std::cout<< fixed;  cout<<setprecision(2)<<""
        <<"\n\t\t     | "<<dd.subname<<"\r\t\t\t\t\t| "<<dd.mark<<"\r\t\t\t\t\t\t| "<<dd.point<<"\r\t\t\t\t\t\t\t| "<<dd.credit
        <<"\r\t\t\t\t\t\t\t\t |\n";
        std::cout<<"\t\t     |__________________|_______|_______|________|";
      }
}
int calculator()////////////calculate///////////////////////
{
  std::cout<<"\n\t\t_____________________\n"<<"\t\t| 1. Calculate      |\n"<<"\t\t|___________________|\n"
  <<"\t\t| 9.Return main menu|\n"<<"\t\t|___________________|\n"; char choice=getch();
  switch (choice) {
    case '9':  return main();
    case '1':
    while(1)
    {
    int item,i,mod1,mod2,mod;char o;
    double add=0,sub,mul=1,div,temp,temp1;
    system("cls");system("color 3");
    cout<<"                           !!!!!!SIMPLE MATHEMATICS CALCULATOR!!!!!!\n\n\n";
    cout<<"Operations:\n";
    cout<<"\t\t--------------------\n";
    cout<<"\t\t( + )( - )( x )( / )\n";
    cout<<"\t\t--------------------\n";
    cout<<"\t\t       Mod(m)       \n";
    cout<<"\t\t--------------------\n";
    cout<<"\t\t  Square root (s)   \n";
    cout<<"\t\t--------------------\n";
    cout<<"\t\t   0.return index   \n";
    cout<<"\t\t--------------------\n";
    cout<<"\nEnter the sign which operation you want to do: ";  getchar();  cin>>o;  cout<<endl;
    switch(o)
    { case '+':
        cout<<"How many item you want to add: "; cin>>item; cout<<endl;
        for(i=1;i<=item;i++)
        {
            cout<<"\t\t Enter " <<i<<" value :";
            cin>>temp;  cout<<endl;  add+=temp;
        }
        cout<<"\nSummation = "<<add<<"\n\n";
        system ("pause");  return calculator();
        break;
    case '-':
            cout<<"\nEnter value 1: "; cin>>temp;
            cout<<"\nEnter value 2: "; cin>>temp1;  sub=temp-temp1;
            cout<<"\nSubstraction = "<<sub<<"\n\n";
            system ("pause");  return calculator();
            break;
    case '*':
        cout<<"\nHow many item you want to multiplicate: ";cin>>item;
        for(i=1;i<=item;i++)
        {
            cout<<"Enter value %d: ";  cin>>temp;  mul*=temp;
        }
        system ("pause");  return calculator();
        break;
    case '/':
        cout<<"\n\t\t Enter main value : ";cin>>temp;
        cout<<"\n\t\t Enter div value : ";cin>>temp1;  div=temp/temp1;
        cout<<"\nDivision = "<<div<<"\n\n";
        system ("pause");  return calculator();
            break;
    case 'm':
        cout<<"\nEnter value 1: ";cin>>mod1;
        cout<<"\nEnter value 2: ";cin>>mod2;  mod=mod1%mod2;
        cout<<"\nModulus = "<<mod<<"\n\n";
        system ("pause");  return calculator();
            break;
    case 'M':
        cout<<"\nEnter value 1: ";  cin>>mod1;
        cout<<"\nEnter value 2: ";  cin>>mod2;  mod=mod1%mod2;
        cout<<"\nModulus = "<<mod<<"\n\n";
        system ("pause");  return calculator();
            break;
    case 's':
        cout<<"\t\t Enter value :";cin>>item;  temp=sqrt(item);
        cout<<"\t\t ="<<temp;cout<<endl<<endl;
        system ("pause");  return calculator();
        break;
    case 'S':
        cout<<"\t\t Enter value :"; cin>>item; temp=sqrt(item);
        cout<<"\t\t ="<<temp;cout<<endl<<endl;
        system ("pause");  return calculator();
        break;
    case '0':
        return again();
    default:
        system("cls"); system("color 4");
        cout<<"                           !!!!!!SIMPLE MATHEMATICS CALCULATOR!!!!!!\n\n\n";
        cout<<"\n\nWrong choice!\nPlease enter a correct sign.\n\n\n";
        system ("pause");  return calculator();
    }  }
    cout<<"\n\n\t\t\t 1. Calculate again";
    cout<<"\n\n\t\t\t 2. Return main menu"; char ch=getch();
    switch(ch){
    case '1': return 1;
    case '2': return main();
  }
}
  return again();
}
int tool()///////////////tool///////////////////////////////
{
 while (1) {
    system("cls"); system("color 0a");
    std::cout << "\n\n\n\t\t 1. Stop watch (lap)"
              << "\n\t\t 2. Feedback & Suggestion"
              << "\n\t\t 3. update  v1.0.1"
              << "\n\t\t 0. Return maim manu"
              << "\n\t   _________________________________";  char ch=getch();
    switch(ch){
        case '1':
                sw();  break;
        case '2':
                system("start https://github.com/ARROOT");  break;
        case '3':
                system("start https://github.com/ARROOT");  break;
        case '0':
            return main();
    }  }
    return 1;
}
int sw()////////////////STOP_WATCH//////////////////////////
{
    co(lo(rr), 11);  system("cls");
    cout<<"\n\t\t\t\t 1. Start (lap) STOP-WATCH\n\n\t\t\t\t 2. Return main menu"
          "\n\t\t\t\t___________________________";char choice=getch();
    switch(choice)
     {
        case '1':
          for(int loop=0;;){ co(lo(rr), 11);
                reset: system("cls"); cout<<"\n\t\t\tEnter any key to start and 'Q' to quit"
                                          <<"\n\n\n\n\n\n\t\t\t\t00 : 00 : 00 : 00"; Sleep(100);
                while(kbhit()){ char bac_k=getch();
                                    switch(bac_k) {
                                         case 'q':
                                         case 'Q':
                                                return tool();
                                         default:
                                             cout<<"";
                                    }      system("cls");
                    int h=0, m=0, s=0, ns=0, c=0, r=0; cout<<"\n\n\t\t\t  Press <space> to pause & (Enter) continue\n\n\n\n\n";
        while(1)
            {
            for(int i=0; i<24; i++);
                {  m=0;
                    for(int j=0; j<60; j++)
                        {  s=0;
                        for(int k=0; k<60; k++)
                            {  ns=0;
                            for(int l=0; l<60; l++)
                                {
                                    cout<<"\t\t\t\t";
                                    if(h<10){cout<<"0";}
                                        cout<<h<<" : ";
                                        if(m<10){cout<<"0";}
                                            cout<<m<<" : ";
                                            if(s<10){cout<<"0";}
                                                cout<<s<<" : ";
                                                  if(ns<10){cout<<"0";}
                                                    cout<<ns<<"\r";
                                                       ns++; Sleep(12);
                                                          while(kbhit()){ char ch=getch();
                                                                             switch(ch){
                                                                                case ' ':
                                                                                        c++;  co(lo(rr), 10);
                                                                                        cout<<" \t\t\t\t\t\t\tlap "<<c;
                                                                                        if(r==0||r%5==0){
                                                                                        co(lo(rr), 4);
                                                                                        cout<<"       Press (R/r)Reset           "; }r++;
                                                                                        cout<<"\n\n";    co(lo(rr), 11);
                                                                                           char ch1=getch();
                                                                                           switch(ch1){
                                                                                             case 'r':
                                                                                             case 'R':
                                                                                                goto reset; ch1='0';
                                                                                           } break;
                                                                                      }
                                                                                }
                         }s++;
                      }m++;
                   }h++;
                 }
               }
            return 1;
          }  }
    case '2':  return 1;
     }
  return again();
}
int qr()///////////////QR_CODE//////////////////////////////
{
  system("color 6");
  cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        "@@@@@@@@              @@@@@@  @@  @@@@@@@@    @@  @@              @@@@@@@@\n@@@@@@@@  @@@@@@@@@@  @@  @@  @@@@@@@@    @@@@@@  @@  @@@@@@@@@@  @@@@@@@@\n"
        "@@@@@@@@  @@      @@  @@@@@@@@@@  @@@@    @@@@@@@@@@  @@      @@  @@@@@@@@\n@@@@@@@@  @@      @@  @@      @@  @@      @@@@  @@@@  @@      @@  @@@@@@@@\n"
        "@@@@@@@@  @@      @@  @@@@  @@@@@@@@@@@@  @@  @@  @@  @@      @@  @@@@@@@@\n@@@@@@@@  @@@@@@@@@@  @@    @@      @@    @@@@@@  @@  @@@@@@@@@@  @@@@@@@@\n"
        "@@@@@@@@              @@  @@  @@  @@  @@  @@  @@  @@              @@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@      @@  @@  @@@@      @@@@@@@@@@@@@@@@@@@@@@@@\n"
        "@@@@@@@@          @@        @@  @@@@  @@@@  @@  @@  @@  @@  @@  @@@@@@@@@@\n@@@@@@@@@@@@  @@@@  @@    @@  @@      @@    @@  @@        @@@@@@  @@@@@@@@\n"
        "@@@@@@@@    @@  @@      @@@@  @@@@@@      @@  @@    @@    @@@@@@@@@@@@@@@@\n@@@@@@@@@@  @@@@@@@@@@  @@@@@@@@  @@    @@@@  @@  @@        @@  @@@@@@@@@@\n"
        "@@@@@@@@@@@@          @@      @@  @@        @@  @@@@@@@@@@    @@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  @@@@  @@            @@@@@@  @@@@@@@@\n"
        "@@@@@@@@      @@@@    @@            @@    @@  @@        @@    @@@@@@@@@@@@\n@@@@@@@@  @@    @@  @@          @@@@@@    @@        @@    @@@@  @@@@@@@@@@\n"
        "@@@@@@@@@@@@    @@        @@    @@@@@@@@@@@@@@  @@@@@@  @@    @@@@@@@@@@@@\n@@@@@@@@      @@    @@  @@@@  @@  @@  @@                  @@  @@  @@@@@@@@\n"
        "@@@@@@@@  @@@@  @@@@  @@  @@  @@@@@@@@    @@  @@    @@@@@@@@  @@@@@@@@@@@@\n@@@@@@@@  @@@@      @@@@      @@    @@@@@@@@    @@@@@@  @@@@@@  @@@@@@@@@@\n"
        "@@@@@@@@  @@@@@@@@@@      @@@@@@  @@@@      @@@@          @@      @@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@    @@@@@@@@  @@      @@  @@@@@@          @@@@@@@@\n"
        "@@@@@@@@              @@  @@@@      @@            @@  @@      @@@@@@@@@@@@\n@@@@@@@@  @@@@@@@@@@  @@@@      @@@@@@@@  @@@@    @@@@@@  @@@@  @@@@@@@@@@\n"
        "@@@@@@@@  @@      @@  @@  @@@@          @@    @@          @@  @@@@@@@@@@@@\n@@@@@@@@  @@      @@  @@      @@  @@@@    @@@@@@  @@@@@@@@        @@@@@@@@\n"
        "@@@@@@@@  @@      @@  @@  @@  @@  @@@@  @@        @@  @@        @@@@@@@@@@\n@@@@@@@@  @@@@@@@@@@  @@      @@      @@@@@@@@@@  @@@@      @@  @@@@@@@@@@\n"
        "@@@@@@@@              @@  @@@@@@  @@@@@@  @@@@@@@@  @@        @@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
        "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n";system("pause");
}
main()//////////***MAIN FUNCTION***/////////////////////////
{
    system("color 0a");  loading();  index();
    char a=getch();
        switch(a)
           {     case '1':
                        loading();
                        login();
                        break;
                 case '2':
                        loading();
                        calculator();
                        break;
                 case '3':
                        loading();
                        gpa();
                        break;
                 case '4':
                         loading();
                         check();
                         xrecord();
                         break;
                 case '5':
                        loading();
                        developer();
                        break;
                 case '6':
                        loading();
                        tool();
                        break;
                 case '0':
                        system("cls");
                        ExitProcess (0);
                default:
                    system("color 4");
                    system("cls");
                    cout<<"\n\n\n\t\t\t Something Going Wrong [wrong input or system fail]\n\n\n";
                    system("pause");
                    again();
                break;
  }  getch();
  while(a<=0);
return 0;
}
