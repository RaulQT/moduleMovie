//
//  movie.cpp
//  C++Mastery
//
//  Created by Raul on 6/27/19.
//  Copyright © 2019 Raul. All rights reserved.
//

#include "movie.hpp"

//default constructor
Movie::Movie(){
    this->name="";
    this->price=0.0;
    this->releaseDate="";
}
//parameter constructor
Movie::Movie(std::string name, double price, std::string releaseDate){
    this->name=name;
    this->price=price;
    this->releaseDate=releaseDate;
}
