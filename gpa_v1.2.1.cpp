#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <string>

#define co     SetConsoleTextAttribute
#define lo     GetStdHandle
#define rr     STD_OUTPUT_HANDLE
#define cls    system("cls")
#define pause  system("pause")
#define logo   cout<<"\t\t\t\t.       .\n"<<"\t\t\t\t|\\_____/|\n"<<"\t\t\t\t \\* | */\n"<<"\t\t\t\t  \\ ! /\n"<<"\t\t\t\t   \\_/\n"
#define ul     cout<<"\n\t\t\t"<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<"###"<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<'\n'
#define lock   cout<<"\n\t\t\t\t\t   @*@\n"<<"\t\t\t\t\t  @   @\n"<<"\t\t\t\t\t@@@@@@@@@\n"<<"\t\t\t\t\t@@@@.@@@@\n"<<"\t\t\t\t\t@@@[|]@@@\n"<<"\t\t\t\t\t@@@@@@@@@"
#define ulock  cout<<"\n\n\n\n\t\t\t\t\t   @*@\n"<<"\t\t\t\t\t  @   @\n"<<"\t\t\t\t\t      @\n"<<"\t\t\t\t\t@@@@@@@@@\n"<<"\t\t\t\t\t@@@@.@@@@\n"<<"\t\t\t\t\t@@@[/]@@@\n"<<"\t\t\t\t\t@@@@@@@@@"

int main();      int gpain();      int login();       void record();
int xrecord();   int sw();         void print();      void loginin();
void show();     void comment();   void registerin();

using namespace std;
                      int R=0, fix, scode=0;
                      char b=219, a=220;
struct data
{
    float point=0,
          credit=0,
          mark=0,
          tmark=0,
          fgpa=0,
          sum=0,
          tot=0,
          totCr=0,
          gpa=0,
          topo=0;
    string say,
           encsubname,
           smstr;
    int q, i, save=0,
        fline=0, ec=2,
        ccount=0, x=1;
    char CB=0;
}d;

struct info
{
    string lname,
           lpassword,
           rname,
           remail,
           rpassword,
           sname,
           spassword,
           semail, y;
    char  display[200];
    int su=0,
        sp=0,
        logfail=0;
}da;

struct pdata
{
    float point=0,
          credit=0,
          mark=0,
          cm=0;
    int dc=2;
    string semester,
           getsemester,
           subname,
           say;
    int file;
}dd;

/////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\//////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\////////

int again()////Index_animation//////////////////////////////
{
                cls;
                system("color 3");
                cout<<"\n\n\n\t\t\t press | 1 | to return menu ";
                cout<<"\n\n\t\t\t press | 0 | to Exit";
                cout<<"\n\n\t\t\t press >>";
                char z=getch();
                switch (z)
                {
                case '1':
                   return main();
                case '0':
                    cls;  ExitProcess (0);
                default:
                    return again();
                }
                getch();
            return again();
}

void loading()////LOADING_FUNCTION//////////////////////////
{
             cls;
             cout<<"\n\n\n\t\t\t\t\tPlease wait\n\n";
             char a=176, b=219;
             cout<<"\t\t\t\t\t";
             for (int i=0;i<=20;i++)
             cout<<a;
             cout<<"\r";
             cout<<"\t\t\t\t\t";
              for (int i=0;i<=20;i++)
             {
                 Sleep(10); cout<<b;
             }
            cls;
}

void enc(char pass[200])//////////////Encryption////////////
{
              int y,z,e=0, scode;
              char _hash[200]={0};
              scode=strlen(pass);
              if(scode<31)
              {
                z=((scode)*3);
                _hash[z]='\0';
                for(int i=0; i<scode+1; i++)
                    {
                        for(int j=(i*3); j<=(i*3+2); j++)
                            {
                            if((int)pass[i]<96)
                            {
                                if(e==0)
                                {
                                    _hash[j]=pass[i]+scode; e++; scode--;
                                }
                                else if(e==1)
                                {
                                    _hash[j]=pass[i]+(scode+3); e++;
                                }
                                else
                                {
                                    _hash[j]=pass[i]+(scode+4); e=0;
                                }
                            }
                            if((int)pass[i]>96)
                            {
                                if(e==0)
                                {
                                    _hash[j]=pass[i]-scode; e++; scode++;
                                }
                                else if(e==1)
                                {
                                    _hash[j]=pass[i]-(3+scode); e++;
                                }
                                else
                                {
                                    _hash[j]=pass[i]-(4+scode); e=0;
                                }
                              }
                            }
                          }
                        }
                for(int i=0; i<strlen(_hash); i++)
                {
                    pass[i] = _hash[i];
                }
                pass[z]='\0';
}

void encrypt(char pass[200])////////Encrypt_two_way/////////
{
        int i=0, j=0, e=0, N=0, scode=0, len=0, slen=0, z=0;
        char *_hash=new char[200];
        for(i=j=0; i<=len; i++)
        {
              scode=strlen(pass);
              pass[scode]='\0';
              if(scode<50)
              {
                z=((scode)*3);
                _hash[z]='\0';
                      for(int i=0; i<scode+1; i++)
                         {
                         for(int j=(i*3); j<=(i*3+2); j++)
                            {
                                N = rand() % 5 + 1;
                                if(e==0)
                                {
                                    _hash[j]=pass[i]+(scode-5);  e++;
                                }
                                else if(e==1)
                                {
                                    _hash[j]=pass[i]+(scode-N);  e++;
                                }
                                else
                                {
                                    _hash[j]=pass[i]+(scode-N+1); e=0;
                                }
                              }
                            }
                          }
                          else{
                              cerr<<"\n\tPut less then 50 word length\n";
                          }
                        j=0;

                    for(int i=0; i<strlen(_hash); i++)
                    {
                         pass[i] = _hash[i];
                    }
                    pass[z]='\0';
                delete[] _hash;
        }
}

void decrypt(char _hash[200])///////////////decrypt/////////
{
          char *pass=new char[200];
          int z=0, scode=0;

              scode=strlen(_hash);
               if(scode<200)
                {
                    z=((scode)/3);
                    pass[z]='\0';
                    for(int i=0; i<z; i++)
                    {
                         pass[i] = _hash[i*3] - (z-5);
                    }
                }
                for(int i=0; i<strlen(pass); i++)
                    {
                        _hash[i] =  pass[i];
                    }
                _hash[z]='\0';
            delete[] pass;
}

int en_de_cry()/////////////Two_way_function////////////////
{
  while(1)
  {
     cls; co(lo(rr),14);
     char pass[200], _hash[200], note[100000], fake[10];
     int len=0, slen=0, j=0, i=0, word=0; string match, codeno;
     std::cout<<"\n\n\n\n\n\t\t\t  W| Write Encrypt note"
              <<"\n\t\t\t  ========================"
              <<"\n\t\t\t  R| Read Decrypt note\t";
     ofstream put("put.txt", ios::app);
     ifstream take("put.txt",ios::in);
     char choice=getch();
     switch(choice){
        case 'W':
        case 'w':
                    cls;
                    std::cout<<"\n\t Enter Code ID : ";
                    std::cin>>codeno;
                    put<<codeno<<" ";  cls;                                                                                                    std::cin.getline(fake, 10);
                    std::cout<<"\n\t Enter lines : ";
                    std::cin.getline(note, 100000);
                    len = strlen(note); note[len]='\0';
                    for(i=j=0; i<=len; i++)
                        {
                        if(note[i]!=' ' && i<len)
                            {
                                pass[j] = note[i];
                                j++;
                            }
                        else{
                                encrypt(pass);
                                put<<pass<<" ";
                                j=0; slen=strlen(pass);
                        for(int k=0; k<200; k++)
                            {
                                pass[k]='\0';
                            }
                        }
                    }
                    put<<"lend"<<endl; put.close(); cls;
                    cout<<"\n\n\t\t\t Encrypted Successfully......\n\n"; pause;
                    break;
        case 'R':
        case 'r':
                cls;
                std::cout<<"\n\n\t  Enter code ID : "; cin>>codeno; cls;
                while(!take.eof())
                    {
                        take>>match;
                        if(codeno==match)
                        {
                          co(lo(rr),10);
                          std::cout<<"\n\n ##~##-Lines  : "; co(lo(rr),11);
                          while(!take.eof())
                            {
                                take>>_hash; word += strlen(_hash);
                                if(_hash[0]=='l' && _hash[1]=='e' && _hash[2]=='n' && _hash[3]=='d')
                                    {
                                        take.close(); co(lo(rr),10);
                                        std::cout<<"\n\n\n\n"; pause;
                                        return en_de_cry();
                                    }
                                decrypt(_hash);
                                cout<<_hash<<" "; word++;
                                if(word==10)
                                {
                                    cout<<endl<<"\t\t"; word=0;
                                }
                            }
                        }
                    }
                    take.close(); co(lo(rr),10);
                    cout<<"\n\n\n\n\n"; pause;
                break;
     }
   }
   return 1;
}

