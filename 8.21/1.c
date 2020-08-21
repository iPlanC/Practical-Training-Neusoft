/*
 * @Author: PlanC
 * @Date: 2020-08-21 09:03:02
 * @LastEditTime: 2020-08-21 09:48:24
 * @FilePath: /Practical-Training-Neusoft/8.21/1.c
 */

#include <math.h>
#include <stdio.h>

struct Cartesian {
	double x;
	double y;
};

struct Polar {
	double length;
	double rad;
};

struct Cartesian trans(struct Polar pos) {
	struct Cartesian cartesian;
	cartesian.x = pos.length * cos((double)(pos.rad * acos(-1) / 180));
	cartesian.y = pos.length * sin((double)(pos.rad * acos(-1) / 180));
	return cartesian;
}

int main() {
	struct Polar polar = {4, 45};
	struct Cartesian cartesian = trans(polar);
	printf("x = %f\tr = %f\n", polar.length, polar.rad);
	printf("x = %f\ty = %f\n", cartesian.x, cartesian.y);
	return 0;
}