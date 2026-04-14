#include <iostream>
#include "include/set.h"

// AI Generated main function to test set implementation.
int main() {
    Set mySet;

    // 1. Test Insertion
    std::cout << "--- Inserting elements ---" << std::endl;
    mySet.insert(10); // Hash 0
    mySet.insert(20); // Hash 0 (Collision)
    mySet.insert(30); // Hash 0 (Collision)
    mySet.insert(5);  // Hash 5
    mySet.insert(15); // Hash 5 (Collision)
    mySet.insert(7);  // Hash 7

    // 2. Test Display
    mySet.display();

    // 3. Test Contains
    std::cout << "\n--- Testing Contains ---" << std::endl;
    std::cout << "Contains 20? " << (mySet.contains(20) ? "Yes" : "No") << std::endl;
    std::cout << "Contains 99? " << (mySet.contains(99) ? "Yes" : "No") << std::endl;

    // 4. Test Remove
    std::cout << "\n--- Testing Remove ---" << std::endl;
    mySet.remove(20); // Removes 20 from index 0
    mySet.remove(99); // Should show "Element not in set."

    // 5. Final Display
    std::cout << "\n--- Final State ---" << std::endl;
    mySet.display();

    return 0;
}