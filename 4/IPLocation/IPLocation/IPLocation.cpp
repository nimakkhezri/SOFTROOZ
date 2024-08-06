#include "IPLocation.h"

size_t write_data(void* ptr, size_t size, size_t nmemb, void* userdata) {
	((std::string*)userdata)->append((char*)ptr, size * nmemb);
	return size * nmemb;
}

IPLocation::IPLocation() {
	this->base_url = "https://api.iplocation.net/?ip=";
}

std::string IPLocation::get_country(const std::string& ip) {
	std::string country_name;

	CURL* curl = curl_easy_init();
	if (curl) {
		std::string responce;
		std::string url = base_url + ip;

		curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &responce);

		CURLcode res = curl_easy_perform(curl);
		if (res == CURLE_OK) {
			nlohmann::json data = nlohmann::json::parse(responce);
			country_name = data["country_name"];

		}

		curl_easy_cleanup(curl);
	}

	return country_name;
}