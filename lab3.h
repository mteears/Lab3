#ifndef LAB3_H
#define LAB3_H

#include <stdio.h>
#include <stdlib.h>

double readWinningTime();
double calcMetersPerSecond(double DISTANCE, double winningTime);
double calcFeetPerSecond(double winningTime);
double calculateKillmeterPerHour(double DISTANCE, double winningTime, int seconds);
double calcMilesPerHour(double winningTime, double mph_conv);
void displayResults(double fps, double kph, double mph, double mps);
void displayTimeToRunMile(double mph);
double calcTime100Yards(double fps);
void displayHundredYardsTime(double hundredYards);


#endif