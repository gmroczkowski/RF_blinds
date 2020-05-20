//Blinds by RF 433.92MHz
// (c) Grzegorz Mroczkowski

#define pin_Blinds 2

class Blinds
{

public:
	void blindsUp(byte);
	void blindsDown(byte);
	void blindsStop(byte);

private:
	void sendSyncs();
	void send1();
	void send0();
	void sendID();
	void sendUp();
	void sendDown();
	void sendStop();
	void sendB0();
	void sendB1();
	void sendB2();
	void sendB3();
	void sendB4();
	void sendB5();
	void sendB6();
	void sendB7();
	void sendB8();
	void sendB9();
	void sendB10();
	void sendB11();
	void sendB12();
	void sendB13();
	void sendB14();
	void sendB15();
};

// Send sync signal
// bit synchro poprzedzony przerwą 10ms na wypadek ciągłej transmisji
void Blinds::sendSyncs(void)
{
	delay(10);
	digitalWrite(pin_Blinds, HIGH);
	delayMicroseconds(4760);
	digitalWrite(pin_Blinds, LOW);
	delayMicroseconds(1520);
};

//bit "0"
void Blinds::send0()
{
	digitalWrite(pin_Blinds, HIGH);
	delayMicroseconds(320);
	digitalWrite(pin_Blinds, LOW);
	delayMicroseconds(760);
};

//bit "1"
void Blinds::send1()
{
	digitalWrite(pin_Blinds, HIGH);
	delayMicroseconds(720);
	digitalWrite(pin_Blinds, LOW);
	delayMicroseconds(360);
};

// Blinds up
void Blinds::sendUp()
{
	send0();
	send0();
	send0();
	send1();
	send0();
	send0();
	send0();
	send1();
};

// Blinds stop
void Blinds::sendStop()
{
	send0();
	send1();
	send0();
	send1();
	send0();
	send1();
	send0();
	send1();
};

// Blinds down
void Blinds::sendDown()
{
	send0();
	send0();
	send1();
	send1();
	send0();
	send0();
	send1();
	send1();
};

//ID pilota
void Blinds::sendID()
{
	sendSyncs();
	send0();
	send0();
	send1();
	send0();

	send1();
	send1();
	send0();
	send0();

	send0();
	send0();
	send1();
	send0();

	send0();
	send0();
	send0();
	send0();

	send1();
	send1();
	send0();
	send0();

	send1();
	send0();
	send1();
	send1();

	send0();
	send1();
	send1();
	send1();
};

// All blinds
void Blinds::sendB0()
{
	send0();
	send0();
	send0();
	send0();
};

// Blind 1
void Blinds::sendB1()
{
	send1();
	send0();
	send0();
	send0();
};

// Blind 2
void Blinds::sendB2()
{
	send0();
	send1();
	send0();
	send0();
};

// Blind 3
void Blinds::sendB3()
{
	send1();
	send1();
	send0();
	send0();
};

// Blind 4
void Blinds::sendB4()
{
	send0();
	send0();
	send1();
	send0();
};

// Blind 5
void Blinds::sendB5()
{
	send1();
	send0();
	send1();
	send0();
};

// Blind 6
void Blinds::sendB6()
{
	send0();
	send1();
	send1();
	send0();
};

// Blind 7
void Blinds::sendB7()
{
	send1();
	send1();
	send1();
	send0();
};

// Blind 8
void Blinds::sendB8()
{
	send0();
	send0();
	send0();
	send1();
};

// Blind 9
void Blinds::sendB9()
{
	send1();
	send0();
	send0();
	send1();
};

// Blind 10
void Blinds::sendB10()
{
	send0();
	send1();
	send0();
	send1();
};

//Blind 11
void Blinds::sendB11()
{
	send1();
	send1();
	send0();
	send1();
};

// Blind 12
void Blinds::sendB12()
{
	send0();
	send0();
	send1();
	send1();
};

//Blind 13
void Blinds::sendB13()
{
	send1();
	send0();
	send1();
	send1();
};

//Blind 14
void Blinds::sendB14()
{
	send0();
	send1();
	send1();
	send1();
};

//Blind 15
void Blinds::sendB15()
{
	send1();
	send1();
	send1();
	send1();
};

void Blinds::blindsUp(byte n)
{
	for (int i = 0; i < 10; i++)
	{
		sendID();
		switch (n)
		{
		case 0:
			sendB0();
			break;
		case 1:
			sendB1();
			break;
		case 2:
			sendB2();
			break;
		case 3:
			sendB3();
			break;
		case 4:
			sendB4();
			break;
		case 5:
			sendB5();
			break;
		case 6:
			sendB6();
			break;
		case 7:
			sendB7();
			break;
		case 8:
			sendB8();
			break;
		case 9:
			sendB9();
			break;
		case 10:
			sendB10();
			break;
		case 11:
			sendB11();
			break;
		case 12:
			sendB12();
			break;
		case 13:
			sendB13();
			break;
		case 14:
			sendB14();
			break;
		case 15:
			sendB15();
			break;
		};
		sendUp();
	};
};

void Blinds::blindsDown(byte n)
{
	for (int i = 0; i < 10; i++)
	{
		sendID();
		switch (n)
		{
		case 0:
			sendB0();
			break;
		case 1:
			sendB1();
			break;
		case 2:
			sendB2();
			break;
		case 3:
			sendB3();
			break;
		case 4:
			sendB4();
			break;
		case 5:
			sendB5();
			break;
		case 6:
			sendB6();
			break;
		case 7:
			sendB7();
			break;
		case 8:
			sendB8();
			break;
		case 9:
			sendB9();
			break;
		case 10:
			sendB10();
			break;
		case 11:
			sendB11();
			break;
		case 12:
			sendB12();
			break;
		case 13:
			sendB13();
			break;
		case 14:
			sendB14();
			break;
		case 15:
			sendB15();
			break;
		};
		sendDown();
	};
};

void Blinds::blindsStop(byte n)
{
	for (int i = 0; i < 10; i++)
	{
		sendID();
		switch (n)
		{
		case 0:
			sendB0();
			break;
		case 1:
			sendB1();
			break;
		case 2:
			sendB2();
			break;
		case 3:
			sendB3();
			break;
		case 4:
			sendB4();
			break;
		case 5:
			sendB5();
			break;
		case 6:
			sendB6();
			break;
		case 7:
			sendB7();
			break;
		case 8:
			sendB8();
			break;
		case 9:
			sendB9();
			break;
		case 10:
			sendB10();
			break;
		case 11:
			sendB11();
			break;
		case 12:
			sendB12();
			break;
		case 13:
			sendB13();
			break;
		case 14:
			sendB14();
			break;
		case 15:
			sendB15();
			break;
		};
		sendStop();
	};
};
