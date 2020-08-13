//
//  movie.hpp
//  C++Mastery
//
//  Created by Raul on 6/27/19.
//  Copyright © 2019 Raul. All rights reserved.
//

#ifndef movie_hpp
#define movie_hpp
#include <string>
class Movie{
private:
    std::string name;
    double price;
    std::string releaseDate;
    
public:
    Movie();
    Movie(std::string name, double price, std::string releaseDate);
    //accessors
    std::string getName();
    double getPrice();
    std::string getReleaseDate();
    
    //mutators
    void setName(std::string name);
    void setPrice(double price);
    void setReleaseDate(std::string releaseDate);
    
};







#endif /* movie_hpp */
