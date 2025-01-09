#include <iostream>
#include <vector> 
using namespace std; 

void bubbleSort (vector<int>& myVector);

int main() {
vector<int> michaelsUnsortedVector = {10, 66, 900, 1, 50, 20, 999, 77, 65, 37, 555}; 
int vectorSize = michaelsUnsortedVector.size();

cout << "Unsorted Vector: ";
for (int i = 0; i < vectorSize; ++i) {
    cout << michaelsUnsortedVector[i] << " ";
}
cout << endl; 

bubbleSort(michaelsUnsortedVector);

cout << "Sorted Vector: ";
for (int i = 0; i < vectorSize; ++i) {
    cout << michaelsUnsortedVector[i] << " ";
}
cout << endl;



}
void bubbleSort (vector<int>& myVector) {
    int size = myVector.size();

    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size - i - 1; ++j) {
            if (myVector[j] > myVector[j + 1]){
                swap(myVector[j], myVector[j+1]);
            }
        }
    }
}