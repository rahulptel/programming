/*
    Question: Display nth node from the end of a linked list 
    (http://www.geeksforgeeks.org/nth-node-from-the-end-of-a-linked-list/)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int size_list;
    vector<int> sllist;

    sllist.push_back(1);
    sllist.push_back(2);
    sllist.push_back(3);
    sllist.push_back(4);
    sllist.push_back(5);
    sllist.push_back(6);

    cout << "Enter the n(position of the node from last)" << endl;
    cin >> n;
    cout << "N : " << n << endl;

    size_list = sllist.size();
    cout << "Size of list : " << size_list << endl;

    cout << "Answer :" << sllist[size_list-n] << endl;
    return 0;
	
}
