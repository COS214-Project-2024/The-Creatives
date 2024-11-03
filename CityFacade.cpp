#include "CityFacade.h"

CityFacade::CityFacade(){
}

void CityFacade::createAPBuilding(){
    if(apartmentBuildings.size()>0){
        cout<<"Options: "<<endl;
        cout<<"1. New Apartment Building"<<endl;
        cout<<"2. Clone existing apartment building"<<endl;
        int opt;
        cin>>opt;
        if(opt == 1){
            string name;
            cout<<"You are about to create a new Apartment Building. Enter a name for it:"<<endl;
            cin>>name;
            string size;
            cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
            cin>>size;

            ApartmentFactory* af = new ApartmentFactory();
            ApartmentBuilding* myApartmentBuilding = af->construct(name);
            myApartmentBuilding->setSize(size);
            
            
            cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
            string yn;
            cin>>yn;
            if(yn == "Y"){
                myApartmentBuilding->operate();
            } 
            apartmentBuildings.push_back(myApartmentBuilding);
            cout<<"Apartment building created"<<endl;
        } else if (opt == 2){
            cout<<"Select an apartment building to clone:"<<endl;
            showBuildings("ApartmentB");
            int num;
            cin>>num;
            if(0<num-1<apartmentBuildings.size()){
                apartmentBuildings.push_back(apartmentBuildings[num-1]->clone());
            }
            cout<<"Apartment building cloned"<<endl;
        }
        return;
    }

    string name;
    cout<<"You are about to create a new Apartment Building. Enter a name for it:"<<endl;
    cin>>name;
    string size;
    cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
    cin>>size;

    ApartmentFactory* af = new ApartmentFactory();
    ApartmentBuilding* myApartmentBuilding = af->construct(name);
    myApartmentBuilding->setSize(size);
    
    cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
    string yn;
    cin>>yn;
    if(yn == "Y"){
        myApartmentBuilding->operate();
    } 
    apartmentBuildings.push_back(myApartmentBuilding);

}

void CityFacade::createUnit(){
    if(apartmentBuildings.size()>0){
        cout<<"Choose an apartment building to add your unit to: "<<endl;
        showBuildings("ApartmentB");
        int building;
        cin>>building;
       
        int number;
        cout<<"You are about to create a new unit. Enter a number for it:"<<endl;
        cin>>number;
        string size;
        cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
        cin>>size;

        ApartmentFactory* af = new ApartmentFactory();
        Unit* myUnit = af->createUnit(number, size);
        myUnit->setSize(size);
        
        
        cout<<"Would you like to make Unit "<<number<<" Operational? (Y/N)"<<endl;
        string yn;
        cin>>yn;
        if(yn == "Y"){
            myUnit->operate();
        } 
        apartmentBuildings[building-1]->addUnit(myUnit);
        cout<<"Unit created and added"<<endl;
        
        return;
    }

    cout<<"No apartment buildings in the city. Create one first"<<endl;

}

void CityFacade::createHouse(){
    if(houses.size()>0){
        cout<<"Options: "<<endl;
        cout<<"1. New house"<<endl;
        cout<<"2. Clone existing house"<<endl;
        int opt;
        cin>>opt;
        if(opt == 1){
            string name;
            cout<<"You are about to create a new house. Enter a name for it:"<<endl;
            cin>>name;
            string size;
            cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
            cin>>size;

            HouseFactory* af = new HouseFactory();
            House* myHouse = af->construct(name);
            myHouse->setSize(size);
            
            
            cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
            string yn;
            cin>>yn;
            if(yn == "Y"){
                myHouse->operate();
            } 
            houses.push_back(myHouse);
            cout<<"House created"<<endl;
        } else if (opt == 2){
            cout<<"Select a house to clone:"<<endl;
            showBuildings("House");
            int num;
            cin>>num;
            if(0<num-1<houses.size()){
                houses.push_back(houses[num-1]->clone());
            }
            cout<<"House cloned"<<endl;
        }
        return;
    }

    string name;
    cout<<"You are about to create a new House. Enter a name for it:"<<endl;
    cin>>name;
    string size;
    cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
    cin>>size;

    HouseFactory* af = new HouseFactory();
    House* myHouse = af->construct(name);
    myHouse->setSize(size);
    
    cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
    string yn;
    cin>>yn;
    if(yn == "Y"){
        myHouse->operate();
    } 
    houses.push_back(myHouse);
    cout<<"House created"<<endl;

}

