#pragma once

#include <iostream>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

class IPLocation
{
private:
	std::string base_url;
public:
	IPLocation();

	std::string get_country(const std::string& ip);
};

