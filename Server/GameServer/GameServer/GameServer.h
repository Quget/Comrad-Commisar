#pragma once
#include "Client.h"
//#include <windows.networking.sockets.h>
#include <string>
#include "QException.h"
//#include <Windows.h>
#using <System.dll>
using namespace System;
using namespace System::Net;
using namespace System::Net::Sockets;
//Gameserver class
class GameServer
{
	public:
		GameServer(int);//Constructor
		~GameServer();//Destructor.
		bool StartServer(int);//Start the server. Return false if failed.
	private:
		int maxConnections;//ammount of clients that can connect
		int connections;//Ammount of clients that are connected
		Socket sSockets;
		bool AliveCheck();
		void SpawnNPCS();
		Client clients[];//all the clients.
		//delegate void BeginAcceptCallback(IAsyncResult^ ar);
};

