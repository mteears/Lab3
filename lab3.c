#include "lab3.h"



double readWinningTime()
{
  double winningTime;
  printf("Please enter the winning time of the race: ");
  scanf("%lf", &winningTime);
  return winningTime;
  //return 0.0;
}

double calcMetersPerSecond(double DISTANCE, double winningTime)
{
  double mps = DISTANCE / winningTime;
  return mps;
  //return 0.0;
}

double calcFeetPerSecond(double winningTime)
{
  double fps = (100.0*3.28084) / winningTime;
  return fps;
  //return 0.0;
}

double calculateKillmeterPerHour(double DISTANCE, double winningTime, int seconds)
{
  double kph = (100.0/1000.0)/((winningTime/60.0)/60.0);
  return kph;
  //return 0.0;
}

double calcMilesPerHour(double winningTime, double mph_conv)
{
  double mph = (100.0*0.00062137121212121)/((winningTime/60.0)/60.0);
  return mph;
  //return 0.0;
}

double calcTime100Yards(double fps)
{
  double yardsTime = 300.0/fps;
  return yardsTime;
  //return 0.0;
}

void displayResults(double fps, double kph, double mph, double mps)
{
  printf("\nThe person was traveling at a rate of:\n");					  
  printf("%.2lf  meters per second.\n", mps);
  printf("%.2lf feet per second.\n", fps);
  printf("%.2lf miles per hour.\n", mph);
  printf("%.2lf kilometers per hour.\n \n", kph);
}

void displayTimeToRunMile(double mph)
{
  double mileTimeD = (1.0/mph)*60.0;                              
  int mileTimeI    = (1.0/mph)*60.0;                                        
  double mileTimeS = (mileTimeD-mileTimeI)*60.0;

  printf("It would take the runner ");
  printf("%d minutes ", mileTimeI);
  printf("and ");
  printf("%.2lf seconds ", mileTimeS);
  printf("to run a mile. \n");
}

void displayHundredYardsTime(double yardsTime)
{
  printf("It would take the runner ");
  printf("%.2lf seconds ", yardsTime);
  printf("to run 100 yards.\n");
}



