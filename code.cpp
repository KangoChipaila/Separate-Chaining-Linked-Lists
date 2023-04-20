#include <iostream>
#include <list>
#include <vector>

using namespace std;


struct HashTable
{
    vector <list<int>> hashTable; //Declaration of vector composed of linked lists.

    HashTable() //Constructor to set the number of hash table buckets to 10 when an object of structure HashTable is created.
    {
        int noOfBuckets = 10;

        hashTable.resize(noOfBuckets);
    }

    int hashFunction(int key) //Simple hash function to map key to hash table.
    {
        return key % 3;
    }

    void insertKey(int key) //Function to insert values into the linked list contained by the vector
    {
        int index = hashFunction(key);
        hashTable[index].push_back(key);
    }

    void displayHashTable()
    {
        for (int i = 0; i < hashTable.size(); i++)
        {
            cout << i << " : ";

            for (int j : hashTable[i])
            {   
                cout << j << " ";
            }
            cout << endl;
        }
    }
    
};

//Driver code
int main()
{
    HashTable ht;

    ht.insertKey(3);
    ht.insertKey(9);
    ht.insertKey(6);

    ht.displayHashTable();

    return 0;
}
