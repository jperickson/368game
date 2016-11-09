#include "Path.hpp"

Path::Path(Area _head, Area _end)
{
	head = _head;
	end = _end;
}

Area Path::getHead()
{
	return this->head;
}

Area Path::getEnd()
{
	return this->end;
}

bool Path::isBlocked()
{
	return this->blocked;
}

void Path::unblock()
{
	this->blocked = false;
}

void Path::block()
{
	this->blocked = true;
}
