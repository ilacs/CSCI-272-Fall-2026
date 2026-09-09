#include <iostream>
using namespace std;

int global_var = 77;

// function - pointer to a pointer
void changePointer(int** p){
    //*p represents the original pointer
    // we change it so that it points to the global variable
    
    *p = &global_var; //points to 77
}

int main(){
    int local_var = 15;
    
    //p_to_var points to the local variable 
    int* p_to_var = &local_var;
    
    cout << "---Before function call---" << endl;
    cout << "local_var = " << local_var << endl;
    cout << "*p_to_var = " << *p_to_var << endl;
    cout << "p_to_var = " << p_to_var << endl;
    cout << "Address of local_var = " << &local_var << endl << endl;
    
    // Pass the address of the pointer 
    changePointer(&p_to_var);
      cout << "---After function call---" << endl;
    cout << "local_var = " << local_var << endl;
    cout << "*p_to_var = " << *p_to_var << endl; //changes to 77
    cout << "p_to_var = " << p_to_var << endl;
    cout << "Address of local_var = " << &local_var << endl << endl;
}

