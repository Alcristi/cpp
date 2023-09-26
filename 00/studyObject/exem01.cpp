#include <iostream>

struct Time {
    int hour;
    int minute;
    int second;
};

void printMilitary(const Time &);
void printStandard(const Time &);

int main()
{
    Time dinnerTime;

    dinnerTime.hour = 18;
    dinnerTime.minute = 30;
    dinnerTime.second = 0;

    std::cout << " O jantar será servido às ";
    printMilitary(dinnerTime);
    std::cout << " , hora militar, \n que é ";
    printStandard(dinnerTime);
    std::cout << " , hora padrão\n";

    dinnerTime.hour = 29;
    dinnerTime.minute = 29;

    std::cout << "\nHoras com valores inválidos:  ";
    printMilitary(dinnerTime);
    std::cout << std::endl;
    return 0;
}

void printMilitary(const Time &t){
    std::cout << (t.hour < 10 ? "0" : "") << t.hour << ":" 
        << (t.minute < 10 ? "0" : "") << t.minute;
}


void printStandard(const Time &t){
    std::cout << ((t.hour  ==  0 || t.hour == 12 ) ? 12 : t.hour % 12 ) << ":" 
        << (t.minute < 10 ? "0" : "") << t.minute << ":" 
        << (t.second < 10 ? "0" : "") << t.second 
        << (t.hour < 12 ? " AM" : " PM");
}



