//
// Created by Branden Mitchell on 1/31/24.
//
#include <iostream>
using namespace std;
#include "fstream"
#include "sstream"
#include "iomanip"
#include "string"



//function to check if certain number exists and return index where its present
int getInt(int num,int arr[],int count);


//function to modify value of an integer when called with the index and return both the new value and the old value

pair<int,int> modify(int index,int new_val, int arr[], int count);

// a function that adds a new integer to the end of the array
void addInt(int number,int arr[],int &count);


//a function that takes the index of an array and replaces the value with 0 or removes it all together
int replace_remove(int index,int arr[], int &count);