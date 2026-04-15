#include <iostream>
#include "include/set.h"
#include "include/dictionary.h"

// AI generated main function to test set and dictionary implementations.
int main() {
    // --- PART 1: Test Set Implementation ---
    std::cout << "===========================" << std::endl;
    std::cout << "   TESTING SET CLASS" << std::endl;
    std::cout << "===========================" << std::endl;
    Set mySet;
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.display();
    mySet.remove(20);
    mySet.display();

    // --- PART 2: Test Dictionary Implementation ---
    std::cout << "\n===========================" << std::endl;
    std::cout << "   TESTING DICTIONARY CLASS" << std::endl;
    std::cout << "===========================" << std::endl;
    Dictionary myDict;

    // 1. Test Put (Insert & Update)
    std::cout << "--- Inserting key-value pairs ---" << std::endl;
    myDict.put(1, "Apple");
    myDict.put(11, "Banana"); // Collision with 1
    myDict.put(2, "Cherry");
    myDict.put(1, "Apricot"); // Update existing key 1
    myDict.display();

    // 2. Test Get
    std::cout << "\n--- Testing Get ---" << std::endl;
    std::cout << "Key 1: " << myDict.get(1) << std::endl;   // Should be Apricot
    std::cout << "Key 99: " << myDict.get(99) << std::endl; // Should be NOT_FOUND

    // 3. Test Remove
    std::cout << "\n--- Testing Remove ---" << std::endl;
    myDict.remove(11); // Removes Banana
    myDict.remove(99); // Should show "Key 99 not found."

    // 4. Final Display
    std::cout << "\n--- Final Dictionary State ---" << std::endl;
    myDict.display();

    return 0;
}