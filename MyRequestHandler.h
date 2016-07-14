//
// Created by Paolo Pezzini on 6/21/16.
//

#ifndef HTTP_SERVER_MYREQUESTHANDLER_H
#define HTTP_SERVER_MYREQUESTHANDLER_H

#include <iostream>
#include <Poco/Net/HTTPRequestHandler.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPServerResponse.h>

using namespace std;

class MyRequestHandler : public Poco::Net::HTTPRequestHandler
{
public:
   /* virtual*/ void handleRequest(Poco::Net::HTTPServerRequest &req, Poco::Net::HTTPServerResponse &resp);

/*private:
    static int count;*/
};


#endif //HTTP_SERVER_MYREQUESTHANDLER_H
