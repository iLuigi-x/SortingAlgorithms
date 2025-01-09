#include <iostream>
#include <vector> 
using namespace std; 

void bubbleSort (vector<int>& myVector);

int main() {
    //Create a unsorted vector to be used in the sort function 
    vector<int> michaelsUnsortedVector = {10, 66, 900, 1, 50, 20, 999, 77, 65, 37, 555}; 
    int vectorSize = michaelsUnsortedVector.size();

    //Print Unsorted Vector
    cout << "Unsorted Vector: ";
    for (int i = 0; i < vectorSize; ++i) {
        cout << michaelsUnsortedVector[i] << " ";
    }
    cout << endl; 

    //Function call to sort the vector
    bubbleSort(michaelsUnsortedVector);

    //Print sorted vector
    cout << "Sorted Vector: ";
    for (int i = 0; i < vectorSize; ++i) {
        cout << michaelsUnsortedVector[i] << " ";
    }
    cout << endl;
}

void bubbleSort (vector<int>& myVector) {
    //Define vector size
    int size = myVector.size();

    //outer loop for each number of elements to be sorted
    for(int i = 0; i < size; ++i) {

        //last i elelments already corrected
        for(int j = 0; j < size - i - 1; ++j) {
            
            //compare current element with next element
            if (myVector[j] > myVector[j + 1]){

                //swap if j+1 element is greater than j
                swap(myVector[j], myVector[j+1]);
            }
        }
    }
}