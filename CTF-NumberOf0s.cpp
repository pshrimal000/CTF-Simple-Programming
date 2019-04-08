#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void importData(vector<string> &myData);
void printData(vector<string> &myData);
int numberOfZerosOnes(vector<string> &myData);

int main()
{
    vector<string> myData;

    importData(myData);
    cout<<"Number of Zeroes: "<<numberOfZerosOnes(myData)<<endl;

    return 0;
}

void importData(vector<string> &myData)
{
    ifstream inData;
    string num;


    inData.open("data.dat");
    while(!inData.eof())
    {
        getline(inData, num);
        myData.push_back(num);
    }
inData.close();
}

void printData(vector<string> &myData)
{
    for(int i=0; i<myData.size()-1; i++)
    {
        cout<<myData[i]<<endl;
    }
}

int numberOfZerosOnes(vector<string> &myData)
{
    //Counts the number of lines for each string containing 0 is a multiple of 3 or 1 is a multiple of 2.
    int counting=0;
   for(int i=0; i<myData.size()-1; i++)
   {
       size_t n=count(myData[i].begin(), myData[i].end(), '0');
       size_t m=count(myData[i].begin(), myData[i].end(), '1');

       if((n%3==0) || (m%2==0))
       {
           counting++;
       }
   }
   return counting;
}

