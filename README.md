# Assignment1303
1)int getInt(int num,int arr[],int count);
- this gets an integer if it is in the array and returns its index where present, it has 3 parameters
so if you pass it the desired number, the array and the count(size of array at point in time) itll output
to the terminal where the index and the number you gave it, it also returns the index.
(image in first SS)

2)pair<int,int> modify(int index,int new_val, int arr[], int count);
- this function will modify the element at the given index if in the array. It has the following parameters:
index(the index of the element you wish to modify), the value youd like to change it to(value), the array to
iterate through and lastly the count. This function can be called and will return a pair of integers the first being
being the old value and the second being the new value, it is also printed to the console for ease of viewing.
(image in second SS)

3)void addInt(int number,int arr[],int &count);
- this function adds an integer to the very end of the list, it updates the array count so that it can be added as many times
as needed. The number you wish to add is passed along with the array and the count but by reference so that it can be updated.
the function does not return anything but it does update the array and print the list to you for verification.
(image in third SS)

4)int replace_remove(int index,int arr[], int &count);
-the replace_remove function requires an index to perform either function along with the array and the count(passed by reference
for the remove part of function). Once called the function will ask you wether youd like to remove or replace prompting you to
press 1 for remove or 2 for replace. If one is selected then the function will create a temporary array in which to store
the values up to the index given then from that location, remove the index and shift the remaining elements down.
(image in fourth SS)

if replace is chosen (2) then it will simply replace the the element at given index with a 0.
(image in fifth SS)

In both cases the list is printed for you convenience and conformation.
