	#ifndef DICTIONARY_H
	#define DICTIONARY_H
	#include <list>
	#include <iostream>

	class Dictionary {
	private:
		struct Element{
			int key;
			std::string value;
		};

		int size = 10;
		std::list<Element>* arr;

		int hash(int key);
	
	public:
		Dictionary();
		~Dictionary();
		void put(int key, std::string value);
		void remove(int key);
		std::string get(int key);
		void display();
	};

	#endif