void ntogCN()//////////ntogChina////////////////////////////
{
  d;
  if (d.mark<=100 && d.mark>=96)
  {
    d.point=5.00;d.say="Excellent";
  }
  else if (d.mark<=95 && d.mark>=86)
  {
    d.point=4.50;d.say="Excellent";
  }
  else if (d.mark<=85 && d.mark>=76)
  {
    d.point=3.50;d.say="Good";
  }
  else if (d.mark<=75 && d.mark>=66)
  {
    d.point=2.50;d.say="Medium";
  }
  else if (d.mark<=65 && d.mark>=60)
  {
    d.point=1.50;d.say="pass";
  }
  else if (d.mark<=59 && d.mark>=0)
  {
    d.point=0.00;d.say="fail";
  }
  else
  {
    system("color 4");
    std::cerr << "\t\t Invalid Mark's it should [0-100]" << '\n';
  }
}

void ntogBD()//////////ntogBANGLADESH///////////////////////
{
  d;
  if (d.mark<=100 && d.mark>=80)
  {
    d.point=4.00;d.say="Outstanding";
  }
  else if (d.mark<=79 && d.mark>=75)
  {
    d.point=3.75;d.say="Excellent";
  }
  else if (d.mark<=74 && d.mark>=70)
  {
    d.point=3.50;d.say="Very Good";
  }
  else if (d.mark<=69 && d.mark>=65)
  {
    d.point=3.25;d.say="Good";
  }
  else if (d.mark<=64 && d.mark>=60)
  {
    d.point=3.00;d.say="Satisfactory";
  }
  else if (d.mark<=59 && d.mark>=55)
  {
    d.point=2.75;d.say="Above Average";
  }
  else if (d.mark<=54 && d.mark>=50)
  {
    d.point=2.50;d.say="Average";
  }
  else if (d.mark<=45 && d.mark>=49)
  {
    d.point=2.25;d.say="Below Average";
  }
  else if (d.mark<=44 && d.mark>=40)
  {
    d.point=2.25;d.say="Pass";
  }
  else if (d.mark<=39 && d.mark>=0)
  {
    d.point=0.00;d.say="Fail";
  }
  else
  {
    system("color 4");
    std::cerr << "\t\t Invalid Mark's it should [0-100]" << '\n';
  }
}

void comment()//////////////////comment/////////////////////
{
  d;
  if (d.point>=4.5 && d.point<=5.00)
  {
    d.say="Excellent";//(优)";
  }
  else if (d.point>=3.5 && d.point<4.5)
  {
    d.say="  Good   ";//(良)";
  }
  else if (d.point>=2.5 && d.point<3.5)
  {
    d.say=" Medium  ";//(中)";
  }
  else if (d.point>=1.5 && d.point<2.5)
  {
    d.say="  pass   ";//"(及格)";
  }
  else if (d.point>=0.00 && d.point<1.5)
  {
    d.say="  fail   ";//"(不及格)";
  }
  else
  {
    system("color 4");
      std::cerr << "\t\t Invalid point " << '\n';
  }
}

int cgpa()//////////////////////cgpa////////////////////////
{
                d; cls;
                int l;
                cout<<"\n\t\t\t\t      CGPA CALCULATOR"; ul;
                cout<<"\n\t\t  How many semester you have : ";  co(lo(rr),14);
                cin>>l; co(lo(rr),11);
                cout<<"\n\n";
                float semrs[l];
                for(int i=0;i<l;i++)
                {
                    cout<<"\t Enter Semester "<<i+1<<" GPA : "; co(lo(rr),14);
                    cin>>semrs[i]; co(lo(rr),11);
                    cout<<endl;
                }
                float semtot=0;
                for(int j=0;j<l;j++)
                {
                    semtot=semtot+semrs[j];
                }
                d.point=semtot/l; comment();
                cout<<"\n\t\t\tYour CGPA is "; co(lo(rr),14);
                cout<<semtot/l<<" "<<d.say<<endl<<endl;
                sub:
                co(lo(rr),11); pause; cls;
                cout<<"\n\n\n\t\t1. Calculate Again"<<endl;
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

                }
                                                                                                                        string fake; getline(cin, fake);
}

void gpa_index(char ch)////////GPA_INDEX////////////////////
{
  if(ch=='1'){ cls;
    cout<<"\n\n\t\t  According to Daffodil International University GRADING"; ul;
    cout<<"\n\tMarks out of 100   Grade    Grade point        Remarks\n";
    cout<<"\t========================================================\n\n";
    cout<<"\t 80 to 100           A+          4.00          Outstanding\n\n";
    cout<<"\t 75 to 79            A           3.75          Excellent\n\n";
    cout<<"\t 70 to 74            A-          3.50          Very Good\n\n";
    cout<<"\t 65 to 69            B+          3.25          Good\n\n";
    cout<<"\t 60 to 64            B           3.00          Satisfactory\n\n";
    cout<<"\t 55 to 59            B-          2.75          Above Average\n\n";
    cout<<"\t 50 to 54            C+          2.50          Average\n\n";
    cout<<"\t 45 to 49            C           2.25          Below Average\n\n";
    cout<<"\t 40 to 44            D           2.00          Pass\n\n";
    cout<<"\t Less than 40        F           0.00          Fail\n\n\n";
    pause;
  }
  if(ch=='2'){ cls;
    cout<<"\n\n\t\t  According to Jiangsu University of Science and Technology"; ul;
    cout<<"\n\tMarks out of 100     Grade point           Remarks\n";
    cout<<"\t=================================================\n\n";
    cout<<"\t 95 to 100                5.00             Excellent\n\n";
    cout<<"\t 85 to 94                 4.50             Excellent\n\n";
    cout<<"\t 75 to 84                 3.50             Good\n\n";
    cout<<"\t 65 to 74                 2.50             medium\n\n";
    cout<<"\t 60 to 64                 1.50             pass\n\n";
    cout<<"\t Less than 60             0.00             Fail\n\n\n\n";
    pause;
  }
}

