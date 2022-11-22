
#include <iostream>
#include <string>
#include "linkedbag.h"
#include "node.h"
#include <cstdlib>
using namespace std;

//function to display the bag
void displayBag(const linkedBag<string>& bag)
    {
        int n = 1;
        cout << "There are " << bag.getCurrentSize()
        << " total chores:" << endl;
        
    vector<string> bagItems = bag.toVector();
    int numberOfEntries = (int) bagItems.size() -1;
    for (int i = numberOfEntries; i >= 0; i--)
        {
            cout << n << ": ";
            cout << bagItems[i] << " " << endl;
            n++;
        } // end for
        
        cout << endl << endl;
    }   // end displayBag
    

string getpos(const linkedBag<string>& bag, int entry)  
 {
    vector<string> bagItems = bag.toVector();
    int numberOfEntries = (int) bagItems.size() -1;
    int pos = numberOfEntries - entry;
    
    return bagItems[pos];
    
 }


int main()
{

    linkedBag<string> list, add;
    string s, a;
    int n,c ;
    
    //fill chore list for initial chores if wanted
    //Empty
    string chores[] = {};
    
    for(int i = 0; i < 6; i++)
        {
            list.add(chores[i]);
        }

    
    
    cout << "" << endl;
    displayBag(list);
    cout << "" << endl; 

   while (true)
    {
    
    lable2:
    cout << "how do you want to edit you list?" << endl;
    cout << "1: remove chore" << endl;
    cout << "2: add chore" << endl;
    cout << "3: no change" << endl;
    cout << "->";
    cin >> n;
    
    if(n == 1)
    {
        cout << "What chore do you want to remove, enter position as integer" << endl;
        cout << "->";
        cin >> c;
        c -= 1;
        list.remove(getpos(list, c));
        cout << "" << endl;
        displayBag(list);
        cout << "" << endl; 
    }
    else if (n == 2)
    {
        cout << "What chore do you want to add " << endl;
        cout << "->";
        cin.get();
        getline(cin, a);
        list.add(a);
        cout << "" << endl;
        displayBag(list);
        cout << "" << endl; 
    }
    else if (n == 3)
    {
        break;
    }
    else
    {
        cout << "Incorrect input, try again" << endl;
        goto lable2;
    }
    
    }
    return 0;
}










