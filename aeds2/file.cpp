#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
    ofstream myfile;
    myfile.open("example.txt");
    if (myfile.is_open())
    {
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile.close();
    }
    else
        cout << "Unable to open file" << endl;
    

    /*string line;
    ifstream myfile("example.txt");
    if (myfile.is_open())
    {
        while (!myfile.eof())
        {
            myfile >> line;
            cout << "String: " << line << endl;
        }
        myfile.close();
    }
    else
        cout << "Unable to open file" << endl;*/
}