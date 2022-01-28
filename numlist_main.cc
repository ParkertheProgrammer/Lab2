#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include "numlist.h"
#include <cstdio>

using namespace std;




int main()
{
    cout << "Enter your file name." << endl;
    string filename;
    cin >> filename;

    fstream ins;
    ins.open(filename);
    if(ins.fail())
    {
        cout << "Error in opening file" << endl;

    }

    NumList a;
    a.load_from_file(ins);
    a.see_all();
    a.b_sort();
    cout << endl;
    a.see_all();

    cout << "Enter three numbers of your choice" << endl;
    int d, b, z;
    cin >> d;
    cin >> b;
    cin >> z;

    a.insert(d);
    a.insert(b);
    a.insert(z);

    cout << endl; 
    a.b_sort();
    a.see_all();

    fstream outstream;
    outstream.open(filename);
    if(outstream.fail())
    {
        cout << "error in opening output file" << endl;
    }

    a.save_to_file(outstream);;
    
    int dot_index;
    dot_index = filename.find(".");
    string new_filename = filename.insert(dot_index, "sorted");

    char oldname[50] = {0};
    for(int i = 0; i <= filename.size(); ++i)
    {
        oldname[i] = filename[i];
    }
    char newname[50] = {0};
    for(int i = 0; i <= new_filename.size(); ++i)
    {
        oldname[i] = new_filename[i];
    }
    rename(oldname, newname);

    

    


    



}
