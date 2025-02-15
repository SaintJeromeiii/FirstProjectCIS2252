#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    string monthOne;
    string monthTwo;
    string monthThree;
    double rainOne;
    double rainTwo;
    double rainThree;
    int averageRain = rainOne + rainTwo + rainThree;

 


    //Write a program that calculates the average monthly rainfall for three months. The program should
//ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches)
//that fell that month. The program should display a message similar to the following:

    cout << "Lets calculate the average rainfall for three months" << endl;

    cout << "Enter the first month" << endl;
    cin >> monthOne;

    cout << "How many inches did it rain" << endl;
    cin >> rainOne;

    cout << "Enter the second month" << endl;
    cin >> monthTwo;

    cout << "How many inches did it rain" << endl;
    cin >> rainTwo;


    cout << "Enter the third month" << endl;
    cin >> monthThree;

    cout << "How many inches did it rain" << '\n';
    cin >> rainThree;

    cout<< "The average monthly rainfall for "<< monthOne << " , "<< monthTwo << " and " << monthThree << " was " << (rainOne + rainTwo + rainThree) / 3 << endl;





    return 0;
}
