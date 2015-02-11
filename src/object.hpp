#pragma once

#include "triangle.hpp"

class Object
{
public:
	Object();
	Object(Vector pos, Vector size);
	~Object();

	/*! \fn add
	 *	
	 *	Add a triangle to the list
	 *	
	 *	\param t : triangle's pointer
	 *	
	*/
	void add(Triangle *t);

	/* \fn create
	 *	
	 * Dynamicly allocate a triangle, add it to the list and return its pointer
	 *	
	 * \param t : triangle to copy 
	 *	
	*/
	Triangle* create(Triangle t);

	/*! \fn rem
	 *	
	 *	Remove a triangle from the list
	 *	
	 *	\param t : triangle's pointer
	 *	
	*/
	void rem(Triangle *t);

	/*! \fn draw
	 *	
	 *	Draw the object
	 *	
	*/
	void draw();

	/*! \fn rotate
	 *	
	 *	Rotate all triangles in the object
	 *	
	 *	\param axis : Axis of rotation 
	 *	\param angle : Angle of rotation
	 *	
	*/
	void rotate(Vector axis, float angle);

	/* \fn resetPos
	 *	
	 *	Reset the position of all triangles in the object
	 *	
	*/
	void resetPos();

private:
	Vector m_pos;
	Vector m_size;

	Triangle *m_first;
	Triangle *m_last;
};