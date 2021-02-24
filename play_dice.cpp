/* Leo Brooks */
    
#include <iostream>
#include <cstdlib>  // contains the rand() and srand() function 
#include <ctime>    // time() function
using namespace std;


int main()
{
    srand(time(0)); // initialize random seed generator to current time: 
					// needed to generate a different sequence of random numbers
					// each time you run your program

    // Add your code to play the dice game here
    cout << "~ Dice Game ~" << endl;
    const int L2 = 2;
    const int L3 = 3;
    const int L12 = 12;
    const int W7 = 7;
    const int W11 = 11;
    const int SUBROLL = 7;
    int points =0;
    char playGame;
    cout << "Want to play? (Y/N)" << endl;
    cin >> playGame;

    while (playGame== 'Y')
    {
        int r1 = rand()%6+1;
        int r2 = rand()%6+1;
        int total = r1+r2;
        cout << "First roll: " << r1;
        cout << "Second roll: " << r2;
        cout << "Total: " << total;
        points +=total;

        if (total == W7 || total == W11)
        {
            cout << "You won!" << endl;
            cin >> playGame;
        }
        else if(total == L2 || total == L3 || total ==L12)
        {
            cout << "You lost. Want to play again? (Y/N)" << endl;
            cin >> playGame;
        }
        else
        {
            do
            {

                r1 = rand()%6+1;
                r2 = rand()%6+1;
                total = r1+r2;
                cout << "First roll: " << r1;
                cout << "Second roll: " << r2;
                cout << "Total: " << total;
                points = 0;
                points +=total;

            }while (total != 0);
            
            if (total == SUBROLL)
            {
                cout << "You lost." << endl;
                cin >> playGame;
            }
            if(total == W7 || total == W11)
            {
                cout << "You won!" << endl;
                cin >> playGame;
            } 
            
            

    }

}
}
