#include <iostream>
using namespace std;
#include "fstream"
#include "sstream"
#include "iomanip"
#include "string"
#include "function.h"


int main() {
    //goal of this is to create a program to read data from input file into a onedimensional array(not vector)
     ifstream infile("a1.txt");
     string line;
     int nums[200];
     int count = 0;
     string num;

     if (infile.is_open()) {

         while (getline(infile, line)) {
             stringstream sS(line);
             while (getline(sS,num,' ')) {

                 nums[count] = stoi(num);
                 count++;
             }
         }

     } else {
         cout << "Couldnt open file" << endl;
     }

     getInt(80,nums,count); // gave 80, should return 79
     modify(5,999,nums,count); // very obvious number '999' passed, at index of 5 should be 999
     addInt(420,nums,count); //very obvious number passed
     addInt(699,nums,count); //very obvious number passed. add int done twice to show is dynamic
     replace_remove(5,nums,count);









    return 0;

}
