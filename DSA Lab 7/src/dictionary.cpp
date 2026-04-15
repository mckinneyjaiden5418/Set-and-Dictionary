#include "../include/dictionary.h"

int Dictionary::hash(int key) {
	return key % 10;
}

Dictionary::Dictionary() {
	size = 10;
	arr = new std::list<Element>[size];
}

Dictionary::~Dictionary() {
	delete[] arr;
}

void Dictionary::put(int key, std::string value) {
	int index = hash(key);

	for (auto& element : arr[index]) {
		if (element.key == key) {
			element.value = value;
			return;
		}
	}

	// Key not found.
	arr[index].push_back({ key, value });
}

void Dictionary::remove(int key) {
	int index = hash(key);

	for (auto it = arr[index].begin(); it != arr[index].end(); it++) {
		if (it->key == key) {
			arr[index].erase(it);
			return;
		}
	}

	std::cout << "Key " << key << " not found.\n";
}

std::string Dictionary::get(int key) {
	int index = hash(key);

	for (const auto& element : arr[index]) {
		if (element.key == key) {
			return element.value;
		}
	}

	return "NOT_FOUND";
}

void Dictionary::display() {
	std::cout << "Displaying Dictionary...\n";
	for (int i = 0; i < size; i++) {
		std::cout << "Index " << i << ": ";
		if (arr[i].empty()) {
			std::cout << "Empty.";
		}
		else {
			for (const auto& element : arr[i]) {
				std::cout << "[" << element.key << ": " << element.value << "] -> ";
			}
			std::cout << "nullptr";
		}

		std::cout << std::endl;
	}
}