int gpa()///////////////////////gpa/////////////////////////
{
    cls;
    co(lo(rr), 11);   fix=0;
    std::cout<< "\n\t\t\t------------ GPA Calculating --------------"<<endl;
    std::cout<< "\t\t\tAccording to Chinese/Bangladeshi GPA system " ; ul;
    std::cout<< "\n\n\t\t1| Calculate G.P.A  "; co(lo(rr), 14); std::cout<<"[option to save record]\n"; co(lo(rr), 11);
    std::cout<< "\t\t___________________________________________";
    std::cout<< "\n\t\t2| Calculate C.G.P.A\n"
             << "\t\t___________________________________________";
    std::cout<< "\n\t\t3| SHOW GPA SYSTEM (CN/BD)\n"
             << "\t\t___________________________________________";
    std::cout<< "\n\t\t9| Return main menu \n"
             << "\t\t___________________________________________";
    char ch=getch();

    switch (ch) {
      case '1':
               while(1)
               {
                    come:
                    cls;
                    std::cout << "\n\n\n\n\n\t\t 1| Just calculate don't save record" <<'\n'
                              << "\t\t___________________________________________"
                              << "\n\t\t 2| Calculate and "; co(lo(rr), 14); cout<<"save record\n"; co(lo(rr), 11);
                    std::cout << "\t\t___________________________________________";
                    std::cout << "\n\t\t 0| BACK" <<'\n'
                              << "\t\t___________________________________________";
                              char ch1=getch();
                      switch (ch1)
                      {
                        case '1':
                              d.save=0;
                              gpain();
                              break;

                        case '2':
                              if (R==1)
                              {
                                   d.save=1;
                                   gpain();
                              }
                              else
                              {
                                   cls; std::cerr << "\n\n\t\t To save data Log in first" << '\n';
                                   Sleep(1000);
                                   return login();
                              }
                              break;

                        case '0':
                              return gpa();

                        default:
                              ch1='n';
                              system("color 4");
                              std::cout << "\t\t Wrong choice " << '\n';
                              goto come;
                              Sleep(500);
                    }

                  }
     case '2':
            cgpa();
            break;

    case '3':
            while(1){ cls;
            cout<<"\n\n\t\t\t 1| Bangladeshi GPA system";
            cout<<"\n\t\t\t =========================";
            cout<<"\n\t\t\t 2| Chinese GPA system";
            char ch3=getch();    gpa_index(ch3);
            }
            break;

     case '9':
            return main();

     default:
            system("color 4");
            std::cout << "\t\t Wrong choice " << '\n';
            return gpa();
            Sleep(500);

    }
    return gpa();
}

void pnt() //////////////////point//////////////////////////
{
            d; int chk;
            inp: co(lo(rr), 14);
            if(d.save==1)
            {
              if(d.x==1)
              {
                cout<<"\n\t\t\t      Subject name's length should be >2-10<\n";
                d.x++;
              }
              /*///////////////////////////////*/string fake; getline(cin, fake);
              name: co(lo(rr), 3);
                   if(chk==1)
                   {
                        co(lo(rr), 14); chk=0;
                        cout<<"\n\t\t\t      Subject name's length should be >2-10<\n"; co(lo(rr), 3);
                   }
              std::cout << "\n\t\t\t\t enter name of subject "<<d.i+1<<" : ";
              co(lo(rr), 11);
              getline(cin, d.encsubname); d.x = d.encsubname.size();
              if(d.x>10 || d.x<2)
              {
                   d.x = 1; chk = 1;
                   goto name;
              }
              std::cout << "\t\t\t\t         ______________" << '\n';
              std::cout << "\t\t\t\t\t  ---"<<d.encsubname<<"---";
            }

              if(d.save!=1)
              {
                cout<<"\n\t\t\t **Don't need subject name hare\n";
              }

               std::cout << "\n\t\t  ______________________________________________" << '\n';
               std::cout << "\t\t | Enter mark of subject     "<<d.i+1<<"  |   ";
               std::cin >> d.mark;
               std::cout << "\t\t |______________________________|_______________|"<<"\n";

            if (d.mark>100 || d.mark<0)
              {
                cls;
                co(lo(rr), 6);
                std::cout << "\t\t\t  "<<d.mark<<" invalid mark of <"<<d.encsubname<<"> put it again. "<< '\n';
                co(lo(rr), 11);
                goto inp;
              }
}

void crd() //////////////////credit/////////////////////////
{

            d;
            std::cout << "\t\t | Enter credit of subject   "<<d.i+1<<"  |   ";std::cin >> d.credit;
            std::cout << "\t\t |______________________________|_______________|" << '\n';
            if(d.CB=='1'){
              ntogCN();}
              if(d.CB=='2'){
              ntogBD();}
            comment();
            std::cout <<fixed;
            cout<<setprecision(2) << "\t\t            | subject comment   |"<<d.point<<"|"<<d.say<<" |\n";
            std::cout << "\t\t            |___________________|____|__________|" << '\n';
}

