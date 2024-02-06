#include <iostream>
using namespace std;

enum Seasons
{
    SUMMER,
    RAINY,
    WINTER
};

int main()
{
    Seasons chosenSeason;
    cout << "Choose a season (0 for SUMMER, 1 for RAINY, 2 for WINTER): ";
    int userChoice;
    cin >> userChoice;

    if(userChoice >= 0 && userChoice <=  2)
    {
        chosenSeason = static_cast<Seasons>(userChoice);

        cout << "Months of the chosen season: ";

        switch (chosenSeason)
        {
        case SUMMER:
            cout << "March,April,May";
            break;
        case RAINY:
            cout << "June,July,August,September,October";
            break;
        case WINTER:
            cout << "November,December,January,February";
            break;
        }
        cout << std::endl;

    }else
    {
        cout << "Invalid choice. Please choose a number between 0 and 2." << std::endl;
    }
    return 0;
}