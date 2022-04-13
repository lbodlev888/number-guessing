#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    unsigned nr = rand() % 100 + 1, guess = 0, count = 0;
    while(guess != nr)
    {
        cin >> guess;
        if(guess > nr) cout << "nr e mai mic\n";
        if(guess < nr) cout << "nr e mai mare\n";
        count++;
    }
    cout << "Felicitari, ai ghicit\nNr era " << nr <<
    "\nai ghicit in " << count << " incercari";
    return 0;
}