void CityFacade::createLandmark(){
    if(landmarks.size()>0){
        cout<<"Options: "<<endl;
        cout<<"1. New landmark"<<endl;
        cout<<"2. Clone existing landmark"<<endl;
        int opt;
        cin>>opt;
        if(opt == 1){
            string name;
            cout<<"You are about to create a new landmark. Enter a name for it:"<<endl;
            cin>>name;
            string size;
            cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
            cin>>size;

            LandmarkFactory* af = new LandmarkFactory();
            Landmark* myLandmark = af->construct(name);
            myLandmark->setSize(size);
            
            
            cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
            string yn;
            cin>>yn;
            if(yn == "Y"){
                myLandmark->operate();
            } 
            landmarks.push_back(myLandmark);
            cout<<"Landmark created"<<endl;
        } else if (opt == 2){
            cout<<"Select a Landmark to clone:"<<endl;
            showBuildings("Landmark");
            int num;
            cin>>num;
            if(0<num-1<landmarks.size()){
                landmarks.push_back(landmarks[num-1]->clone());
            }
            cout<<"Landmark cloned"<<endl;
        }
        return;
    }

    string name;
    cout<<"You are about to create a new House. Enter a name for it:"<<endl;
    cin>>name;
    string size;
    cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
    cin>>size;

    LandmarkFactory* af = new LandmarkFactory();
    Landmark* myLandmark = af->construct(name);
    myLandmark->setSize(size);
    
    
    cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
    string yn;
    cin>>yn;
    if(yn == "Y"){
        myLandmark->operate();
    } 
    landmarks.push_back(myLandmark);
    cout<<"Landmark created"<<endl;

}

void CityFacade::createCommercial(){
    if(commercialBuildings.size()>0){
        cout<<"Options: "<<endl;
        cout<<"1. New commercial building"<<endl;
        cout<<"2. Clone existing commercial building"<<endl;
        int opt;
        cin>>opt;
        if(opt == 1){
            string name;
            cout<<"You are about to create a new commercial building. Enter a name for it:"<<endl;
            cin>>name;
            string size;
            cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
            cin>>size;

            CommercialFactory* af = new CommercialFactory();
            CommercialBuilding* myCom = af->construct(name);
            myCom->setSize(size);
            
            
            cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
            string yn;
            cin>>yn;
            if(yn == "Y"){
                myCom->operate();
            } 
            commercialBuildings.push_back(myCom);
            cout<<"commercial building created"<<endl;
        } else if (opt == 2){
            cout<<"Select a commercial building to clone:"<<endl;
            showBuildings("CommercialB");
            int num;
            cin>>num;
            if(0<num-1<commercialBuildings.size()){
                commercialBuildings.push_back(commercialBuildings[num-1]->clone());
            }
            cout<<"Commercial building cloned"<<endl;
        }
        return;
    }

    string name;
            cout<<"You are about to create a new commercial building. Enter a name for it:"<<endl;
            cin>>name;
            string size;
            cout<<endl<<"Enter a size for it(Small, Medium or Big):"<<endl;
            cin>>size;

            CommercialFactory* af = new CommercialFactory();
            CommercialBuilding* myCom = af->construct(name);
            myCom->setSize(size);
            
            
            cout<<"Would you like to make "<<name<<" Operational? (Y/N)"<<endl;
            string yn;
            cin>>yn;
            if(yn == "Y"){
                myCom->operate();
            } 
            commercialBuildings.push_back(myCom);
            cout<<"commercial building created"<<endl;

}