int gpain()///////////////////gpain/////////////////////////
{
          d; cls;
          d.fline=0; co(lo(rr), 11);
                GPA: 
                cls;
                std::cout<<"\n\t\t\t 1| Chinese GPA system"
                         <<"\n\t\t\t ======================="
                         <<"\n\t\t\t 2| Bangladeshi GPA system";
                         d.CB=getch(); cls;
                         if(d.CB!='1' && d.CB!='2')
                         {
                             goto GPA;
                         }
          if (d.save==1)
            {
                std::cout <<"\n\n\t\t\t Enter your semester name should be like\n\t\t\t\t[winter2019] [spring2019]\n\t\t"
                          <<"And you should remember this name for checking record"
                          <<"\n\t\t"<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a
                          <<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<'\n';
            }

            if(d.ccount>=1)
            {
              string fake;
              std::cout << "\n\n\t\t\t  Click enter to continue.......";
              getline(cin, fake); d.ccount=0;
              return gpain();
            }

            std::cout << "\n\n\t\t Enter semester name :> "; getline(cin, d.smstr);
            if (d.save==1)
             {
                 string file = da.display; file+=".dat";
                 ifstream onecheck(file, ios::in);

                if(!onecheck.is_open())
                {
                    co(lo(rr), 4);  cerr<<"\n\t\t fail to open record file\n";
                    return gpa();
                }
                string semesterchk;

                while(!onecheck.eof())
                {
                    onecheck>>semesterchk;
                    if(semesterchk==d.smstr)
                    {
                        co(lo(rr), 4);  cerr<<"\n\t\t ***This semester name already exist\n\n";
                        co(lo(rr), 11);
                        pause;
                        d.ccount=0;
                        return gpain();
                    }
              }
              onecheck.close();
         }
          cout<<"\n\t\t How many subject's you have :> ";
          cin>>d.q;
          cls;

           d.sum=0, d.tot=0, d.totCr=0, d.gpa=0, d.topo=0, d.tmark=0, d.fgpa=0;

          for(d.i=0; d.i<d.q; d.i++)
            {
              pnt();  crd();
              if(d.CB=='1')
              {
                ntogCN();
              }
              if(d.CB=='2')
              {
                  ntogBD();
              }
              if (d.save==1)
              {
                record();
              }

                      d.tmark+=d.mark;
                      d.tot=d.credit*d.point;
                      d.topo+=d.point;     // Calculation part
                      d.sum+=d.tot;
                      d.totCr+=d.credit;
                      d.gpa=d.sum/d.totCr;
              }

               d.fgpa=d.gpa;
               d.fline=1;         if (d.save==1){ record(); } co(lo(rr), 11);
               std::cout << "\n\n\n\t\t\t____________________________________________________________________________" << '\n'; std::cout<<fixed;
               d.point=d.gpa; comment();
               cout<<setprecision(2)<<"\t\t\t| Total Points: "<<d.topo<<" || Total Credits: "<<d.totCr<<" || Total GPA: "<<d.gpa<<"("<<d.say<<")"<<" |"<<endl;
               std::cout << "\t\t\t|___________________________________________________________________________|" <<"\n\n\n\n";
               pause;
               d.ccount++;
    sub:
    cls;
    if (d.save==1)
      {
        cout<<"\n\n\n\t\t\t1. Calculate Again & (save)"<<endl
            <<"\t\t\t____________________________"<<endl;
      }
    else
     {
         cout<<"\n\n\n\t\t\t1. Calculate Again"<<endl
             <<"\t\t\t____________________________"<<endl;
     }
     fix=1;
      cout<<"\t\t\t0. Go Back to GPA page"<<endl
          <<"\t\t\t____________________________"<<endl;
      cout<<"\t\t\t9. Return main menu"<<endl
          <<"\t\t\t____________________________"<<endl;
      char inmenu=getch();

    switch(inmenu)
       {
         case '1':
               gpain();
               break;

         case '0':
               return gpa();

         case '9':
               return main();

         default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
    getch();

    return gpa();
}

void record()//////////////////record///////////////////////
{
            d;  char tempch[200]; string temp;
            string file = da.display; file+=".dat";
            ofstream save(file, ios::app);
             if (!save.is_open())
                {
                 system("color 4");
                 std::cerr <<"\t\t File couldn't open"<<'\n';
                }
                if (d.fline==1)
                   {
                     d.encsubname = "Total"; d.fline=0;
                     d.mark=d.tmark; d.point=d.fgpa; d.credit=d.totCr;
                   }
                if (d.fline==0)
                    {
                        temp =  d.smstr;                strcpy(tempch,temp.c_str()); encrypt(tempch);  save<<tempch<<" ";    for(int k=0; k<200; k++) { tempch[k]='\0'; }
                        temp =  d.encsubname;           strcpy(tempch,temp.c_str()); encrypt(tempch);  save<<tempch<<" ";    for(int k=0; k<200; k++) { tempch[k]='\0'; }
                        temp =  to_string(d.mark);      strcpy(tempch,temp.c_str()); encrypt(tempch);  save<<tempch<<" ";    for(int k=0; k<200; k++) { tempch[k]='\0'; }
                        temp =  to_string(d.point);     strcpy(tempch,temp.c_str()); encrypt(tempch);  save<<tempch<<" ";    for(int k=0; k<200; k++) { tempch[k]='\0'; }
                        temp =  to_string(d.credit);    strcpy(tempch,temp.c_str()); encrypt(tempch);  save<<tempch<<"\n";   for(int k=0; k<200; k++) { tempch[k]='\0'; }
                        d.ec++;   if(d.encsubname=="Total")
                                    {
                                        save.close();
                                    }
                    }
}

void index()/////////////////////index//////////////////////
{
    cls;
    logo;
    system("color e");
    char a=220, b=219;
    cout<<"\n\t\t"<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<
    a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b; cout<<"    ______________________________________\n";
    cout<<"\t\t"<<b<<"                                    "<<b; cout<<"    "<<b<<"   First Login/Register to save     "<<b<<"\n";
    cout<<"\t\t"<<b<<"      1| Login/Register ";
    if(R==0){ cout<<"[user]"; }else{ co(lo(rr),10); cout<<"\r\t\t\t\t\t  "<<da.display; co(lo(rr),14); }
                                             cout<<"      "<<b; cout<<"    "<<b<<"   your data hare for next time     "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b; cout<<"    "<<b<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a
    <<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<b<<"\n";
    cout<<"\t\t"<<b<<"      2| CALCULATOR [+-*/]          "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b<<"\n";
    cout<<"\t\t"<<b<<"      3| G.P.A Calculate            "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b<<"\n";
    cout<<"\t\t"<<b<<"      4| Record(add/show)           "<<b; cout<<"        ____               __              __\n";
    cout<<"\t\t"<<b<<"                                    "<<b; cout<<"       / __/___   _  __   / /_____  ____  / /\n";
    cout<<"\t\t"<<b<<"      5| About Developer {;}        "<<b; cout<<"      / /_/ __ \\ | |/_/  / __/ __ \\/ __ \\/ /\n";
    cout<<"\t\t"<<b<<"                                    "<<b; cout<<"     / __/ /_/ /  > <   / /_/ /_/ / /_/ / /\n";
    cout<<"\t\t"<<b<<"      6| Tools & Options            "<<b; cout<<"    /_/  \\____/ /_/|_|  \\__/\\____/\\____/_/\n";
    cout<<"\t\t"<<b<<"                                    "<<b<<"\n";
    cout<<"\t\t"<<b<<"      0| exit                       "<<b<<"\n";
    cout<<"\t\t"<<b<<"                                    "<<b; cout<<"\t\t (c)github.com/ARROOT  v1.2.1"<<endl;
    cout<<"\t\t"<<b<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<
    a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<b<<"\n";
    std::cout<<"\n\t\t    Press 1|2|3|4|5|6|0 ";
}

void check()/////////////////check//////////////////////////
{
    if (R==0)
      {
        co(lo(rr),10);
        lock;co(lo(rr),14);
        std::cerr << "\n\n\t\t\t\t   Please login first " << '\n';
        Sleep(2000);
        login();
      }
}

int login()////////////////login////////////////////////////
{
           da; cls;
           co(lo(rr), 11);
           cout<<"  \n\t\t\tWelcome to advanced login system for ADMIN "; ul;
           std::ofstream din_u("loginfo.dat",ios::app);   din_u.close();
           std::ifstream dck("loginfo.dat",ios::in);      string ck;
           getline(dck,ck);

                   if (ck>="0" && da.logfail<3)
                    {
                     cout<< "\n\t\t\t\t _____________________\n"
                         << "\t\t\t\t |1| Login           |\n"
                         << "\t\t\t\t |___________________|\n"
                         << "\t\t\t\t |2| Register        |\n"
                         << "\t\t\t\t |___________________|\n";
                    }
                   if (ck<="0" && R==0)
                    {
                     cout<< "\n\t\t\t\t _____________________\n"
                         << "\t\t\t\t |1| Register        |\n"
                         << "\t\t\t\t |___________________|\n";
                    }
                   if (R==1)
                    {
                             co(lo(rr),14);
                        cout<<"\n\t\t\t\t current user : "<<da.display<<endl;
                             co(lo(rr),11);
                        cout<< "\n\t\t\t\t _____________________\n"
                            << "\t\t\t\t |1| Record(show/add)|\n"
                            << "\t\t\t\t |___________________|\n"
                            << "\t\t\t\t |2| Log_out         |\n"
                            << "\t\t\t\t |___________________|\n";
                    }
                   std::cout << "\t\t\t\t |9| Return main menu|\n"
                             << "\t\t\t\t |___________________|\n";


                    if(da.logfail==3)
                    {
                        co(lo(rr),4);
                        lock;
                        co(lo(rr),14);
                        std::cout<<"\n\n\n\t\t   NB : You are failed to log_in 3 time's"
                                 <<"\n\t\t\tBetter Luck next time.";
                    }

                   char ch=getch();
                   switch (ch)
                     {
                        case '1':
                            if (R==1)
                                {
                                    loading();
                                    xrecord();
                                }
                            if (ck>="0" && da.logfail<3)
                                {
                                    loading();
                                    loginin();
                                }
                            else
                                {
                                    loading();
                                    registerin();
                                }
                                break;

                      case '2':
                            if (R==0)
                               {
                                    loading();
                                    registerin();
                               }
                            if(R==1)
                               {
                                    loading();
                                    R=0; da.logfail=0;
                                    return login();
                               }
                                break;

                      case '9':
                            return main();

                      default:
                        system("color 4");
                        std::cout << "wrong input" << '\n';
                        return login();
                }
                getch();

    return  login();
}

void registerin()///////////registerin//////////////////////
{
      da;  system("color a"); string match;
      char *EMAIL=new char[200], UNAME[200], En; int key=0;
      std::ofstream put("loginfo.dat",ios::app);
      std::ifstream take("loginfo.dat",ios::in);
          if (! put.is_open() && ! put.is_open())
            {
              std::cerr <<"\n\t could not open file\n";  again();
            }
        loginfunction:      
        cls;
        co(lo(rr), 11);
        std::cout << "\n\n\t\t\t\t      REGISTRATION PAGE"; co(lo(rr), 14);
        cout<<"\t\t   *(no recovery || Password keep in mind)";  co(lo(rr), 11); ul;
        std::cout << "\n\n\t\t\t__________________________________________"
                  << "\n\t\t\t  New Email    : ";
                    cin.getline(EMAIL, 200);
                    enc(EMAIL);
                    da.remail = EMAIL;

            while(!take.eof()){
                 take>>match;
                 if(da.remail==match){
                    cls;
                    cerr<<"\n\n\t This **email already exist\n\n\n";
                    Sleep(1500);  goto loginfunction;
                 }
            }

        std::cout << "\t\t\t__________________________________________"
                  << "\n\t\t\t  New Username : ";
                    cin.getline(UNAME, 200); strcpy(da.display,UNAME);
                    encrypt(da.display);  enc(UNAME);
                    da.rname = UNAME;

            while(!take.eof()){
                 take>>match;
                 if(da.rname==match){
                    cls;
                    cerr<<"\n\n\t This **name already exist\n\n\n";
                    Sleep(1500);  goto loginfunction;
                 }
            }

        std::cout << "\t\t\t__________________________________________";
        strong:
        char *PASSWORD = new char[200];
        co(lo(rr), 6);  cout<<"\n\t\t\tPassword length must be (10 <-> 30)\n";
        co(lo(rr), 11);
        std::cout << "\t\t\t__________________________________________\n";
        cout<<"\t\t\t  New Password : ";

        int i=0;
        while (1)
            {
                taking:
                PASSWORD[i] = getch();
                En = PASSWORD[i];
                if(En=='\r')
                  {
                    PASSWORD[i]='\0';
                    break;
                  }
                              if(i <10 )
                                {
                                    co(lo(rr),12);
                                }
                            else{
                                    system("color b");
                                }
                    if (En=='\b' && i>=1)
                        {
                        std::cout << "\b \b";
                        i--; goto taking;
                        }
                        if (En!=13 && En!=8)
                            {
                            std::cout << PASSWORD[i];
                            i++;
                        }
            }
        key = strlen(PASSWORD);
        if (key<10)
           {
             cls; goto strong;
           }
            enc(PASSWORD); //////////// Encryption //////////////
            da.rpassword = PASSWORD;

      put<<da.remail<<" "<<da.rname<<" "<<da.rpassword<<" "<<da.display<<std::endl;  put.close();
      if(da.remail<="0" || da.rname<="0" || da.rpassword<="0")
      {
          co(lo(rr), 4); cerr<<"\n\n\t\t\t Something wrong file can't close\n\n\n";
          pause;  delete[] EMAIL; co(lo(rr), 3); login();
      }
      else
      {
           take.close();  delete[] EMAIL; decrypt(da.display);
           ofstream del2("result_record.txt",ios::out);   del2.close();
           cls; co(lo(rr), 10);cout<<"\n\n\t\t\t\t  *Registration complete.\n\n"; lock;
           std::cout << "\n\t\t\t "<<da.display<<",  Your data is secure now.." << '\n'; Sleep(1000);
      }
}

void loginin()///////////////log_in/////////////////////////
{
        da;
        char *lpass = new char[200], *lname=new char[200], pas, En;
        int x;  string match;

        while(da.logfail<3)
        {
            cls;
            co(lo(rr), 11);
            std::cout << "\n\n\t\t\t\t####**** Login Page ****####";
                      if(da.logfail==2)
                          {
                            co(lo(rr), 4);
                            cerr<<"\n\t\t\t\t\t[ Last time ]";
                            co(lo(rr), 11);
                          }
            std::ifstream get("loginfo.dat",ios::in);  ul;
            co(lo(rr), 10);
            lock;
            co(lo(rr), 11);

            std::cout << "\n\n\t\t\t___________________________________________"
                      << "\n\t\t\t  Email/Username : ";
                      co(lo(rr), 10);
               int h=0;
               while (1)
               {
                    takingn:
                    pas=getch();
                    En=pas;  lname[h]=pas;
                    if(En=='\r')
                         {
                              lname[h]='\0';
                              break;
                         }
                    if (En=='\b' && h>=1)
                         {
                              std::cout << "\b \b";
                              h--; goto takingn;
                         }
                    if (En!=13 && En!=8)
                         {
                              std::cout <<lname[h];
                              h++;
                         }
                    }
                      enc(lname);  da.lname=lname;

            co(lo(rr), 11);
            std::cout << "\n\t\t\t___________________________________________"
                      << "\n\t\t\t  User_password  : ";
                      co(lo(rr), 10);
            int i=0;
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
                 if (En=='\b' && i>=1)
                  {
                     std::cout << "\b \b";
                     i--; goto taking;
                  }
                if (En!=13 && En!=8)
                {
                  std::cout << "*";
                  i++;
                }
            }
            enc(lpass);    da.lpassword=lpass;   co(lo(rr), 11);

           while(!get.eof())
           {
                get>>da.semail>>da.sname>>da.spassword; if(R==0) { get>>da.display; }
                if (da.sname==da.lname && da.spassword==da.lpassword || da.semail==da.lname && da.spassword==da.lpassword)
                    {
                        cls;  system("color 0a");
                        ulock;       R=1;
                    }
           } get.close();

                  if(R==0)
                    {
                        cls; co(lo(rr), 4); da.logfail++;  lock;
                        std::cerr << "\n\n\t\t\tSomething wrong USERNAME or PASSWORD\n";
                        co(lo(rr),14);
                        std::cerr << "\n\t\tNB :\t"<<da.logfail<<" time failed to login attempts out of 3."<<"\n\n";
                        co(lo(rr),2);   pause;
                    }
                    else{
                        decrypt(da.display);
                        std::cout << "\n\n\n\t\t\tLogin Successfully"<< "\n\t\t\tNow you can check and save record.";
                        co(lo(rr),14); std::cout <<"user : "<<da.display;
                        da.logfail=4;  std::cout <<"\n\n\n";
                    }

    if  (da.logfail==3)
        {
            cls;
            co(lo(rr), 6);
            std::cout<<"\n\n\t {!}";
            std::cout<<"\n\n\n\t\t\t You are failed to log_in 3 time's"
                     <<"\n\t\t\t Better Luck next time.";
        }
    }
}

