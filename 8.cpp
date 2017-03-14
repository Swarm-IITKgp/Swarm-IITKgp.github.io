#include <iostream>
#include <cmath>
#include <string>
#include <new>

#define BOT_SIZE 20 //bot size in pixels
#define SPACING 1.5 //spacing between bots in terms of fraction of bot size

struct pt //structure to hold coordinates of points
{
	double x, y;
};

pt poltoxy (double r, double th) //function to convert polar coordinates to cartesian
{
	pt point;
	point.x = r * std::cos(th);
	point.y = r * std::sin(th);
	return point;
}

int main (int argc, char * argv[]) //reads input n from command line and prints n points used to construct the figure of 8
{
	int u = std::stoi (argv[1]);
	pt * fig = (pt *) new pt [u];
	int k = (u + 1) / 2;
	double th = (2 * M_PI) / k;
	double r = ((BOT_SIZE * SPACING) / th), st;

	if (((k % 2) == 1) || ((u % 2) == 0))
	{	
		st = (th / 2) - (M_PI/2);
		for (int i = 0; i < k/2; ++i, st += th)
		{
			fig[i] = poltoxy (r, st);
			fig[k-1-i].x = -fig[i].x;
			fig[k-1-i].y = fig[i].y;
		}
	}
	else
	{
		st = th - (M_PI/2);	
		for (int i = 1; i < k/2; ++i, st += th)
		{
			fig[i] = poltoxy (r, st);
			fig[k-i].x = -fig[i].x;
			fig[k-i].y = fig[i].y;
		}
	}

	if ((k % 2) == 1)
	{
		fig[(k/2)].x = 0;
		fig[(k/2)].y = r;
	}
	else if ((u % 2) == 1)
	{
		fig[0].x = 0;
		fig[0].y = -r;
		fig[(k/2)].x = 0;
		fig[(k/2)].y = r;
	}

	if ((u % 2) == 1)
	{
		for (int i = 0; i < k; ++i)
			fig[i].y -= r;

		for (int i = 0; i < (k/2); ++i)
		{
			fig[k+i].y = -fig[i].y;
			fig[k+i].x = fig[i].x;
		}

		for (int i = k-1; i > (k/2); --i)
		{
			fig[k-1+i].x = fig[i].x;
			fig[k-1+i].y = -fig[i].y;
		}
	}
	else
	{
		for (int i = 0; i < k; ++i)
			fig[i].y += r;
		
		for (int i = 0; i < k; ++i)
		{
			fig[k+i].y = -fig[i].y;
			fig[k+i].x = fig[i].x;
		}
	}
	
	for (int i = 0; i < u; ++i)
		std::cout << "(" << fig[i].x << ", " << fig[i].y << ")\n";

	return 0;
}