void CityFacade::showBuildings(string type){
    if(type == "ApartmentB"){
        for(int i = 1; i<=apartmentBuildings.size();i++){
            cout<<i<<". ";
            apartmentBuildings[i-1]->getName();
            cout<<endl;
        }
    } else if (type == "House"){
        for(int i = 1; i<=houses.size();i++){
            cout<<i<<". ";
            houses[i-1]->getName();
            cout<<endl;
        }
    } else if("Landmark"){
        for(int i = 1; i<=landmarks.size();i++){
            cout<<i<<". ";
            landmarks[i-1]->getName();
            cout<<endl;
        }
    } else if("CommercialB"){
        for(int i = 1; i<=commercialBuildings.size();i++){
            cout<<i<<". ";
            commercialBuildings[i-1]->getName();
            cout<<endl;
        }
    }
}

void CityFacade::showBuildingStats(){
    if (apartmentBuildings.size() == 0 && houses.size() == 0 && landmarks.size() == 0 && commercialBuildings.size() == 0){
        cout<<"No building stats to show, there are no buildings in the city."<<endl;
    } 

    if(apartmentBuildings.size() != 0){
        showUnits();
        cout<<endl;
    }

    if(!(houses.size() == 0)){
        cout<<"We have the following houses: "<<endl;
        for(int i = 1; i<=houses.size();i++){
            cout<<i<<". ";
            houses[i-1]->getName();
            cout<<endl;
        }
        cout<<endl;
    }

    if(!(landmarks.size() == 0)){
        cout<<"We have the following landmarks: "<<endl;
        for(int i = 1; i<=landmarks.size();i++){
            cout<<i<<". ";
            landmarks[i-1]->getName();
            cout<<endl;
        }
        cout<<endl;
    }

    if(!(commercialBuildings.size() == 0)){
        cout<<"We have the following commercial buildings: "<<endl;
        for(int i = 1; i<=commercialBuildings.size();i++){
            cout<<i<<". ";
            commercialBuildings[i-1]->getName();
            cout<<endl;
        }
        cout<<endl;
    }
}

void CityFacade::showUnits(){
    for(int i = 0; i<apartmentBuildings.size();i++){
        if(apartmentBuildings[i] && apartmentBuildings[i]->numUnits() != 0){
            cout<<"In apartment building ";
            apartmentBuildings[i]->getName();
            cout<<" we have the following units: "<<endl;
            apartmentBuildings[i]->printUnits();
        } else if(apartmentBuildings[i] && apartmentBuildings[i]->numUnits() == 0){
            cout<<"We have an Apartment Building called ";
            apartmentBuildings[i]->getName();
            cout<<" without units."<<endl;
        } else{
            cout<<"No units to show. Apartment Buildings do not have units yet"<<endl;
        }
    }
}

void CityFacade::showAllStats(){
        showBuildingStats();
        showCitizenStats();
        showUtilityStats();
        showServicesStats();
        showTaxStats();
        showGrowthStats();
}

void CityFacade::showCitizenStats(){
    if(citizens.size() == 0){
        cout<<"No citizens to show"<<endl;
    }

    cout<<"We have the following citizens: "<<endl;
    for(int i = 0; i<citizens.size();i++){
        cout<<i+1<<". ";
        citizens[i]->display();
    }
}

void CityFacade::createCitizen(){
    cout<<"Which type of citizen would you like to create: "<<endl
        << "1. Adult" << endl << "2. Child" <<endl;
    int type;
    cin>>type;
    if(type == 1){
        createAdult();
    } else if(type == 2){
        createChild();
    }
}