void rcmain()/////////////////rcmain////////////////////////
{
  dd; cls;
  if(fix==1)
  {
    string fake; getline(cin, fake); fix=0;
  }
    cls; char tempchar[200];
    std::cout << "\n\n\t\t Enter semester name : "; getline(cin, dd.semester);  cls;
    std::cout << "\n\n\n\t\t 1| show record display in screen.\n"
              <<"\n\t\t 2| print record in a file."
              <<"\n\t\t________________________________";
              char ch=getch();

    if (ch=='2')
        {
            ofstream clean("result_record.txt", ios::out);   //clean file of before record
          if(! clean.is_open())
            {
                system("color 4");
                std::cerr << "\t\t Result File couldn't open" <<'\n';
            }
            clean<<"\n\n\t\t\t\tজিয়াংসু বিজ্ঞান ও প্রযুক্তি বিশ্ববিদ্যালয় "
                 <<"\n\t\t\t\t    江苏科技大学\n";          clean.close();
        }
          string file = da.display; file+=".dat";
          ifstream take(file, ios::in);   // taking file
            if (! take.is_open())
               {
                  system("color 4");
                  std::cerr << "\t\t Record File couldn't open" <<'\n';
               }
              ofstream result("result_record.txt", ios::app);   //take file and
              if (! result.is_open())
              {
                system("color 4");
                std::cerr << "\t\t Result File couldn't open" <<'\n';
              }
      cls;
      std::cout << "\n\t\t\t\t Please Wait..... ";

      while(!take.eof())
      {
                take>>tempchar; decrypt(tempchar);  dd.getsemester = tempchar;
                if (!(dd.getsemester==dd.semester))
                  {
                    std::cout <<"....\b\b\b";
                  }
            if (dd.semester==dd.getsemester)
               {
                take>>tempchar; decrypt(tempchar); dd.subname = tempchar;
                take>>tempchar; decrypt(tempchar); dd.mark = atof(tempchar);
                take>>tempchar; decrypt(tempchar); dd.point = atof(tempchar);
                take>>tempchar; decrypt(tempchar); dd.credit =atof(tempchar);
                dd.cm++;
                        dd.dc++;
                        Wrong:
                      if (ch=='2')
                      {
                        print();
                        dd.file++;
                      }
                      else if (ch=='1')
                      {
                        show();
                        if (dd.subname=="Total")
                          {
                            std::cerr << "\n\n\t\t\t We found " <<dd.cm-1<< " Subject in this semester.\n\n\n";
                            dd.subname="x";
                          }
                      }
                      else
                      {
                        goto Wrong;
                      }
                    }
                  }
           if (dd.semester!=dd.getsemester && dd.cm==0)
            {
                cls;
                std::cerr <<"\n\n\t\t No data Found " << '\n';
                system("color 4");
                std::cerr <<"\n\t\t\tAn error to found this semester data" << '\n'
                          <<"\n\t\t\t****Please go Back and add record*****\n\n";
            }
}

