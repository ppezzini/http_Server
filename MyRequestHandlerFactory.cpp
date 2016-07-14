//
// Created by Paolo Pezzini on 6/21/16.
//

#include "MyRequestHandlerFactory.h"

//int MyRequestHandler::count = 0;      ?????

//class MyRequestHandlerFactory : public Poco::Net::HTTPRequestHandlerFactory
//{
//public:
    /*virtual*/ Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest &)
    {
        return new MyRequestHandler;
    }
//};


/* We could use between two different handlers based on a different URI
 *  if(request.getURI()=="/")               // choose response based uri
    {
        return new MyPageHandler();
    }

    if(request.getURI()=="/test")
    {
        return new TestPageHandler();
    }

    return new ErroPageHandler();
 */