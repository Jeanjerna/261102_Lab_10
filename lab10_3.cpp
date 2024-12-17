#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

int main(){
    
    int N = 0;
    double sum = 0 , sum2 = 0 , u , o , num;
    
    string text;
    
    ifstream source;
    source.open("score.txt");
    
    while(getline(source , text))
    {
        N++;
        
        num = stod(text);
        
        sum += num;
        sum2 += pow(num , 2);
        
    }
    source.close();
    
    u = sum/N;
    
    o = sqrt((sum2/N) - pow(u , 2));
    
    cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << u << endl;
    cout << "Standard deviation = " << o ;
}