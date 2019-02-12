// program1.cpp : This code will take 10 whole numbers, calculate the mean and Standard Deviation, then displays
// it to the user

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

double mean(double*, int);
double standard_deviation(double*, int);

//double num_array[10];
//stand_dev(num_array, 10);

int main()
{
	cout << "Enter 10 Whole Numbers: "; 
	int count = 10;
	double num_array[10], average, standard_deviation, avg, sd;
	for (int a = 0; a < 10; ++a)
	{
		cin >> num_array[10];
	}
	avg = mean(num_array, count);
	sd = standard_deviation(num_array, count);
	cout << "The Average is: " << avg << endl;
	cout << "The Standard Deviation is: " << sd << endl;
}

double mean(double* numbers, int count)
{
	double calculated_mean = 0.0;
	for (int a = 0; a < 10; ++a)
	{
		calculated_mean += numbers[a];
		//adds all numbers
	}
	calculated_mean /= count;
	return calculated_mean;
}

double standard_deviation(double* numbers, int count)
{
	double st_dev = 0.0;
	double average = mean(numbers, count);
	double temp_dev;
	for (int a = 0; a < count; ++a)
	{
		temp_dev = numbers[a] - average;
		// determines the deviation 
		st_dev += temp_dev * temp_dev; 
		// adds the square
	}
	st_dev /= count;
	st_dev = sqrt(st_dev);
	// take the square root
	return st_dev;
}