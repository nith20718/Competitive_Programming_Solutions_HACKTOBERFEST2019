#include<bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    vector<int> v1 = {1, 2, 3}; 
    vector<int> v2 = {4, 5, 6}; 
      
    // swapping the above two vectors 
    // using std::vector::swap 
    v1.swap(v2); 
      
    // print vector v1 
    cout<<"Vector v1 = "; 
    for(int i=0; i<3; i++) 
    { 
        cout<<v1[i]<<" "; 
    } 
      
    // print vector v2 
    cout<<"\nVector v2 = "; 
    for(int i=0; i<3; i++) 
    { 
        cout<<v2[i]<<" "; 
    } 
      
    return 0; 
}
