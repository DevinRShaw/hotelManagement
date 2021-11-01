#include <iostream>
#include <string>
#pragma once

// this class represents the customer 
class customer {

  //cannot be accessed outside class 
  private:
  
    //attributes are the variables the class uses
    int roomId;
    bool occupied;


  //can be accessed outside class in methods
  public:

    //methods are the functions the class uses
    void setRoomId(int roomIdIn){
      roomId = roomIdIn;
    }
    int getRoomId (){
      return roomId;
    }
    void setOccupied(bool occupiedIn){
        occupied = occupiedIn;
    }





    

    //constructor to minimize code, method that is executed to get attributes when we create new object
    room (int roomIdIn, bool occupiedIn){
      roomId = roomIdIn;
      occupiedIn = occupied;
    }

};