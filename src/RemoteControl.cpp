//
// Created by rechner on 31/12/22.
//

#include "RemoteControl.h"
#include "HttpServer.h"
#include <Poco/Util/Application.h>




const char* RemoteControl::name() const
{
    return "Remote Control";
}

RemoteControl::RemoteControl()
{
}


void RemoteControl::initialize(Poco::Util::Application& app)
{
    // http_server::HttpServer server(SERVER_PORT);
    server.Start();
}

void RemoteControl::uninitialize()
{
    server.Stop();
}
