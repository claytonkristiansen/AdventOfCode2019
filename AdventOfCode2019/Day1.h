#pragma once

#include "pch.h"

int FuelSumSimple()
{
	std::ifstream santaMassListFile;
	santaMassListFile.open("Masses.txt");
	std::vector<int> massVector(0);
	std::string str;
	while (std::getline(santaMassListFile, str))
	{
		massVector.push_back(std::stoi(str));
	}
	int sum = 0;
	for (auto n : massVector)
	{
		sum += (n / 3) - 2;
	}
	return sum;
}

int FuelSumWhole()
{
	std::ifstream santaMassListFile;
	santaMassListFile.open("Masses.txt");
	std::vector<int> massVector(0);
	std::string str;
	while (std::getline(santaMassListFile, str))
	{
		massVector.push_back(std::stoi(str));
	}
	int sum = 0;
	for (auto n : massVector)
	{
		int moreFuel = (n / 3) - 2;
		sum += moreFuel;
		int stepFuel = moreFuel / 3 - 2;
		while (stepFuel > 0)
		{
			moreFuel = stepFuel;
			stepFuel = moreFuel / 3 - 2;
			sum += moreFuel;
		}
	}
	return sum;
}