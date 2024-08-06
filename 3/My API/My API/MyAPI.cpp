#include "MyAPI.h"

MyAPI::MyAPI() {
	this->base_url = "http://localhost:5000/send_message";
}

void MyAPI::send_message(const std::string& message) {
	CURL* curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, base_url.c_str());
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, message.c_str())	;
		curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, message.length());

		CURLcode res = curl_easy_perform(curl);
		if (res == CURLE_OK) {
			std::cout << "Your message has been successfully sent!" << std::endl;
		}

		curl_easy_cleanup(curl);
	}
}