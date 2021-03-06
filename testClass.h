//Header file auto-generated using CPP-Getter-Setter-Generator
#ifndef TESTCLASS_H
#define TESTCLASS_H

//Includes
#include <exampleInclude.h>


class testClass {
	public:
		//Constructor and Destructor
		testClass();
		~testClass();

		//Getters and Setters
		float getX();
		float getY();
		float getZ();

		void setX( float _x );
		void setY( float _y );
		void setZ( float _z );

		//Other methods
		void doSomething();
		float doSomethingElse();

	private:
		//Variables
		float x;
		float y;
		float z;

};
#endif