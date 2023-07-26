#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream inFile;   //Declare a file stream object
    string fileName;
    string word;
    int count = 0;

    cout << "Please enter the file name ";
    getline(cin,fileName);

    inFile.open(fileName.c_str());

    while(!inFile.eof())  // End-Of-Line() function
    {                
        inFile >> word; 
        count++;
    }

    cout << "Number of words in file is " << count;
    inFile.close();

    cin.get();  
    return 0;
}


