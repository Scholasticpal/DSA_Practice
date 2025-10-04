// classess - blueprints
// objects - instance of a class
// encapsulation - 
// access modifiers
// getter/setters

#include<bits/stdc++.h>

using namespace std;

class Car{
    string name;
    string model;
    int price;
    string fuel_type;

public:
    Car(string car_name, string car_model, int car_price, string fuel_type){
        name = car_name;
        model = model;
        setPrice(car_price);
        setFuelType(fuel_type);
        cout<<"Car "<<name<<" of model "<<model<<" created succesfully";
    }

    ~Car(){
        cout<<"BOOM - car destroyed";
    }

    string getName() const{
        return name;
    }

    string getModel() const{
        return model;
    }

    void setPrice(int new_price){
        if(new_price>0 && new_price<= 100000){
            price = new_price;
            cout<<"Car price set successfully to "<<price;
        }
        else{
            cout<<"Invalid Input";
        }
    }

    void setFuelType(string new_fuel_type){
        if(new_fuel_type != "standard" && new_fuel_type != "diesel"){
            cout<<"invalid fuel type input";
        }
        else{
            fuel_type = new_fuel_type;
            cout<<"Fuel type changed to "<<fuel_type;
        }
    }
};


int mno(Car* car_ptr){

    cout<< car_ptr->getName()<<"eeeeeeeeeeeeeeeee";
    delete car_ptr;
    return 0;
}

Car* abc(){
    Car swift("Swift", "XL", 45000, "diesel"); //static
    // Car newCar(); -> lame he ye

    cout<< swift.getModel();

    swift.setPrice(1000);
    swift.setPrice(-12412);

    Car* car_ptr = new Car("abc123", "XL", 45000, "diesel");

    mno(car_ptr);

    // swift.setFuelType("petrol");
    return car_ptr;
}



int main(){
    Car* ptr = abc();
    return 0;
}