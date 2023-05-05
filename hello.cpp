#include <iostream>

void nothing();

int main(){
    std::cout << "hello there! This is a sample program to showcase the different comments/shortcuts!";
    ///above is a print statement (using !dox)
    
    int a = 5;
    /** 
     * Above I created a variable and set the value to 5 (using !long)
     */

    int b = 6;
    /// 
     /// Similar to the last comment just a little easier to read (using !com
     ///

    char sample = 'j';
    ///////////////////////////////////////////////// 
     /// High vis comment (using !vis)
     /////////////////////////////////////////////////

    for(int i = 0; i<10; i++){
        int t = i*5;
    }
    /** for loop for t. I created a for loop that will redefine the variable t with the value i*5 while i loops from 0 to 9. (using !des)
      * 
     */

    nothing();
    /// I called nothing. 
     /** I called the function nothing which will print out a hello (using !full). */


    return 0;
}

void nothing(){
        std::cout << "hello";
    }
