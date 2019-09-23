﻿
#include "../../Include/Common/StandardUnLockElement.h"
#include <string>
#include <string.h>

#pragma region Log data

LogQueueElementData::LogQueueElementData() : nThreadID(-1), nLogLevel(0)
{
	memset(strLog, 0, sizeof(char) * LOG_CHARACTER_MAX);
}

LogQueueElementData::~LogQueueElementData()
{
}

LogQueueElementData& LogQueueElementData::operator=(const LogQueueElementData rhv)
{
	nThreadID = rhv.nThreadID;
	nLogLevel = rhv.nLogLevel;
	memcpy(strLog, rhv.strLog, LOG_CHARACTER_MAX);
	return *this;
}

RegisterLogQueueData::RegisterLogQueueData() : nThreadID(-1), bRegister(false), pThreadLogQueue(nullptr)
{}

RegisterLogQueueData::~RegisterLogQueueData()
{}

RegisterLogQueueData& RegisterLogQueueData::operator=(const RegisterLogQueueData rhv)
{
	nThreadID = rhv.nThreadID;
	bRegister = rhv.bRegister;
	pThreadLogQueue = rhv.pThreadLogQueue;
	return *this;
}

#pragma endregion

