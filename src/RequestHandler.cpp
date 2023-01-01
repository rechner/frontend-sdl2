#include "RequestHandler.h"

#include <iostream>

using namespace Poco::Net;
using http_server::RequestHandler;


void RequestHandler::handleRequest(HTTPServerRequest &req, HTTPServerResponse &resp)
{
    std::cout << "[ ] Got request for URI: " << req.getURI() << std::endl;

    std::string requestURI = req.getURI();

    if (!requestURI.compare("/next")) {

    }

    resp.setStatus(HTTPResponse::HTTP_OK);
    resp.setContentType("text/html");


    std::ostream& out = resp.send();

    out << "<h1>Hello world!</h1>";

    out.flush();
}