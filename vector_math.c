/**
* Programmer: Manpreet Sandhu
* 
**/
#include <stdio.h>
#include "vector_math.h"

const int size = 3;//constant size variable

/** Main method**/
int main(int argc, char** argv) {

//decalaring Vec3d variables using array
	Vec3d var[size];

//setting the 1st vector
	vec3dSet(&var[0],-2,1,10);

//setting the 2st vector
	vec3dSet(&var[1],3.6,-7,0.2);

//Adding the first vector to the second vector, and store the result
//in the third vector using the vec3dAdd function.
	vec3dAdd(&var[0],&var[1],&var[2]);

//Multiplying the third vector by the scalar 0.5 using the
//appropriate function and store the result in the fourth vector
	vec3dScalarMul(&var[2],0.5,&var[3]);

//Print all four vectors using the vec3dPrint function.
	for(int i=0; i<=size; i++) {

		vec3dPrint(&var[i]);
	}

//declaring the Line
	Line line;

//setting the first and fourth vector to set the starting and ending points of the line
	lineSet(&line,&var[0],&var[3]);

//print the line
	linePrint(&line);


	return 0;

}//end of the main method

/***vec3dSet method to initialize all coordinate values of a 3D vector.***/
void vec3dSet(Vec3d* vec, double x, double y, double z) {
	vec->x = x;
	vec->y = y;
	vec->z = z;

}//end of the vec3dSet method

/*** vec3dPrint method to print the vector***/
void vec3dPrint(const Vec3d* vec) {

	printf("(%g , %g , %g)\n",vec->x,vec->y,vec->z);

}//end of the vec3dPrint method

/*** vec3dAdd method to add two vectors: dst = src1 + src2***/
void vec3dAdd(const Vec3d* src1, const Vec3d* src2, Vec3d* dst) {
	dst->x = src1->x + src2->x;
	dst->y = src1->y + src2->y;
	dst->z = src1->z + src2->z;

}//end of the vec3dAdd method

/***vec3dScalarMul method to multiply a vector by a scalar: dst = a*src ***/
void vec3dScalarMul(const Vec3d* src, double a, Vec3d* dst) {

	dst->x = a*src->x;
	dst->y = a*src->y;
	dst->z = a*src->z;

}//end of the vec3dScalarMul method

/*** lineSet method to initialize the points of a line ***/
void lineSet(Line* line, const Point* start, const Point* end) {

	line->start.x = start->x;
	line->start.y = start->y;
	line->start.z = start->z;
	line->end.x = end->x;
	line->end.y = end->y;
	line->end.z = end->z;

}//end of the lineSet method

/*** linePrint method to print a line ***/
void linePrint(const Line* line) {

	printf("(%g , %g , %g) - (%g , %g , %g) \n",line->start.x,line->start.y,line->start.z,
	       line->end.x,line->end.y,line->end.z);

}//end of the linePrint method