int xrecord()////////////////xrecord////////////////////////
{
   dd.semester.clear(); dd.getsemester.clear(); dd.subname.clear();

   dd.point=0; dd.credit=0; dd.mark=0; dd.cm=0;  dd.dc=2; dd.file=0;
   cls;
   string file = da.display; file+=".dat";
   ifstream check(file, ios::app|ios::in);
      if (! check.is_open())
      {
        system("color 4");
        std::cerr << "\t\t Record File couldn't open" << '\n';
      }
      string datacheck; datacheck.clear();

      check>>datacheck;   cls; system("color 0a");
        if (datacheck>"0")
        { //cout<<fix;
          std::cout << "\n\n\t\t\t 1| Show courses (record)" << '\n';
          std::cout << "\n\t\t\t 2| Add courses (record)" << '\n';
        }

     if (datacheck<="0")
       {
          std::cout << "\n\t\t\t 1| Add courses ( save record)";
          co(lo(rr), 5);
          std::cout << "  [ No record found yet]" << '\n';
          co(lo(rr), 10);
       }

       std::cout << "\n\t\t\t 9| Return main menu" << '\n';
       std::cout << "\n\t\t\t :> ";
       char ch=getch();

    switch (ch)
      {
        case '1':
          if (datacheck>="0")
          {
            rcmain();
            if(dd.file>=1)
            {
            system("start result_record.txt");
          }
        }

          if (datacheck<="0")
          {
            return gpa();
          }
           break;

      case '2':
            if (datacheck>="0")
            {
              return gpa();
            }
            else
            {
              return xrecord();
            }

      case '9':
            return main();

    }
    getch();
   return xrecord();
}

void print()/////////////////print//////////////////////////
{
      dd;
      ofstream result("result_record.txt", ios::app|ios::out);
        if (! result.is_open())
        {
          system("color 4");
          std::cerr << "\t\t Result File couldn't open" << '\n';
        }

        if (dd.cm==1)
        {
              result << "\n\n\t\t\tHare is your result of ("<<dd.semester<<")\n"
                     <<"\t\t   _________________________________________________________\n"
                     <<"\t\t   |  Subject             |  Mark  |  Points    |  credit  |\n"
                     <<"\t\t   |______________________|________|____________|__________|";
        }

        if (dd.subname!="Total" && dd.subname!="end")
        {
            result<<"\n\t\t   | "<<dd.subname<<"\t\t  |  "<<dd.mark<<"\t   |    ";
            std::cout<< fixed; result<<setprecision(3)<<dd.point<<" \t|  "<<dd.credit<<"\t   |\n";
            result<<"\t\t   |______________________|________|____________|__________|";
        }

         if (dd.subname=="Total")
          {
            dd.subname="end";
            std::cout<< fixed;
            result<<setprecision(3)
            <<"\n\t\t   | GPA : "<<dd.point<<"  | Total Credit : "<<dd.credit<<"\t\t\t   |\n";
            result<<"\t\t   |_____________|_________________________________________|";
            cout<<"\n\n\n\t\t File save successfully result_record.txt"; result.close();
          }
}

void show()/////////////////show////////////////////////////
{
    dd;
    if (dd.cm>=1 && dd.point>0 && dd.credit>0 && dd.mark>0)
      {
        if (dd.cm==1)
        {
              std::cout << "\n\n\t\t\tHare is your result of ("<<dd.semester<<")\n"
                        <<"\t\t     _____________________________________________"; }
                  if (dd.subname=="Total")
                     {
                        co(lo(rr), 14);
                        cout<<"\n\n"<<"\t\t______________________________________________________";
                     }

                    std::cout<< fixed;  cout<<setprecision(2)<<""
                    <<"\n\t\t     | "<<dd.subname<<"\r\t\t\t\t\t| "<<dd.mark<<"\r\t\t\t\t\t\t| "<<dd.point<<"\r\t\t\t\t\t\t\t| "<<dd.credit
                    <<"\r\t\t\t\t\t\t\t\t |\n";
                    std::cout<<"\t\t     |__________________|_______|_______|________|";
      }
}

int base(unsigned long int in, string ch)//////Function/////
{
 unsigned long int x=0, y=0, sum[50]={0}, digit=0, odigit[50]={0}, decimal=0;
  if(ch=="Octal")
    {
        for(int j=0; in>0; j++)
            {
              digit = in%10;
              in /= 10;
              decimal += digit*pow(8,j);
            }
            in = decimal;
            cout<<"\n\n\t"; co(lo(rr),30);
            cout<<"Decimal is   : "<<in<<endl;
            in = base(in,"binary"); co(lo(rr),14);
    }
    if (ch=="Decimal")
    {
        for (y = 1; in > 0; y++)
            {
              odigit[y] = in%8;
              in = in/8;
            }
            std::cout<<"\n\t"; co(lo(rr),46);
            cout<<"Octal is     : ";
            for(y=y-1; y>0; y--)
            {
              cout << odigit[y];
              in = (in*10) + odigit[y];
            }
            in = base(in,"Octal"); co(lo(rr),14);
     }
     if(ch=="Binary")
     {
          for(int i=0; in>0; i++)
          {
               digit = in%2;
               in   = (in-digit)/10;
               decimal += digit*pow(2,i);
          }
          in = decimal;
          in = base(in,"Decimal");
     }
     if(ch=="binary")
     {
          for(x=1; in>0; x++)
          {
              sum[x] = in%2;
              in = in/2;
          }
            std::cout << "\n\t"; co(lo(rr),94);
            cout<<"Binary is    : ";
            for(x=x-1; x>0; x--)
                {
                    cout << sum[x];
                    in += sum[x];
                }
          co(lo(rr),14);
      }
        std::cout <<"\n\n";
      return in;
}

