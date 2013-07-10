#include <iostream>
#include <fstream>

using namespace std;
bool prime(int);
int main()
{
    ifstream myFile;
    myFile.open("secret.txt");
    int out[100000];
    int i = 0;
    if (myFile.is_open())
    {
        while (!(myFile.eof()))
        {
            myFile >> out[i];
            i++;
            if ( i >=15000) break;
        }
        for (int i = 0; i < 15000; i++)
        {
            int character = out[i];
            if (prime(character))
            if ((character <= 90&&character>=65) || (character <=122 && character>=97) || character == ' ')
                cout << (char)character;
        }
    }

}

bool prime(int a)
{
    if (a==1) return false;
    if (a==0) return false;
    for (int i = 2; i < a; i++)
    {
        if (a%i == 0) return false;
    }
    return true;
}
