#include <bits/stdc++.h>
using namespace std;

int main()
{
    int place[4][4] = {
        {0, 0, 0, 1},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 1, 0, 0}};
    int numberOfHits = 0;
    int numberOfChances = 0;
    while (numberOfHits < 4)
    {
        int xPosition, yPosition;
        cout << "Enter the position of your guess to destroy the ship... [<4][<4]" << endl;
        cin >> xPosition >> yPosition;
        if (place[xPosition][yPosition])
        {
            place[xPosition][yPosition] = 0;
            numberOfHits++;
            cout << "Destroyed! " << (4 - numberOfHits) << " more..!" << endl;
        }
        else
        {
            cout << "Missed!" << endl;
        }
        numberOfChances++;
    }
    cout << "You won!" << endl;
    cout << "You destroyed " << numberOfHits << " ships! in " << numberOfChances << " chances." << endl;

    return 0;
}