#ifndef EDUCATION_H
#define EDUCATION_H

#include <vector>
#include <string>
#include "Citizen.h"
#include "Services.h"

class Education : public Services {
private:
    int Rating;
    std::vector<Citizen*> enrolledStudents;

    void improveRating();
    void decreaseRating();

public:
    Education(int schoolCapacity);
    void enrollStudent(Citizen* citizen);
    void releaseStudent(Citizen* citizen);
    void useService(Citizen* citizen, string subject);
    void details();
    ~Education();
};

#endif