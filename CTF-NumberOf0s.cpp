#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void importData(vector<double> &myData);
void printData(vector<double> &myData);

int main()
{
    vector<double> myData;

    importData(myData);
    printData(myData);

    system("PAUSE");
    return 0;
}

void importData(vector<double> &myData)
{
    ifstream inData;
    double data;
    string line;
    inData.open("data.dat");
    while(!inData.eof())
    {
        inData>>data;
       // getline(inData, line);
      //  cin.clear();
        myData.push_back(data);
    }
inData.close();
}

void printData(vector<double> &myData)
{
    for(int i=0; i<myData.size()-1; i++)
    {
        cout<<myData[i]<<endl;
    }
}