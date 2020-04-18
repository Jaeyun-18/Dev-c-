void leftfin()
{
	motor[motorA] = 75;
	motor[motorB] = 75;
}

void rightfin()
{
	motor[motorC] = 75;
	motor[motorD] = 75;
}

task main()
{
	leftfin();
	rightfin();
	wait1Msec(2000);
}
