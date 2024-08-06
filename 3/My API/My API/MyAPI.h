#pragma once

#include <iostream>
#include <curl/curl.h>

class MyAPI
{
private:
	std::string base_url;	
public:
	MyAPI();

	void send_message(const std::string& message);
};

