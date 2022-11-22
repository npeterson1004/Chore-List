#ifndef __LINKEDBAG__
#define __LINKEDBAG__

#include "node.h"
#include <vector>
#include <string>
using namespace std;

template < class ItemType > class linkedBag
{
private:
  Node < ItemType > *headPtr;	// pointer to the first Node
  int itemCount;		// current count of bag items

  // Returns either a pointer to the node containing a given entry
  // or the null pointer if the entry is not in the bag.
  Node < ItemType > *getPointerTo (const ItemType & target) const;


public:
  linkedBag ();			//contructor
  linkedBag (const linkedBag < ItemType > &aBag);	//copy contructor
  virtual ~ linkedBag ();

	   /** gets the current size of the list
        @post If successful, fuction returns a value of size
        @param none
        @return integer value of size  */
  int getCurrentSize () const;

    /** checks of list is empty
        @post If successful, fuction returns a boolean
        @param none
        @return boolean wehter list is empty  */
        bool isEmpty () const;
        
        
        /** adds a chore to the list
        @post If successful, a chore is added to the list
        @param none
        @return boolean */
        bool add (const ItemType & newEntry);
        
        /** removes a chore to the list
        @post If successful, a chore is removed from the list
        @param none
        @return boolean */
        bool remove (const ItemType & newEntry);
        
        /** clears the list
        @post If successful, the list will be empty
        @param none
        @return none */
        void clear ();
        
        /** checks of list contains an item
        @post If successful, a boolean is returned
        @param none
        @return boolean */
        bool contains (const ItemType & anEntry) const;
        
        /** gets the number an item is repeated
        @post If successful, an integer is returned
        @param none
        @return int of number of item */
        int getFrequencyOf (const ItemType & anEntry) const;
        
        //vector
        vector < ItemType > toVector ()const;
        
       









};

#include "linkedbag.cpp"
#endif