void CityFacade::createChild(){
    string name;
    int age = 20;
    cout<<"Give the child a name: "<<endl;
    cin>>name;
    cout<<endl;

    while(age>18){
        cout<<"Give the child an age: "<<endl;
        cin>>age;
    }
    
    ConcreteCitizenBuilder builder;
    CitizenDirector director(&builder);

    // Create a child citizen and display initial state
    Citizen* child = director.createChild(name, age, 100);
    cout << "Child citizen created" << endl;
    
    citizens.push_back(child);

}

void CityFacade::createAdult(){
    string name;
    string employment;
    bool employed;
    double income;
    int age = 10;
    cout<<"Give the adult a name: "<<endl;
    cin>>name;
    cout<<endl;

    while(age<18){
        cout<<"Give the adult an age: "<<endl;
        cin>>age;
    }

    cout<<"Is the adult employed? (Y/N)"<<endl;
    cin>>employment;

    if(employment=="Y" || employment == "y"){
        cout<<"Set the adult's income"<<endl;
        cin>>income;
        employed = true;
    } else if(employment=="N" || employment == "n"){
        income = 0.0;
        employed = false;
    }
    
    ConcreteCitizenBuilder builder;
    CitizenDirector director(&builder);

    // Create a child citizen and display initial state
    Citizen* adult = director.createAdult(name, age, 100,income, employed);
    cout << "Adult citizen created" << endl;
    cout << endl;
    citizens.push_back(adult);
}
void CityFacade::updateCitizens(){
    if(citizens.size() == 0){
        cout<<"No citizens to update"<<endl;
    }

    int update = -10;

    while(update<0 && update-1>citizens.size()){
        cout<<"Which citizen do you want to update?"<<endl;
        showCitizenStats();
        cin>>update;
    }
    
    cout<<"From citizen ";
    citizens[update-1]->display();
    cout<<endl;

    cout<<"What would you like to update? "<<endl
        <<"1. Employment"<<endl
        <<"2. Income"<<endl;
    int choice;
    cin>>choice;
    if(choice == 1){
        if(citizens[update-1]->getEmployment()){
            citizens[update-1]->setEmploymentStatus(false);
            citizens[update-1]->setIncome(0.0);
        } else{
            citizens[update-1]->setEmploymentStatus(true);
        }
        cout<<"Citizen employment status updated"<<endl;
    } else if (choice ==2){
        if(citizens[update-1]->getEmployment()){
            cout<<"Insert income: "<<endl;
            double income;
            cin>>income;
            citizens[update-1]->setIncome(income);
        } else{
            cout<<"Citizen is unemployed, cannot update income"<<endl;
        }
    }

    
}
void CityFacade::setCitizenDetails(Citizen* citizen, const string& name, int age, double income, int satisfaction, bool isEmployed) {
    citizen->setName(name);
    citizen->setAge(age);
    citizen->setIncome(income);
    citizen->setSatisfaction(satisfaction);
    citizen->setEmploymentStatus(isEmployed);
}

void CityFacade::moveIn(){
    if(citizens.size() != 0){
        if(apartmentBuildings.size() != 0 && houses.size() != 0){
            int option;
            cout<<"Which building would you like to move the citizen into?"<<endl
                <<"1. Apartment"<<endl
                <<"2. House"<<endl;
            cin>>option;
            if(option == 1){
                moveIntoApartment();
            } else if(option == 2){
                moveIntoHouse();
            }
        }

        if(apartmentBuildings.size() == 0 && houses.size() != 0){
            cout<<"You can only move into a house, there are no apartments"<<endl;
            moveIntoHouse();
        }

        if(apartmentBuildings.size() != 0 && houses.size() == 0){
            cout<<"You can only move into an apartment, there are no houses"<<endl;
            moveIntoApartment();
        }
    } else{
        cout<<"There are no citizens for you to move in"<<endl;
    }
}