int matchine()///////////////Matchine///////////////////////
{
  while(1)
  {
    system("cls");
    unsigned long int input, a, temp; string type;
    std::cout<<"\n\t 1| Decimal => Octal => binary \n"
             <<"\t------------------------------";
    std::cout<<"\n\t 2| Octal => Decimal => binary \n"
             <<"\t------------------------------";
    std::cout<<"\n\t 3| Binary => Decimal => Octal \n"
             <<"\t------------------------------"; co(lo(rr),11);
    std::cout<<"\n\t 9| Return to main mneu \n"; co(lo(rr),14);
    std::cout<<"\t------------------------------";
     char ch=getch();
     if(ch=='9')
     {
        return main();
     }
     invalid:  cls;
     cout<<"\n\tEnter number : ";
     cin>>input;
     if(ch=='1' && input<=1111111111)
     {
        type = "Decimal";
     }
     else if(ch=='2' && input<=1111111111)
     {
        type = "Octal";
        a = input;
        for(int i=0; a>0; i++)
        {
          temp = a%10;  a /= 10;
          if(temp>7)
          {
               cout<<"\n\tinvalid "<<type<<" number\n\n";
               pause; return matchine();
          }
        }
     }
     else if(ch=='3' && input<=1111111111)
     {
        type = "Binary";
        a = input;
        for(int i=0; a>0; i++)
         {
          temp = a%10;  a /= 10;
          if(temp>1)
          {
               cout<<"\n\tinvalid "<<type<<" number\n\n";
               pause; return matchine();
          }
         }
     }
     else{
               cout<<"\n\tinvalid "<<type<<" number\n\n";
               pause; return matchine();
        }
     input = base(input,type);
     pause;
  }
  return 1;
}

int calculator()////////////calculate///////////////////////
{
          unsigned long long int item,i,mod1,mod2,mod;
          long double add=0,sub,mul=1,div,temp,temp1;
          cls;
          co(lo(rr),11);

    cout<<"\n                           !!!!!!SIMPLE MATHEMATICS CALCULATOR!!!!!!\n\n\n"
        <<"\t\t    Operations:\n"
        <<"\t\t ____________________\n"
        <<"\t\t|( + )( - )( * )( / )|\n"
        <<"\t\t|____________________|\n"
        <<"\t\t|  M|     Mod        |\n"
        <<"\t\t|____________________|\n"
        <<"\t\t|  S|  Square root   |\n"
        <<"\t\t|____________________|\n"
        <<"\t\t|  9| return index   |\n"
        <<"\t\t|____________________|\n"
        <<"\n\tEnter the sign and HIT Enter : ";
            char o; cin>>o;
    switch(o)
        {
          case '+':
          cout<<"\n\tHow many item you want to add: "; cin>>item; cout<<endl;
          cls;
          for(i=1;i<=item;i++)
            {
              cout<<"\t\t Enter " <<i<<" value :";
              cin>>temp;  cout<<endl;  add+=temp;
            }
        co(lo(rr),14);
        std::cout<<"\n\t  Result : "<<add<<endl<<endl;
        co(lo(rr),11);
        pause;
        break;

    case '-':
            cls;
            cout<<"\n\n\tEnter value 1: ";
            cin>>temp;
            cout<<"\n\n\tEnter value 2: ";
            cin>>temp1;
            sub=temp-temp1;
            cout<<"\n\n\tSubstraction = "<<sub<<"\n\n";
            system ("pause");
            break;

    case '*':
        cout<<"\n\tHow many item you want to multiplicate : ";
        cin>>item;
        cls;
        for(i=1;i<=item;i++)
        {
            cout<<"\n\tEnter value "<<i<<" : ";  cin>>temp;
            mul*=temp;
        }
        co(lo(rr),14);
        std::cout<<"\n\t  Result : "<<mul<<endl<<endl;
        co(lo(rr),11);
        system ("pause");
        break;

    case '/':
        cls;
        cout<<"\n\t\t Enter main value : ";
        cin>>temp;
        cout<<"\n\t\t Enter div value : ";
        cin>>temp1;
        div=temp/temp1;  co(lo(rr),14);
        cout<<"\n\n\t   Division = "<<div<<"\n\n";
        co(lo(rr),11);system ("pause");
        break;

    case 'm':
    case 'M':
        cls;
        cout<<"\n\n\tEnter value 1: ";
        cin>>mod1;
        cout<<"\n\n\tEnter value 2: ";
        cin>>mod2;
        mod=mod1%mod2;
        cout<<"\n\n\tModulus = "<<mod<<"\n\n";
        system ("pause");
        break;

    case 's':
    case 'S':
        cls;
        cout<<"\n\n\t\t Enter  main value :"; cin>>item;
        cout<<"\n\t\t Enter power value :"; cin>>temp1;
        temp = pow(item,temp1);
        cout<<"\t\t result = "<<temp;
        cout<<endl<<endl;
        system ("pause");
        break;

    case '9':
        return main();

    default:
        cls;
        system("color 4");
        cout<<"                !!!!!!SIMPLE MATHEMATICS CALCULATOR!!!!!!\n\n\n";
        cout<<"\n\n\tWrong choice!\nPlease enter a correct sign.\n\n\n";
        system ("pause");
        system ("cls");
    }
  return calculator();
}

int tool()///////////////tool///////////////////////////////
{
 while (1)
  {
    cls;
    logo;
    co(lo(rr),14);
    std::cout << "\n\n\n\t\t 1| Stop watch (lap)\n"
              << "\t\t ==================="
              << "\n\t\t 2| Encrypted NOTE'S\n";
    co(lo(rr),10);
    std::cout << "\n\t\t 3| Feedback & Suggestion"
              << "\n\t\t 4| Check for update  v1.2.1"
              << "\n\t\t 9| Return maim manu"
              << "\n\t   _________________________________";
              char ch=getch();

    switch(ch)
    {
        case '1':
                sw();
                break;

        case '2':
                en_de_cry();
                break;

        case '3':
                system("start https://mssg.me/sazibarko");
                break;

        case '4':
                system("start https://github.com/ARROOT/chinese_gpa_with_some_tools");
                break;

        case '9':
            return main();

    }
  }
    return 1;
}

int sw()////////////////STOP_WATCH//////////////////////////
{
    co(lo(rr), 11);
    cls;
    cout<<"\n\t\t\t\t 1. Start (lap) STOP-WATCH\n\n\t\t\t\t 2. Return main menu"
          "\n\t\t\t\t___________________________";
          char choice=getch();

    switch(choice)
     {
        case '1':
          for(int loop=0;;)
              {
                co(lo(rr), 11);
                reset:
                cls;
                cout<<"\n\t\t\tEnter any key to start and 'Q' to quit"
                    <<"\n\n\n\n\n\n\t\t\t\t00 : 00 : 00 : 00";
                    Sleep(100);

                while(kbhit())
                    {
                      char bac_k=getch();
                                    switch(bac_k)
                                    {
                                         case 'q':
                                         case 'Q':
                                                return tool();

                                         default:
                                             cout<<"";
                                    }
                    cls;
                    int h=0, m=0, s=0, ns=0, c=0, r=0;
                    cout<<"\n\n\t\t\t  Press <space> to pause & (Enter) continue\n\n\n\n\n";
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
                                                                                        cout<<"       Press (R/r)Reset           "; }
                                                                                        r++;
                                                                                        cout<<"\n\n";
                                                                                           co(lo(rr), 11);
                                                                                           char ch1=getch();

                                                                                           switch(ch1)
                                                                                           {
                                                                                             case 'r':
                                                                                             case 'R':
                                                                                                goto reset; ch1='0';
                                                                                           } break;
                                                                                      }
                                                                                }
                         }
                         s++;
                      }
                      m++;
                   }
                   h++;
                 }
               }
            return 1;
          }
        }
    case '2':
    return 1;

  }
  return again();
}

