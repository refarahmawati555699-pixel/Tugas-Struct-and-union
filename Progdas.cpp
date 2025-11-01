#include <iostream>
#include <string>
using namespace std;

struct carType
{
    string manufacture;
    string model;
    string modelType;
    string color;
    int numOfDoors;
    int mpgCity;
    int mpgHighway;
    int yearBuilt;
    double price;
};
int main()
{
    carType car;
    cout << "input data mobil" << endl;
    cout << "manufacture:";
    cin >> car.manufacture;
    cout << "model:";
    cin >> car.model;
    cout << "model type:";
    cin >> car.modelType;
    cout << "color:";
    cin >> car.color;
    cout << "Number of doors: ";
    cin >> car.numOfDoors;
    cout << "Miles per gallon in city: ";
    cin >> car.mpgCity;
    cout << "Miles per gallon on highway: ";
    cin >> car.mpgHighway;
    cout << "Year Built:";
    cin >> car.yearBuilt;
    cout << "prices: $";
    cin >> car.price;
}
