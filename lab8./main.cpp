#include <iostream>
#include <string>

using namespace std;

class Fueltank{
    private:
    int m_FueltankCapacity;
    int m_Gas_grade;
    
    public:
    Fueltank(int FueltankCapacity = 3000, int gas = 98){
        m_FueltankCapacity = FueltankCapacity;
        m_Gas_grade = gas;
    }
int main(){
    Audi_Car car_2("A1", 2021, 2);
    cout << car_2.get_brand() << " : Gas_grad = " << car_2.get_Gas_grade() << endl;
    car_2.set_Gas_grade(95);
    cout << car_2.get_brand() << " : Gas_grad = " << car_2.get_Gas_grade() << endl;
    car_2.fuel_up(300,95);
    return 0;
}
