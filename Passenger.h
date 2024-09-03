#ifndef PASSENGER.H
#define PASSENGER.H

#include <iostream>

class Passenger{
    
    private:
    std::string firstName;
    std::string lastName;
    std::string seatNumber;
    std::string flightNumber;
    std::string classOfService;

    public:
    Passenger(std::string firstName, std::string lastName,std::string seatNumber, std::string flightNumber, std::string classOfService);
    
    std::string getFirstName() const;
    void setFirstName(std::string const &firstName);

    std::string getLastName() const;
    void setLastName(std::string const &lastName );

    std::string getSeatNumber() const;
    void setSeatNumber(std::string const &seatNumber);
 
    std::string getFlightNumber() const;
    void setFlightNumber(std::string const &flightNumber);

    std::string getClassOfService() const;
    void setClassOfService(std::string const &classOfService);
};
#endif;