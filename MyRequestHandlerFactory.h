//
// Created by Paolo Pezzini on 6/21/16.
//

#ifndef HTTP_SERVER_MYREQUESTHANDLERFACTORY_H
#define HTTP_SERVER_MYREQUESTHANDLERFACTORY_H

#include <Poco/Net/HTTPRequestHandlerFactory.h>
#include <Poco/Net/HTTPServerRequest.h>
#include <Poco/Net/HTTPRequestHandler.h>
#include "MyRequestHandler.h"


class MyRequestHandlerFactory : public Poco::Net::HTTPRequestHandlerFactory
{
    public:
        /*virtual*/ Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest &);
};

#endif //HTTP_SERVER_MYREQUESTHANDLERFACTORY_H
