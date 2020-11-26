//https://rb.gy/15huw1 -project link
//https://thinfi.com/wp4z - pwd protected link
#include <iostream>
//#include <map>
#include <chrono>   //for countdown(ref link is given below)
#include <string.h>
#include <fstream>
//#include <time.h>
#include<unistd.h> //for sleep() fun-this is linux*(other for win)
using namespace std;
int pid=1;  //player id global variant- [(pid-1)=no.of players]
int qid=1;              //question id global variant
int admpwd=12345;  //administrator password
//QuestionBank function
void QN_bank(int Q_ID, string &Q, string &op, int &Ans)
{
 switch(Q_ID)
 {
   case 1:
   Q="Which one of the following river flows between Vindhyan and Satpura ranges?\n";
   op="(1) Narmada\t\t\t\t\t(2) Mahanadi\n(3) Son    \t\t\t\t\t(4) Netravati";
   Ans=1;
   break;
   case 2:
   Q="The Central Rice Research Station is situated in?\n";
   op="(1) Chennai  \t\t\t\t\t(2) Cuttack\n(3) Bangalore\t\t\t\t\t(4) Quilon";
   Ans=2;
   break;
   case 3:
   Q="Who among the following wrote Sanskrit grammar?\n";
   op="(1) Kalidasa\t\t\t\t\t(2) Charak\n(3) Panini  \t\t\t\t\t(4) Aryabhatt";
   Ans=3;
   break;
   case 4:
   Q="Which among the following headstreams meets the Ganges in last?\n";
   op="(1) Alaknanda\t\t\t\t\t(2) Pindar\n(3) Mandakini\t\t\t\t\t(4) Bhagirathi";
   Ans=4;
   break;
   case 5:
   Q="Patanjali is well known for the compilation of –\n";
   op="(1) Yoga Sutra  \t\t\t\t\t(2) Panchatantra\n(3) Brahma Sutra\t\t\t\t\t(4) Ayurveda";
   Ans=1;
   break;
   case 6:
   Q="What is the name given to the International Airport at Kolkata?\n";
   op="(1) Jawaharlal Nehru\t\t\t\t\t(2) Meenambakkam\n(3) Rajiv Gandhi    \t\t\t\t\t(4) Netaji Subhash Chandra Bose";
   Ans=4;
   break;
   case 7:
   Q="The longest pipeline connects\n";
   op="(1) Hazira to Kanpur     \t\t\t\t\t(2) Salaya to Jalandhar\n(3) Flazira to Jagdishpur\t\t\t\t\t(4) Koyali to Haldia";
   Ans=3;
   break;
   case 8:
   Q="Which one of the following countries has the largest telecom network in Asia?\n";
   op="(1) China  \t\t\t\t\t(2) Japan(3) Pakistan\t\t\t\t\t(4) India";
   Ans=4;
   break;
   case 9:
   Q="Which one of the following is a subsidiary port of Kolkata?\n";
   op="(1) Tuticorin\t\t\t\t\t   (2) Jawaharlal Nehru\n(3) Haldia   \t\t\t\t\t(4) Vishakhapatnam";
   Ans=3;
   break;
   case 10:
   Q="What is the historical Sher Shah Suri Marg now called?\n";
   op="(1) NH 4\t\t\t\t\t(2) NH 1\n(3) NH 3\t\t\t\t\t(4) NH 7";
   Ans=2;
   break;
   case 11:
   Q="Which of the following national highways covers most of Rajasthan?\n";
   op="(1) NH 2 \t\t\t\t\t(2) NH 34\n(3) NH 23\t\t\t\t\t(4) NH 15";
   Ans=4;
   break;
   case 12:
   Q="Which one of the following is the southernmost international airport in India?\n";
   op="(1) Nedimbacherry\t\t\t\t\t(2) Chhatrapati Shivaji\n(3) Raja Sansi   \t\t\t\t\t(4) Meenam Bakkam";
   Ans=1;
   break;
   case 13:
   Q="The metal whose salts are sensitive to light is?\n ";
   op="(1) Zinc  \t\t\t\t\t (2) Silver\n (3) Copper\t\t\t\t\t (4) Aluminum";
   Ans=2;
   break;
   case 14:
   Q="Patanjali is well known for the compilation of –\n ";
   op="(1) Yoga Sutra  \t\t\t\t\t (2) Panchatantra\n (3) Brahma Sutra\t\t\t\t\t (4) Ayurveda";
   Ans= 1;
   break;
   case 15:
   Q="Tsunamis are not caused by\n ";
   op="(1) Hurricanes         \t\t\t\t\t (2) Earthquakes\n (3) Undersea landslides\t\t\t\t\t (4) Volcanic eruptions";
   Ans=1;
   break;
   case 16:
   Q="D.D.T. was invented by?\n ";
   op="(1) Mosley   \t\t\t\t\t (2) Rudolf\n (3) Karl Benz\t\t\t\t\t (4) Dalton";
   Ans=1;
   break;
   case 17:
   Q="Where was the electricity supply first introduced in India –\n ";
   op="(1) Mumbai    \t\t\t\t\t (2) Dehradun\n (3) Darjeeling\t\t\t\t\t (4) Chennai";
   Ans=3;
   break;
   case 18:
   Q="First China War was fought between\n ";
   op="(1) China and Egypt  \t\t\t\t\t (2) China and Greek\n (3) China and Britain\t\t\t\t\t (4) China and France";
   Ans=4;
   break;
   case 19:
   Q="Entomology is the science that studies\n ";
   op="(1)The origin and history of technical and scientific terms\t\t\t (2)Behavior of human beings\n (3)Insects                                                 \t\t\t (4)The formation of rocks";
   Ans=3;
   break;
   case 20:
   Q="Fire temple is the place of worship of which of the following religion?\n ";
   op="(1)Taoism \t\t\t\t\t (2)Shintoism\n (3)Judaism\t\t\t\t\t (4)Zoroastrianism (Parsi Religion)";
   Ans=4;
   break;
 }
}
void player_intro()
{
   cout<<"Take a deep breath, and get ready for the brainstroming!!!"<<endl<<"->IMPORTANT INSTRUCTIONS:\n->You have 5 seconds to read the question, then after options will be displayed\n->You will get another 10 SECONDS to choose the desired option.\n->Enter option as 5 if you want life line where 2 incorrect options will be deleted and other two options will be displayed, with 10 SECONDS limit."<<endl;
   sleep(2);
   cout<<"Please enter Your name:";
}
//player class
class player
{
  private:
  string name;
  int player_id;
  int score;
  int help;
  public:
  //for a new player
  player();
  player(int i);  //just to avoid bulk entries at a time
  //player details input
  void get_details();
  friend void game(player &p);
  friend void admin(player p[]);
  friend void file(player p[]);
  //operator overloading of "<<".
  friend ostream& operator<<(ostream &o,player &p);
};
  player::player()  //dummy-constructor
  {

  }
  //for a new player input name and assign player_id
  player::player(int i)       //operator-overloading
  {
   player_intro();
    cin>>name;
    score = 0;
    help=0;
    player_id = pid++;
    cout<<"Welcome "<<name<<", your ID number will be:"<<player_id;
  }
  //player details output
  void player::get_details()
  {
    cout<<"Player name: "<<name<<endl;
    cout<<"Player's score: "<<score<<endl;
  }
  ostream& operator<<(ostream &o, player &p) // o overloading
  {
    o<<endl<<p.player_id<<"             "<<p.name<<"            "<<p.score;
    return o;
  }
  //question class
  class QuestionAns
  {
    private:
    int Q_ID;
    string Qn;  //question
    string op;   //options
    int Ans;     //correct answer
    public:
    QuestionAns()
    { if(qid>=20)
        qid-=20;
      Q_ID=qid++;
      QN_bank(Q_ID, Qn, op, Ans);
    }
    void Display_Qn()
    {
      cout<<endl<<Q_ID<<"."<<Qn;
      sleep(5);       //program sleeps for 5 seconds after                          dispaying qusetion
      cout<<op;
    }
    int get_ans()
    {
       return Ans;
    }
    friend void game(player &p);


  };
