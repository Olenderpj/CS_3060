#include <iostream>

using namespace std;

int findMode(int [], const int);

int main(){

    // randomly generated set of 100 integers
    const int ARRAY_SIZE = 100;
    int numbers[ARRAY_SIZE] = {91, 35, 16, 39, 99, 61, 37, 46, 53, 64, 80,
                               13, 60, 33, 54, 11, 11, 21, 90, 27, 0,
                               76, 66, 80, 1, 14, 23, 72, 97, 51, 48,
                               75, 90, 53, 67, 97, 96, 2, 7, 29, 91,
                               55, 18, 21, 52, 10, 29, 4, 60, 12, 88,
                               1, 16, 17, 37, 14, 0, 89, 59, 23, 56,
                               28, 50, 21, 93, 56, 67, 46, 59, 42, 74,
                               46, 51, 16, 71, 81, 83, 53, 85, 46, 22,
                               47, 20, 50, 79, 92, 20, 2, 43, 70, 2,
                               64, 45, 91, 5, 47, 98, 67, 70, 93};

    // call the node function
    int modeValue = findMode(numbers, ARRAY_SIZE);

    // modify the script output based on the result.
    if (modeValue != -1) {
        std::cout << "Mode: " << modeValue << endl;
    } else {
        std::cout << "The Mode value is either -1 or the array has no mode" << endl;
    }
    return 0;
}

int findMode(int array[], const int ARRAY_SIZE){

    int modeValue = 0;
    int maxModeApperance = 0;

    // Iterate through the array the first time
    for (int i = 0; i < ARRAY_SIZE; i++){
        int tempCount = 0;

        // Iterate and compare the elements to the selected element above.
        for (int j = 0; j < ARRAY_SIZE; j++){
            if (*(array + i) == *(array + j)){
                tempCount ++;
            }

        // Determine if a new mode value was detected
        if (tempCount > maxModeApperance){
            maxModeApperance = tempCount;

            modeValue = *(array + i);
        }
        }
    }

    // Default case if there is no mode value
    if (maxModeApperance == 1){
        modeValue = -1;
    }

    return modeValue;

}