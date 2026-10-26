//RIGHT ANGLE TRIANGLE
#include <iostream>
using namespace std;

int main(){
    int rows = 6;

    for (int i = 1; i<= rows; i++){
        for (int j = 1; j<= i; j++){
            cout<<" * ";
                    }
                    cout<<endl;
            }
            return 0;
}

OUTPUT:

 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  *  * 


//LEFT ANGLE TRIANGLE
#include <iostream>
using namespace std;

int main() {
    int rows = 6;

    for (int i = 1; i<= rows; i++){
        for (int s = 1; s<=rows - i; s++){
                cout<<"   ";
                }
                for (int j = 1; j<=i; j++){
                  cout<<" * ";
                }
                cout<<endl;
        }
        return 0;
}

OUTPUT:

                * 
             *  * 
          *  *  * 
       *  *  *  * 
    *  *  *  *  * 
 *  *  *  *  *  * 

//INVERTED RIGHT ANGLE TRIANGLE
#include <iostream>
using namespace std;

int main() {
    int rows = 8;

    for (int i = 1; i<= rows; i++){
        for (int s = 1; s<= rows - i; s++){
                cout<<" * ";
                }
                for (int j = 1; j<=i; j++){
                  cout<<" ";
                }
                cout<<endl;
        }
        return 0;
}

OUTPUT:

 *  *  *  *  *  *  *  
 *  *  *  *  *  *   
 *  *  *  *  *    
 *  *  *  *     
 *  *  *      
 *  *       
 *        

//INVERTED LEFT ANGLE TRIANGLE
#include <iostream>
using namespace std;

int main() {
    int rows = 8;

    for (int i = 1; i<= rows; i++){
        for (int s = 1; s<= i; s++){
                cout<<"   ";
                }
                for (int j = 1; j<= rows - i; j++){
                  cout<<" * ";
                }
                cout<<endl;
        }
        return 0;
}

OUTPUT:

    *  *  *  *  *  *  * 
       *  *  *  *  *  * 
          *  *  *  *  * 
             *  *  *  * 
                *  *  * 
                   *  * 
                      * 

//PYRAMID
#include <iostream>
using namespace std;

int main(){
    int rows = 7;

    for (int i = 1; i<= rows; i++){
        for (int s = 1; s<= rows - i; s++){
                cout<<"  ";
                }
                for (int j = 1; j<=i; j++){
                  cout<<"  * ";
                }
                cout<<endl;
        }
        return 0;
}

OUTPUT:

              * 
            *   * 
          *   *   * 
        *   *   *   * 
      *   *   *   *   * 
    *   *   *   *   *   * 
  *   *   *   *   *   *   * 