int assign_Score(int i)
{
   if(i>=0 & i<5)
   return 2;
   else if(i>=5 & i<10)
   return 5;
   else if(i>=10 & i<14)
   return 10;
   else if(i>=15 & i<20)
   return 20;
}
int adminVerify()
{ int rpwd;
  cout<<"Enter Adminstrator password:";
  cin>>rpwd;
  if(rpwd==admpwd)
  return 1;
  else
  return 0;
}
int exitStatus()   //exit status fun
{ int e;
  cout<<"\nDo you want to keep the game Running, if yes enter 0 or press 1 to close the game.(data will be lost)"<<endl;
    cin>>e;
    return e;
}
int lifeline(int c_ans, int &tu, int ll)
{        int r_ans;
         cout<<endl<<"---LIFE-LINE MODE--Number-"<<ll<<"----\n";
         cout<<"option "<<5-c_ans<<"                 option "<<c_ans;   //display two options
         cout<<endl<<"Your Answer:";
         auto start_s = std::chrono::system_clock::now(); //countdown-start
         cin>>r_ans;   // input response
         auto stop_s = std::chrono::system_clock::now();
        if(stop_s - start_s <= std::chrono::seconds(10))
        {tu=0;
         return r_ans;
        }

}

void game(player &p)  //game fun
{
   QuestionAns q[20];  //feedind 20 qns
   int ex=0; //exit status
   int i=0;  //qn index
   int c;     //for correct ans storage in case of wrongAns
   int ll=0;  //lifeline limit variable
   do
   {
     q[i].Display_Qn();
     int r_ans,c_ans;    //response ans
     c=c_ans=q[i].get_ans();
     cout<<endl<<"Your Answer:";
     //*{https://stackoverflow.com/questions/40811438/input-with-a-timeout-in-c} - countdown reference *//
     auto start_s = std::chrono::system_clock::now(); //countdown-start
     cin>>r_ans;   // input response
     auto stop_s = std::chrono::system_clock::now();
     //countdown-stop
     sleep(1);  //1 sec delay after taking response
     if(stop_s - start_s <= std::chrono::seconds(10))//check10sec
     {
       //life line case(if response is 5 and limit<3)
       if(r_ans==5 && ll<3)
      {
        int tu=0;
        ll++;
        r_ans=lifeline(c_ans,tu,ll);
        if(r_ans==c_ans && tu==0)
        {
         cout<<"Right answer!!!\n";
         sleep(1);
         if(ll>2)
         {cout<<"->Your lifelines are deactivated\nFrom now on option 5 will be treated as wrong answer";
         sleep(5);
         }
         cout<<"\nYour next question is on the way ..."<<endl;
         ex=0;
         p.score+=assign_Score(i);
        }
        else if(tu==1)
        {
          cout<<"\nTimes UP!!! You have taken More than 10 seconds\n";
          ex=1;
        }
        else if(r_ans!=c_ans)
        {
          ex=1;
        }

      }
      //life-line case ends

       else if(r_ans==c_ans)      //if response is correct
      {
       cout<<"Right answer!!!\n";
       sleep(1);
       cout<<"Your next question is on the way ..."<<endl;
       ex=0;
       p.score+=assign_Score(i);
      }
     else                 //if response is wrong
      {
       ex=1;
      }
     i++;
     }
     else
     {
      cout<<"\nTimes UP!!! You have taken More than 10 seconds\n";
      ex=1;
     }


   }
   while(ex==0 && i<20);
   if(ex==1)          //game over-display over all score
   {
     cout<<"Oops you have lost the game.\nThe correct answer was option "<<c;
     cout<<"\nYour Total score is "<<p.score;
   }
     if(i==20)
   {
     cout<<"nMay your success keep blooming like a brilliant flower!\nCongrats on your redwood-sized success\n";
     cout<<"You have answered all Questions Correctly!!!!";

   }


}
void admin(player p[])
{ int ms=-1,mid=1; // ms-maxscore mid=maxid
  cout<<"\n---------Administrator Mode------"<<endl;
  cout<<"Here are the details of the players."<<endl;
  cout<<"\nPlayerID     PlayerName       PlayerScore";
  for(int i=0;i<=pid-1;i++)
  { // player p[i];

    cout<<p[i];
  }
  //finding max scorer
  for(int i=0;i<pid-1;i++)
  {
    if(p[i].score>ms)
    {
      ms=p[i].score;
      mid=p[i].player_id;
    }
    else
    continue;
  }
  /////mid is max id;
  cout<<endl<<"Maximum score is "<<ms<<" Scored by "<<p[mid-1 ].name<<endl;
}
//taking whole players data into file before closing game
void file(player p[])  //will be done just before closing program.
{

  ofstream o("players.txt",ios::app);  //openfile
  //putting data in file(can be viewed same as admin format)
  o<<"\nPlayerID     PlayerName       PlayerScore";
  for(int i=0;i<pid-1;i++)
  {
    o<<endl<<p[i].player_id<<"             "<<p[i].name<<"            "<<p[i].score;
  }
  o<<"\n------------------------------------------------------------------------------------";
  o.close();
}

