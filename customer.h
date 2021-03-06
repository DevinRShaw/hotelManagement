#include <iostream>
#include <string>
#pragma once

// this class represents the guest 
class guest {

  //cannot be accessed outside class 
  private:

    //attributes are the variables the class uses
    std::string name;
    std::string guestId;
    std::string checkInDate;
    int numNights;
    int roomId;


  //can be accessed outside class in methods
  public:

    //methods are the functions the class uses
    void setName(std::string nameIn){
      name = nameIn;
    }
    std::string getName(){
      return name;
    }
    void setGuestId(std::string guestIdIn){
      guestId = guestIdIn;
    }
    std::string getGuestId(){
      return guestId;
    }
    void setCheckInDate(std::string checkInDateIn){
      checkInDate = checkInDateIn;
    }
    std::string getCheckInDate(){
      return checkInDate;
    }
    void setNumNights(int numNightsIn){
      numNights = numNightsIn;
    }
    int getNumNights (){
      return numNights;
    }
    void setRoomId(int roomIdIn){
      roomId = roomIdIn;
    }
    int getRoomId (){
      return roomId;
    }





    

    //constructor to minimize code, method that is executed to get attributes when we create new object
    guest (std::string nameIn, std::string guestIdIn, int roomIdIn, int numNightsIn, std::string checkInDateIn){
      name = nameIn;
      guestId = guestIdIn;
      checkInDate = checkInDateIn;
      numNights = numNightsIn;
      roomId = roomIdIn;
    }

};




    
