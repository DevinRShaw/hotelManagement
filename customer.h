#include <iostream>
#include <string>
// this class represents the customer 

class customer {
  //cannot be accessed outside class 
  private:
    //attributes are the variables the class uses
    std::string name;
    int numNights;
    int numBeds;
    std::string checkInDate;


  //attributes can be accessed outside class in methods
  public:

    //methods are the functions the class uses

    void displayGuest(){
      std::cout << name << "\n";
      std::cout << numBeds << " beds\n";
      std::cout << numNights << " nights\n";
      std::cout << "Date of check in " << checkInDate;
    }

    //constructor to minimize code, method that is executed to get attributes when we create new object
    customer (std::string nameIn, int numBedsIn, int numNightsIn, std::string checkInDateIn){
      name = nameIn;
      numBeds = numBedsIn;
      numNights = numNightsIn;
      checkInDate = checkInDateIn;
    }

};


std::string nameIn;
int numBedsIn;
int numNightsIn;
std::string checkInDateIn;
int guestNum = 0;

void inputGuest(){
  std::cout << "Input guest information\n";
  std::cout << "Name: ";
  getline(std::cin, nameIn);
  std::cout << "Number of beds: ";
  std::cin >> numBedsIn;
  std::cout << "Number of nights: ";
  std::cin >> numNightsIn;
  std::cout <<  "Check in date: ";
  std::cin >> checkInDateIn;
  guestNum++;
  customer guestNum = customer (nameIn,  numBedsIn,  numNightsIn,checkInDateIn);
}

    
