#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

 
 
class Vehicle
{

private:
string type;
  
int wheels;
  
int passengers;
  
int cargo;
  
string autoType;

public:
void setType (string);
  
void setWheels (int);
  
void setPassengers (int);
  
void setCargo (int);
  
void setautoType (string);
  
string getType ();
  
int getWheels ();
  
int getPassengers ();
  
int getCargo ();
  
string getautoType ();

};


 
class Node
{

public:
void insert (Vehicle * new_vehicle);
  
void display ();
  
void display (ofstream & out);
  
Node ();

private:
Node * next;
  
Vehicle * data;
  
int depth;

};


 
Node::Node ()
{
  
depth = 0;
  
data = NULL;
  
next = NULL;

} 
 
void

Node::display (ofstream & out)
{
  
out << data->getType () << endl << data->getWheels () << endl << data->
    getPassengers () << endl << data->getCargo () << endl << data->
    getautoType () << endl;
  
if (next != NULL)
    {
      
next->display (out);
    
}

}


void
Node::display ()
{
  
cout << data->getType () << endl << data->getWheels () << endl << data->
    getPassengers () << endl << data->getCargo () << endl << data->
    getautoType () << endl;
  
cout << endl;
  
if (next != NULL)
    {
      
next->display ();
    
}

}


 
void
Node::insert (Vehicle * new_vehicle)
{
  
if (data == NULL)
    {
      
data = new_vehicle;
      
return;
    
}
  
 
if (next == NULL)
    
    {
      
next = new Node ();
      
next->depth = depth + 1;
      
next->data = new_vehicle;
    
}
  
  else
    {				// Next isNOT null
      next->insert (new_vehicle);
    
}

}


 
void
Vehicle::setType (string input)
{
  type = input;
} 
void

Vehicle::setWheels (int input)
{
  wheels = input;
} 
void

Vehicle::setPassengers (int input)
{
  passengers = input;
} 
void

Vehicle::setCargo (int input)
{
  cargo = input;
} 
void

Vehicle::setautoType (string input)
{
  autoType = input;
} 
string Vehicle::getType ()
{
  return type;
}


int
Vehicle::getWheels ()
{
  return wheels;
}


int
Vehicle::getPassengers ()
{
  return passengers;
}


int
Vehicle::getCargo ()
{
  return cargo;
}


string Vehicle::getautoType ()
{
  return autoType;
}


int userInput()
{
    string type, int passengers, int cargo, string autoType;
    
    cout << "Is this an automobile or a truck? Enter 'automobile' or 'truck'" << endl;
  
    cin >> type;
  
    cout << "How many wheels does this vehicle have?" << endl;
  
    cin >> wheels;
  
    cout >> "How many passengers can this vehicle hold?" << endl;
  
    cin >> passengers;
  
    if (type = "truck")
    {
      
    cout << "How much cargo (in pounds) can this vehicle hold?" << endl;
      
    cin >> cargo;
    
    }
  
    if (type = "automobile")
    {
      
    cout << "What type of automobile is this?   Enter van, car or wagon" <<
	endl;
      
    cin >> autoType;
    
}
}
 
 
int main () 
{
    
Node * ll = new Node ();
  
Vehicle * s;
  
for (int x = 0; x < 10; x++)
    {
      
s = new Vehicle ();
      
s->setName ("John Johnson");
      
s->setEmail ("john.johnson@example.com");
      
s->setGPA (float (x) + 0.2);
      
ll->insert (s);
    
} 

ll->display ();
  
 
ofstream out;
  
out.open ("output.txt");
  
 
ll->display (out);
  
 
out.close ();

}
