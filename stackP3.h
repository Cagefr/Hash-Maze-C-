#pragma once
#include "positionP3.h"

class Stack
{
	private:
		Position* base;
		int top;
		int size;
		int length;

	public:
		Stack(int capacity)
		{	
			base = new Position[capacity];
			size = capacity;
			top = -1;
			length = 0;
		}

		~Stack()
		{
			delete[]base;
			top = -1;
			size = 0;
			length = 0;
		}
	//	void settop(int t){top = t;}
	//	void setsize(int s){size = s;}
	//	void setlength(int l) {length = l;}

		//int gettop(){return top;}
		//int getsize(){return size;}
		//int getlength() {return length;}

		int Push(Position elem)
		{


			if (top  == size - 1) return 1;   //Full stack. Unsuccessful with return value 1
			else
			{
				top++;
				base[top] = elem;
				length++;
				return 0;   
			}
		}

		Position Pop()
		{
			Position error;
			error.x = -1;
			error.y = -1;

			Position correct;

			if (top == -1) return error;   //Empty stack. Returns the error
			else
			{
				correct = base[top];
				top--;
				length--;
				return correct;   //gives correct position of coordinates
			}
		}
		int GetLength()
		{
			return length;

		}
		
};