void gameintro()
{

  cout<<"******************************************************************\n";
  cout<<"*                OBJECT ORIENTED PROGRAMMING CONCEPTS            *\n";
  cout<<"*                            PROJET                              *\n";
  cout<<"*                       Welcome to Quiz                          *\n";
  cout<<"*                                                                *\n";
  cout<<"*                                                                *\n";
  cout<<"******************************************************************\n";



}
int main() {
  int pa;    //player or admin choice variable
  int i=0,ex=0; //ex is exit status from game - i for incrPlayer
  player *p= new player[20];  //array of players
  //intro
  gameintro();
  //cout<<"Welcome to the QUIZ"<<endl;
  while(ex==0)
  {
    cout<<"Press 1 for player mode, press 2 for administrator mode:";
  cin>>pa;
  //player option
  if(pa==1)
  {
  cout<<"\n----------Player Mode----------\nAre you new to the game then press 1, else 0:";  int ch;
  cin>>ch;
  if(ch==1)  //new player
  { p[i]=player(i); //take details of new player.

    game(p[i++]);   //MAIN GAME.

  }
  else if(ch==0 && i>=1)
  {
    int id; //playerid i/p
    cout<<"Enter  your player ID number:";
    cin>>id;
    p[id-1].get_details();   //details will be furnished
  }
  ex=exitStatus();

  }
  else if(pa==2)
  {
    if(adminVerify())
    {  if(pid>1)
       admin(p);
       else
       cout<<"No players yet";
    }
    else
    {
      cout<<"Incorrect password, Access Denied";
      ex=1;
    }
    ex=exitStatus();
  }
  }
  //storing game(players) data in a file
  file(p);
  //delete the dynamically alloted memory after game
  delete []p;
  //QuestionAns q[20];  //feedind 20 qns
  //q[19].Display_Qn(); //demo to display qn.
  // p[1].get_details(); player details (id = 1+1)
}


