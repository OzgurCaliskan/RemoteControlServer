#include "serial.h"

Serial *Serial::instance = NULL;

Serial* Serial::Instance()
{
    if (!instance)
    {
        instance = new Serial();
    }
    return instance;
}

Serial::Serial()
{

}

void Serial::closeSerialPort()
{

}

void Serial::sendMessage(QString message)
{

}

void Serial::sendCommand(Command &command)
{

}
