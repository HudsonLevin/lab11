#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){

    int count = 0;
    float sum = 0;
    float sumone = 0;
    float A;
    float B;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum += atof(textline.c_str());
        sumone += pow(atof(textline.c_str()),2);
        count++;
    }
    A = sum/count ;
    B = sqrt((sumone/count)-pow(A,2));
    cout << "Number of data = "<< count << "\n";
    cout << setprecision(3);
    cout << "Mean = "<< A << "\n";
    cout << "Standard deviation = "<< B << "\n";
}