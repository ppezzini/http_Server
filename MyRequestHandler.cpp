//
// Created by Paolo Pezzini on 6/21/16.
//

#include "MyRequestHandler.h"

//class MyRequestHandler : public Poco::Net::HTTPRequestHandler
//{
//public:
//int MyRequestHandler::count = 0;

   /* virtual*/ void handleRequest(Poco::Net::HTTPServerRequest &req, Poco::Net::HTTPServerResponse &resp)
    {
        resp.setStatus(Poco::Net::HTTPResponse::HTTP_OK);       //Sets the HTTP status code, Why?
        resp.setContentType("text/html");                       // set the content type of the message

        ostream& out = resp.send();        //Returns an output stream for sending the response body. The returned stream is valid until the response object is destroyed.
        out << "<h1>Hello world!</h1>"     //Body of the repsonse
       // << "<p>Count: "  << ++count         << "</p>"
        << "<p>Host: "   << req.getHost()   << "</p>"       //Returns the value of the Host header field.
        << "<p>Method: " << req.getMethod() << "</p>"
        << "<p>URI: "    << req.getURI() << "</p>";
        out.flush();
        cout << endl
        //<< "Response sent for count=" << count
        << " Response sent for URI=" << req.getURI() << endl;
    }
//private:
//    static int count;
//};