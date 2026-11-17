
// PRN: 202501100132
// Seed: 132
// Scenario: Cold-Drink Flavours
// Dataset Size: 20
// Hash Function: Division Method (key % 23)
// Collision Handling: Linear Probing
// Table Size: 23 (assumed)

#include <iostream>
using namespace std;

#define SIZE 23
#define N 20

int main()
{
    int data[N] = {
        32, 45, 58, 71, 84,
        97, 10, 23, 36, 49,
        62, 75, 88, 1, 14,
        27, 40, 53, 66, 79
    };

    int hashTable[SIZE];

    // Initialize hash table
    for (int i = 0; i < SIZE; i++)
    {
        hashTable[i] = -1;
    }

    cout << "PRN: 202501100132" << endl;
    cout << "================================" << endl;
    cout << "          HASH TABLE" << endl;
    cout << "    COLD DRINK FLAVOURS" << endl;
    cout << "================================" << endl;

    int totalCollisions = 0;

// Insert values into hash table
    for (int i = 0; i < N; i++)
    {
        int key = data[i];

        // Division method
        int index = key % SIZE;
        int collisionCount = 0;

        cout << "\nInserting " << key;
        cout << " at index " << index;

        // Linear probing
        int probes = 0;

while (hashTable[index] != -1)
{
    totalCollisions++;
    cout << "\nCollision! Checking next index.";

    index = (index + 1) % SIZE;
    probes++;

    if (probes == SIZE)
    {
        cout << "\nHash table is full!";
        break;
    }

    cout << "\nChecking index " << index;
}

if (probes == SIZE)
{
    continue;
}

        hashTable[index] = key;

        cout << "\nInserted " << key;
        cout << " at index " << index << endl;
    }

    // Display final hash table
    cout << "\n================================" << endl;
    cout << "          FINAL HASH TABLE" << endl;
    cout << "================================" << endl;

    cout << "Index\tValue" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << i << "\t";

        if (hashTable[i] == -1)
        {
            cout << "Empty";
        }
        else
        {
            cout << "Flavour " << hashTable[i];
        }

        cout << endl;
    }

    cout << "\nTotal Collisions: " << totalCollisions << endl;
    return 0;
}
