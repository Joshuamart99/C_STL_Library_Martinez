#include <iostream>
#include <vector>
#include <cassert>
#include <stack>
#include <set>
#include <string>
#include <utility>
#include <map>
#include <algorithm>


using namespace std;

class MyClassVector1
{
    vector<int> v1;

public:
    MyClassVector1(vector<int> v)
    {
        v1 = v;
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
    }
};

class MyClassVector2
{
    vector<int> vec;

public:
    MyClassVector2(vector<int> v) : vec(v)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};

class MyClassVector3
{
    vector<int> &vec;

public:
    MyClassVector3(vector<int> &arr)
        : vec(arr)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};

int main(int argc, char* argv [])
{
    //declare three vectors
    vector<int> vd;
    vector<int> vi;
    vector<int> vs;

    //add 3 elements to the vd vector
    for (int i = 1; i <= 3; i++)
        vd.push_back(i);

    //add 3 elements to the vi vector
    for (int i = 4; i <= 6; i++)
        vi.push_back(i);

    //add 3 elements to the vs vector
    for (int i = 7; i <= 9; i++)
        vs.push_back(i);

    //display the 3 elements in the vd vector
    cout << "Elements of vector vd: ";
    MyClassVector1 obj1(vd);
    obj1.print();

    //display the 3 elements in the vi vector
    cout << "\n\nElements of vector vi: ";
    MyClassVector2 obj2(vi);
    obj2.print();

    //display the 3 elements in the vs vector
    cout << "\n\nElements of vector vs: ";
    MyClassVector3 obj3(vs);
    obj3.print();

    vector < int > vint( 3 ); //Vector with 3 integer numbers
    vint[ 0 ]= 10;
    vint[ 1 ]= 20;
    vint[ 2 ]= 30;
    vint[ 3 ]= 40;
    vint[ 4 ]= 50;
    vint[ 5 ]= 60;
    vint[ 6 ]= 70;
    vint[ 7 ]= 80;
    vint[ 8 ]= 90;
    vint[ 9 ]= 100;

    //Display element of the vector:
    vector< int >::iterator it;
    for ( it = vint.begin(); it != vint.end(); ++it){
      //Like pointer, iterator is deference to
      //acess the value of the element pointed by it:
      cout <<" "<< *it;

    
//Write the code as presented in: 2. std::stack
stack< int > st;

st.push( 100 );           // push number on the stack
assert ( st.size() == 1); // verify one element is on the stack
assert ( st.top() ==100); // verify element value

st.top() = 456;          // assign new value
assert( st.top() ==456);

st.pop();                 // remove element
assert( st.empty() == true);
// the address of the next instruction is pushed onto the stack. When the function exits, the address is popped off the stack and execution continues at that address.

//Write the code as presented in: 3. std::set
set < int > iset;   // set of unique integer numbers

iset.insert( 11 );  // populate set with some values
iset.insert( -11 );
iset.insert( 55 );
iset.insert( 22 );
iset.insert( 22 );
if (iset.find( 55 ) != iset.end() ){ // is value already stored
  iset.insert( 55 );
}
assert( iset.size() == 4);     // sanity check :‐)
set< int >::iterator it;
for (it = iset.begin(); it != iset.end(); it++){  
    cout <<" "<< *it;
}
// set is an abstract data type that can store certain values, without any particular order, and no repeated values. It is a computer implementation of the mathematical concept of a finite set.

//Write the code as presented in: 4. std::pair structure
{
  pair< string, string > strstr;
  strstr.first = "Hello";
  strstr.second = "World";

  pair< int, string > intstr;
  intstr.first = 1;
  intstr.second = "one";

  pair< string, int> string( "two", 2 );
  assert( string.first == "two" );
  assert( string.second == 2); 
}
//td::pair is a class template that provides a way to store two heterogeneous objects as a single unit. A pair is a specific case of a std::tuple with two elements.

//Write the code as presented in: 16. Map summary
{
  map< string, string > phone_book;
  phone_book[ "411" ] = "Directory";
  phone_book[ "911" ] = "Emergency";
  phone_book[ "508-678-2811" ] ="BCC";
  if ( phone_book.find( "411") != phone_book.end() ){
    phone_book.insert(
       make_pair(
         string( "411" ),
         string( "Directory" )
       )
    );
  }
  assert( phone_book.size() == 3);
  map< string, string >::const_iterator it;
  for ( it = phone_book.begin(); it != phone_book.end(); ++it ) {
    cout
        << " " << it->first
        << " " << it->second
        << endl
        ;
  }
}
//An object that maps keys to values. A map cannot contain duplicate keys; each key can only map to at most one value. 

//Write the code as presented in: 23. sort example
int arr[ 100 ];
sort( arr, arr + 100);
vector v1;
sort( v1.begin(), v1.end() );
// A Sorting Algorithm is used to rearrange a given array or list elements according to a comparison operator on the elements.

//Write the code as presented in: 25. count_if and predicate function
bool less_than_7( int value);
    return value < 7;
}
vector< int > v1;
int count_less = std::count_if( v1.begin(), v1.end(), less_than_7)
//count_if() is used to get the number of elements in a specified range which satisfy a condition.
    return 0;
}