// Unit7_Kiet_Vo 2-24-2020 STRUCTS C++
#include "appDate.h"
#include "timeOfDay.h"
#include "event.h"

void createEvent(timeOfDay t, appDate a, event e)
{
  short h = 0, m = 0, s = 0;
  short mo = 0, d = 0;
  int y = 0, decision = 0;
  string urgent = "";
  string eName = "";
  //populate timeOfDay
  cout <<"Enter Hour: ";
  cin >> h;
  t.hour = h; //Set the values based on user input

  cout <<"Enter Minutes: ";
  cin >> m;
  t.minute = m; 

  cout <<"Enter Seconds: ";
  cin >> s;
  t.second = s;

  //populate AppDate
  cout <<"Enter Month: ";
  cin >> mo;
  a.month = mo;

  cout <<"Enter day: ";
  cin >> d;
  a.dayOfMonth = d;

  cout << "Enter year: ";
  cin >> y;
  a.year = y;

  //Set event details
  //Get event information
  cout << "Enter Event Name: ";
  cin >> eName;
  e.eventName = eName;
  
  cout << "Id the event urgent? (1 = yes, 2 = no: )";
  cin >> decision;
  if(decision == 1)
  {
    e.isUrgent = true;
    urgent = "yes";
  }
  else if(decision == 2)
  {
    e.isUrgent = false;
    urgent = "no";
  }
  else 
  {
    cout <<"Invalid input";
  }
  //Put dMain in Event eMain
  e.eventDate = a;
  //Put tMain in Event eMain
  e.eventTime = t;
  //Print the Event
  cout << "\nEVENT DETAILS: " << endl;
  cout << "Event name: "  << endl;
  cout << "\nIs urgent: "  << "-->" << urgent << endl;
  cout << e.toString(); //Print date and  time calling toString() override
}

int main() 
{
//Decalre the insstances of the Structs we need for this work
event eMain;
//Create a timeOfDay to share with eMain
timeOfDay tMain;
//Create a day of month to share with eMain
appDate dMain;

createEvent(tMain, dMain, eMain);// populate and print
  return 0;  
}