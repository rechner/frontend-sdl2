#pragma once

#include "HttpServer.h"
#include <Poco/Logger.h>
#include <Poco/Util/Subsystem.h>

constexpr int SERVER_PORT = 8088;

struct projectm;

class RemoteControl : public Poco::Util::Subsystem
{

public:
    RemoteControl();
    const char* name() const override;

    void initialize(Poco::Util::Application& app) override;

    void uninitialize() override;

protected:

    http_server::HttpServer server = http_server::HttpServer(SERVER_PORT);

    projectm* _projectMHandle{ nullptr };

    Poco::Logger& _logger{ Poco::Logger::get("RemoteControl") }; //!< The class logger.
};