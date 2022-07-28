#include <iostream>
using namespace std;

void mergeArrays(int[], int, int[], int, int[]);

int main()
{
    const int MAX_SIZE = 7;

    int A1[MAX_SIZE] = {1, 3, 5, 7};
    int A2[MAX_SIZE] = {2, 4, 6, 8, 10, 12, 14};
    int A3[2 * MAX_SIZE];

    int size1, size2, size3;

    // initialize. It could be an input from the user
    size1 = 4;
    size2 = 7;
    size3 = size1 + size2;

    mergeArrays(A1, size1, A2, size2, A3);

    // display the result
    cout << "\n Merged array is: \n";
    for(int i = 0; i < size3; i++){
        cout << A3[i] << " ";
    }
    cout << endl;
}

// merge arr1 and arr2. arr3 contains the merged array
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i,j,k;
    i = 0;
    j = 0;
    k = 0;

   while ((i < size1) && (j < size2))
    {
        if ((arr1[i]) < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
   }
    while (i < size1)
    { // check if array 1 has some elements left
        arr3[k++] = arr1[i++];
    }
    while (j < size2)
    { // check if array 2 has some elements left
        arr3[k++] = arr2[j++];
    }


}
