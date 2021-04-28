#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int x, y;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    srand(time(0)); //seed random number generator
    int num = rand() % y + x; 
    cout << "Guess My Number Game\n\n";

    int guess = 0;
    while (guess != num) {
        cout << "Enter a guess between "<<x<<" and "<<y<<":\n\n";
        cin >> guess;

        if (guess > num) {
            cout << "Too high!\n\n";
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n";
            }
        else {
            cout << "\nCorrect! You got it in ";
        }
    }

    return 0;
}
