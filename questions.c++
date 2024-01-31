//......Q1 wave array......
//...Q2 move zero to right...
// A C program to move all zeroes at the end of array
// ..........gfg solution.....
 
// #include <stdio.h> 


// void pushZerosToEnd(int arr[], int n) 
// { 
// 	int count = {};  

	 
// 	for (int i = 0; i < n; i++) 
// 		if (arr[i] != 0) 
// 			arr[count++] = arr[i]; 
								

	
// 	while (count < n) 
// 		arr[count++] = 0; 
// } 

// int main() 
// { 
// 	int arr[] = {8, 0, 5, 3, 0, 0, 1, 9, 0, 2, 0, 8}; 
// 	int n = sizeof(arr) / sizeof(arr[0]); 
// 	pushZerosToEnd(arr, n); 
// 	printf("%s\n", "Array after pushing all zeros to end of array:"); 
// 	for (int i = 0; i < n; i++) 
// 	printf("%d ", arr[i]); 
// 	return 0; 
// } 
// ...............................................................
// Q3 if something is reapetingg then its true otherwise false.
// #include<iostream>
// #include<vector>
// using namespace std;
    
// bool containsDuplicate(vector<int> nums) {
 
//     for(int i = 0; i < nums.size(); i++) {
//         for(int j = i + 1; j < nums.size(); j++) {
//             if(nums[i] == nums[j]) {
//                 return true;
//             }
//         }
//     }

//     return false;
// }
    
// int main () {
	    
//     vector<int> nums {1, 2, 3, 1};
	    
//     bool res = containsDuplicate(nums);
	    
    
//     if(res== 1)
//         cout<<"true"<<endl;
//     else
//         cout<<"false"<<endl;
// }
// Q4 print dubliacte value
// #include <iostream>
// #include <vector>
// using namespace std;
// int main ()
// {
//   vector<int> myvector;
//   for (int i=1; i<=10; i++) myvector.push_back(i);
//   myvector.erase (myvector.begin()+5);
//   myvector.erase (myvector.begin(),myvector.begin()+3);

//   cout << "myvector contains:";
//   for (unsigned i=0; i<myvector.size(); ++i)
//      cout << ' ' << myvector[i];
//   cout << '\n';
//   return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int arr[]={1,5,1,5};
// 	cout<<" Number";
// 	if (arr[]=1  );
//     }
// #include <iostream>
// #include <vector>
// using namespace std;

// void insertElement(vector<int>& arr, int element, int position) {
//     if (position > arr.size()) { 
//         arr.push_back(element);
//     } else {
//             arr.insert(arr.begin() + position, element);
//     }
// }

// int main() {
//     vector<int> myArray = {1, 2, 3, 4, 5};
//     int elementToInsert = 10;
//     int insertPosition = 2;

//     cout << "Original vector:";
//     for (int num : myArray) {
//   	cout << " " << num;
//     }
//     cout << endl;

//     insertElement(myArray, elementToInsert, insertPosition);

//     cout << "Vector after insertion:";
//     for (int num : myArray) {
//         cout << " " << num;
//     }
//     cout << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

void insertElement(vector<int>& arr, int element, int position) {
    if (position > arr.size()) {
        cout << "Invalid input. Position exceeds array size." << endl;
    } else {
        arr.insert(arr.begin() + position, element);
    }
}

int main() {
    vector<int> myArray = {9, 7, 6, 3, 2,5,33,76,69};
    int elementToInsert = 10;
    int insertPosition = 9; 

    cout << "Original vector:";
    for (int num : myArray) {
        cout << " " << num;
    }
    cout << endl;

    insertElement(myArray, elementToInsert, insertPosition);

    cout << "Vector after insertion:";
    for (int num : myArray) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}
