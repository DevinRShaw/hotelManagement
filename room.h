#include <iostream>
#include <string>
#pragma once

// this class represents the room 
class room {

  //cannot be accessed outside class 
  private:
  
    //attributes are the variables the class uses
    int roomId;
    bool occupied;
    std::string name;


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
    bool getOccupied (){
        return occupied;
    }
    void setName(std::string nameIn){
      name = nameIn;
    }
    std::string getName(){
      return name;
    }

    

    //constructor to minimize code, method that is executed to get attributes when we create new object
    room (int roomIdIn, bool occupiedIn, std::string nameIn){
      roomId = roomIdIn;
      occupiedIn = occupied;
    }

};