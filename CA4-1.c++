#include <iostream>
using namespace std;

const int TABLE_SIZE = 10;

class HashTable
{
private:
    int *table;
    int capacity;

    int hashFunction(int key)
    {
        return key % capacity;
    }

public:
    HashTable()
    {
        capacity = TABLE_SIZE;
        table = new int[capacity]; // dynamically allocates memory
        for (int i = 0; i < capacity; ++i)
            table[i] = -1;
    }

    void insert(int key)
    {
        int index = hashFunction(key);
        while (table[index] != -1)
        {
            index = (index + 1) % capacity;
        }
        table[index] = key;
    }

    void display()
    {
        for (int i = 0; i < capacity; ++i)
        {
            cout << "[" << i << "]: ";
            if (table[i] != -1)
                cout << table[i];
            else
                cout << "Empty";
            cout << endl;
        }
    }

    /// @brief
    ~HashTable()
    { // destructor
        delete[] table;
    }
};

int main()
{
    HashTable ht;

    ht.insert(5);
    ht.insert(15);
    ht.insert(25);
    ht.insert(10);
    ht.insert(6);
    ht.insert(16);
    ht.insert(26);

    ht.display();

    return 0;
}
