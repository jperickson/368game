#ifndef PATH_HPP
#define PATH_HPP

#include <string>
#include "Character.hpp"
#include "Item.hpp"
#include "Area.hpp"

using namespace std;

class Path
{
	private:
		string head; //trail head
		string end; //trail end
		bool blocked;
		Area test;
	
	public:
		Path(string head, string end);
		string getHead();
		string getEnd();
		bool isBlocked();
		void unblock();
		void block();
};

#endif //PATH_HPP