void weqr(int ch)///////////////QR_CODE/////////////////////
{
  ofstream QRCO("QRPLAY.txt", ios::out);
 if(ch==1)
 {
  QRCO<<"█████████████████████████████████████\n████ ▄▄▄▄▄ █   █▄▀ █▄█▄ ▀█ ▄▄▄▄▄ ████\n████ █   █ █ ▀▄ ██▀ █▄ ▄ █ █   █ ████\n"
      <<"████ █▄▄▄█ █▀██▀▀▄▄▄ ▀▄▀▄█ █▄▄▄█ ████\n████▄▄▄▄▄▄▄█▄▀▄█ █ █▄▀ ▀▄█▄▄▄▄▄▄▄████\n████▄ ██ ▄▄▀▀▀▀▄▀█ ▄  ▀▄█▀▀ ▀ ▄  ████\n████▀▀▀▄█▄▄▄██▀ ▄█  ▀ █▀ ▄▀█ █▄  ████\n"
      <<"████▀█▄▀ ▀▄▀ ▀▄█▄█▀█ ▄▄ ▄ █  ▄█▀▀████\n█████▀█▄▄█▄▀▀█▀█▀▄█▄▀  █   ▄▄▄▄▀ ████\n████ ██ ▀▀▄▄▀▀█▄▀█▀█ ▀▀█ ▄█▀▀▄█▀ ████\n██████  ▄ ▄▀█▄▄ ▄▄█ █▀ █▄ █ █ ▄█▄████\n"
      <<"████▄▄██▄█▄█▀▄▄█▄▀█▀▀▄▀▀ ▄▄▄ ▄▀ ▀████\n████ ▄▄▄▄▄ █▀▀▄█▀▄▀    ▀ █▄█ █▄▀▄████\n████ █   █ █▄ ▀▄▀▄ █ ▄▄   ▄ ▄▀▀█ ████\n████ █▄▄▄█ █▀▀  ▄ ▄ █▀▄▀▀▀▀ ▀▀▄  ████\n"
      <<"████▄▄▄▄▄▄▄█▄█▄█▄▄██████▄▄▄▄▄▄█▄█████\n█████████████████████████████████████\n";

        QRCO.close();
        system("start QRPLAY.txt");
 }
 else
 {
  QRCO<<"█████████████████████████████████████\n████ ▄▄▄▄▄ █▀█ █▄▄▄  ▄ █ █ ▄▄▄▄▄ ████\n████ █   █ █▀▀▀█ ▀ ▀▀▀▀▀██ █   █ ████\n████ █▄▄▄█ █▀ █▀▀ ▄  ▄▄█ █ █▄▄▄█ ████\n"
      <<"████▄▄▄▄▄▄▄█▄▀ ▀▄█▄█▄█▄▀ █▄▄▄▄▄▄▄████\n████▄ ▄  █▄▄ ▄▀▄▀▀▄   ▀ █ ▀ ▀▄█▄▀████\n████▀ █▄██▄▄▀█▄█▀█▄▄ █ █ ▄▀  ▀█▀█████\n████ ▄▄ ▄█▄▄▄ ▄█▄▀ ▀▀▀█ ▀▀▀▀▀▄▄█▀████\n"
      <<"█████▀ █▀▄▄▀▄   ▄██▄▀▄█▀  ▄ ▀▄▄▀█████\n████ ▀▀▀▀▀▄▄█▀█▄▀▄▀▄ ▀▀ ▀▀▀ ▀▄ █▀████\n████ █▀█▀ ▄██ ▀█▀▄  ███▀▄▄█▀██▄▀█████\n████▄█▄▄██▄▄▀ ▀█▄ ▄  ▄██ ▄▄▄ ▀   ████\n"
      <<"████ ▄▄▄▄▄ █▄█▀ ▄█▄  █▄  █▄█ ▄▄▀█████\n████ █   █ █ ▀█▄ ▄▀██▀▀█ ▄▄▄▄▀ ▀ ████\n████ █▄▄▄█ █ █ ▀▀▄  ▀█ ▄ █▄▀  ▄ █████\n████▄▄▄▄▄▄▄█▄▄▄██▄▄▄█████▄█▄▄▄▄██████\n"
      <<"█████████████████████████████████████\n";

        QRCO.close();
        system("start QRPLAY.txt");

 }
}

int calculator_index()////////index of calculator///////////
{
       cls;
       co(lo(rr),14);
   std::cout<<"\n\n\n\t\t\t\tAdvanced Calculating System"; ul;
   std::cout<<"\n\t\t\t_______________________\n"
            <<"\t\t\t| 1| Normal Calculator |\n"
            <<"\t\t\t|______________________|\n"
            <<"\t\t\t| 2| BASE Calculator   |\n"
            <<"\t\t\t|______________________|\n"
            <<"\t\t\t| 9| Return main menu  |\n"
            <<"\t\t\t|______________________|";
  char choice=getch();

  switch (choice)
  {
    case '9':
          return main();

    case '1':
          loading();
          calculator();
          break;

    case '2':
          loading();
          matchine();
          break;

    default:
        system("color 4");
        cls;
        cout<<"\n\n\n\t\t\t Something Going Wrong [wrong input or system fail]\n\n\n";
        return calculator_index();
  }
  return calculator_index();
}

int developer()//////////////developer//////////////////////
{
  lop:
  cls;
  co(lo(rr), 14);
  cout<<endl;
  cout<<"\t\t\t"<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<
  a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<"\n";
  cout<<"\t\t\t"<<b<<"                                                  "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"               SAJIB AHAMED ARKO                  "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"   Jiangsu University of Science and Technology   "<<b<<"\n";
  cout<<"\t\t\t"<<b<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<
  a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<b<<"\n";
  cout<<"\t\t\t"<<b<<"                 FOLLOW ME                        "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"                ===========                       "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         1| Linkedin : SAJIB AHAMED               "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         2| Facebook : AHAMED SAJIB               "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         3| twitter  : Sazib arko                 "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         4| Github   : ARROOT                     "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         5| WE_Chat  : sazibarko (Qr)             "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"        =============================             "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         M| massage me (social media)             "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"        =============================             "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         P| Donate through Paypal                 "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         W| Donate through WE_Chat (Qr)           "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"        =============================             "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"         9| Return_to_Main_Menu                   "<<b<<"\n";
  cout<<"\t\t\t"<<b<<"                                                  "<<b<<"\n";
  cout<<"\t\t\t"<<b<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<
  a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<b<<"\n";
  cout<<"\n\n\t\t\t      Press 1|2|3|4|5|9|P|W|M ";
  char fc=getch();

  switch (fc)
    {
      case '1':
        system("start https://www.linkedin.com/in/sajibahamed");
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
        cls;
        weqr(2);
        goto lop;

     case 'P':
     case 'p':
        loading();
        cls;
        system("start https://www.paypal.me/sajibahamed");
        goto lop;

     case 'W':
     case 'w':
        loading();
        cls;
        weqr(1);
        goto lop;

     case 'M':
     case 'm':
        loading();
        cls;
        system("start https://mssg.me/sazibarko");
        goto lop;

    default:
      system("color 4");
      cls;
      cout<<"\n\n\n\t\t\t Something Going Wrong [wrong input or system fail]\n\n\n";
      pause;
      goto lop;
   }

}

main()//////////***MAIN FUNCTION***/////////////////////////
{
    system("color a");
    loading();
    index();
    char a=getch();

        switch(a)
           {     case '1':
                         loading();
                         login();
                        break;

                 case '2':
                         loading();
                         calculator_index();
                        break;

                 case '3':
                         loading();
                         check();
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
                         cls;
                         exit(0);

                 default:
                        system("color 4"); cls;
                        cout<<"\n\n\n\t\t\t Something Going Wrong [wrong input or system fail]\n\n\n";
                        pause; main();
                       break;

        }
  getch();
  while(a<=0);
  return 0;
}
