#include <iostream>
#include <string>
#pragma once

// this class represents the customer 
class customer {

  //cannot be accessed outside class 
  private:
    //attributes are the variables the class uses
    std::string name;
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
    customer (std::string nameIn, int roomIdIn, int numNightsIn, std::string checkInDateIn){
      name = nameIn;
      checkInDate = checkInDateIn;
      numNights = numNightsIn;
      roomId = roomIdIn;
    }

};




    
