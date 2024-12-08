#include<iostream>
#include<vector> // from  STL  container
using namespace std;

int main() {
    /* //*Declaration
        vector<int> vec;
        vector<int> vec = {0,1,2,3,4,5,6,7};
        vector<int> vec(3,0) //* here 3 is the size of vector(vector having 3 elements) and 0 is the velue of every element
    */  
    //* initalization of vector vec of type int 
    vector<int> vec = {1, 2, 3, 4}; 


    //* to iterate the value of vector we use for each loor mentioned below

    for(int val : vec) { // type of "val" must be the same as tyoe of vector
       cout<<val<<endl;
    }

    // Vector functions
   

    //* to print vector
    // cout<<"iteration using for loop"<<endl;
    // for(int i=0; i<vec.size(); i++) {
    //     cout<<vec[i]<<" ";
    // }
    // cout<<endl;

    //*or

    //* to print vector using iterator
    // cout<<"iterating using function"<<endl;
    // for(auto it = vec.begin(); it!=vec.end(); ++it) {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    
         // vec.at(index); //* to access element at any position
        // vec[2] = 5; //* to modify element at any position
        // vec.front() = 0; //* to modify first element of vector
        // vec.back() = 6; //* to modify last element of vector
        // vec.push_back(4); //* to add element at end of vector
        // vec.push_back(5); //* to add element at end of vector
        // vec.insert(vec.begin() + 2, 7); //* to add element at any position
        // vec.push_back(5); //* to add element at end of vector
        // vec.insert(vec.begin() + 2, 7); //* to add element at any position
        // vec.erase(vec.begin() + 2); //* to delete element at any position
        // vec.pop_back(); //* to delete last element from vector
        // vec.clear(); //* to delete all elements from vector
        // vec.size(); //* to get size of vector
        // vec.capacity(); //* to get capacity of vector
        // vec.shrink_to_fit(); //* to reduce capacity of vector to its actual size
        // vec.shrink_to_fit(5); //* to reduce capacity of vector to given size
        // vec.resize(10); //* to resize vector to given size
        // vec.resize(10, 10); //* to resize vector to given size and fill with given value
    
    return 0;
}