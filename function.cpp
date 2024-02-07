//
// Created by Branden Mitchell on 1/31/24.
//
#include "function.h"
#include <iostream>
using namespace std;
#include "fstream"
#include "sstream"
#include "iomanip"
#include "string"
//function to check if certain number exists and return index where its present// returns 0 if not present
int getInt(int num,int arr[],int count) {

    pair<int, int> solution;
    for (int i = 0; i < count; i++) {
        if (num == arr[i]) {
            solution.first = num;
            solution.second = i;
            cout<<"num: "<<solution.first<<" , Located at: "<<solution.second<<endl;
            return i;
        }
    }
    cout<<"not found"<<endl;
    return 0;

}

//adds int to the end of the array
void addInt(int number,int arr[],int &count){
    count +=1;
    int new_arr[count];
    for (int i =0; i < count+1;i++){
        new_arr[i] = arr[i];
        if (i == count-1){
            new_arr[i] = number;
        }

    }
    cout<<"You called addInt. Below is printed list for verification. You added: "<<number<<endl;

    for (int i =0; i < count; i++){
        arr[i] = new_arr[i];
        cout<<"Index: "<< i<<" Number: "<<arr[i]<<endl;

    }



}
//function to modify value of an integer when called with the index and return both the new value and the old value
pair<int,int> modify(int index,int new_val,int arr[], int count){
    pair<int,int> solution;
    int temp_old;
    for (int i =0; i < count; i++){
        if ( i == index){
            temp_old = arr[i];
            arr[i]= new_val;
            cout<<"Im the old value: "<<temp_old<<endl;
            cout<<"im new_ val: "<<arr[i]<<endl;
            cout<<" "<<endl<<endl<<endl;

            solution.first = temp_old;
            solution.second = new_val;

        }
    }
    // for (int i=0; i < count; i++){
    //     cout<<"index: "<<i<<" number: "<<arr[i]<<endl; // this is here for testing just uncomment and you can see the new val is placed at old val index

    // }
    return solution; //returns to user in a pair
}
int replace_remove(int index,int arr[], int &count){
    int input;
    while(true) {
        cout<<"would you like to remove a value or replace a value? (1) for remove, (2) for replace: "<<endl;
        cin>>input;
        if (input == 1) {
            //removing

            int temp_arr[count-1];

            for (int i = 0; i < count; i++){
                temp_arr[i] =arr[i];
                if (i == index){
                    for (int a = i; a < count-1;a++){
                        temp_arr[a] = arr[i +1];
                        i+=1;

                    }

                }

            }

            for (int i = 0; i < count-1; i++){
                arr[i] = temp_arr[i];

            }
            cout<<"You called Remove.Below is printed list for verification, removed at index: "<<index<<endl;
            for (int i = 0; i < count-1; i++){
                cout<<"Index: "<< i << " Element: "<< arr[i]<< endl;

            }

            return 1;
        }
        else if (input == 2) {
            //replace with 0
            for (int i = 0; i< count; i++){
                if (i == index){
                    arr[i] = 0;
                }
            }
            cout<<"You called Replace.Below is printed list for verification. Replaced with 0 at index: "<<index<<endl;
            for (int i = 0; i < count; i++){
                cout<<"Index: "<< i << " Element: "<< arr[i]<< endl;

            }
            return 0;
        }
        else {
            cout << "Not valid option, try again" << endl;


        }
    }
}