void CityFacade::moveIntoHouse(){
    int citizen;
    cout<<"Which citizen wants to move in: "<<endl;
    showCitizenStats();
    cin>>citizen;

    int house;
    cout<<"Which house would you like to move the citizen into?"<<endl;
    showBuildings("House");
    cin>>house;

    houses[house-1]->addResident(citizens[citizen-1]);
    cout<<"Citizen moved into house "<<endl;
    houses[house-1]->displayInfo();
    cout<<endl;
    
}

void CityFacade::moveIntoApartment(){
    int citizen;
    cout<<"Which citizen wants to move in: "<<endl;
    showCitizenStats();
    cin>>citizen;

    int apartment;
    cout<<"Which apartment building would you like to move the citizen into?"<<endl;
    showBuildings("ApartmentB");
    cin>>apartment;

    int unit;
    cout<<"Which unit would you like to move the citizen into?"<<endl;
    apartmentBuildings[apartment-1]->printUnits();
    cin>>unit;

    apartmentBuildings[apartment-1]->getUnits()[unit-1]->addResident(citizens[citizen-1]);
    apartmentBuildings[apartment-1]->addResident(citizens[citizen-1]);
    cout<<"Citizen moved into apartment building"<<endl;
    apartmentBuildings[apartment-1]->displayInfo();
    cout<<endl;
}

void CityFacade::visitLandmark(){
    if(landmarks.size() == 0){
        cout<<"No landmarks to visit"<<endl;
    } else{
        int citizen;
        cout<<"Which citizen wants to visit a landmark? "<<endl;
        showCitizenStats();
        cin>>citizen;

        int landmark;
        cout<<"Which landmark would you like the citizen to visit?"<<endl;
        showBuildings("Landmark");
        cin>>landmark;

        int transportOption;
        cout << "Select mode of transport: "<<endl
             << "1. Walk" <<endl<<"2. Cycle"<<endl
             << "3. Taxi" <<endl<<"4. Bus" << endl;
        cin >> transportOption;

        Transport* transport = nullptr;
        switch (transportOption) {
            case 1: transport = new Walk(); break;
            case 2: transport = new Cycle(); break;
            case 3: transport = new Taxi(); break;
            case 4: transport = new Bus(); break;
            default:
                cout << "Invalid option, defaulting to walking." << endl;
                transport = new Walk();
                break;
        }

        cout << "Citizen ";
        citizens[citizen-1]->display();
        cout << "is ";
        transport->travel(landmarks[landmark - 1]->getLName());
        
    }
}

void CityFacade::visitCommercialBuilding(){
    if(commercialBuildings.size() == 0){
        cout<<"No commercial buildings to visit"<<endl;
    } else{
        int citizen;
        cout<<"Which citizen wants to visit a commercial building? "<<endl;
        showCitizenStats();
        cin>>citizen;

        int commercial;
        cout<<"Which commercial building would you like the citizen to visit?"<<endl;
        showBuildings("CommercialB");
        cin>>commercial;

        int transportOption;
        cout << "Select mode of transport: "<<endl
             << "1. Walk" <<endl<<"2. Cycle"<<endl
             << "3. Taxi" <<endl<<"4. Bus" << endl;
        cin >> transportOption;

        Transport* transport = nullptr;
        switch (transportOption) {
            case 1: transport = new Walk(); break;
            case 2: transport = new Cycle(); break;
            case 3: transport = new Taxi(); break;
            case 4: transport = new Bus(); break;
            default:
                cout << "Invalid option, defaulting to walking." << endl;
                transport = new Walk();
                break;
        }

        cout << "Citizen ";
        citizens[citizen-1]->display();
        cout << "is ";
        transport->travel(commercialBuildings[commercial - 1]->getComName());
    }
}

void CityFacade::startUp(){
    
}


void CityFacade::showUtilityStats(){

}

void CityFacade::showServicesStats(){

}

void CityFacade::showTaxStats(){

}

void CityFacade::showGrowthStats(){

}
