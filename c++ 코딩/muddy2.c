void firstfin()
{
	motor[motorA] = 75;
	moveMotorTarget(motorA, 180, 50);
	sleep(100);
	motor[motorB] = 75;
	moveMotorTarget(motorB, 180, 50);
	sleep(100);
}

void secondfin()
{
	motor[motorC] = 75;
	moveMotorTarget(motorC, 180, 50);
	motor[motorD] = 75;
	moveMotorTarget(motorB, 180, 50);
}

task main()
{
	firstfin();
	secondfin();
	wait1Msec(2000);
}
