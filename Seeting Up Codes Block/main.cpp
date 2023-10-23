#include <iostream>
#include <Pencil.h>

using namespace std;

int main()
{
    Pencil pencil_1;
    cout<<"Pencil 1 Info: " <<endl;
    pencil_1.print_info();


    Pencil pencil_2("Blue");
    cout<<"Pencil 2 Info: " <<endl;
    pencil_2.print_info();


    Pencil pencil_3("Blue",20);
    cout<<"Pencil 3 Info: " <<endl;
    pencil_3.print_info();

    return 0;


}
