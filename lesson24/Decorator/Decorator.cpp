#include "Decorator.hpp"
#include <iostream>

int main() {
	auto sms = std::make_unique<SMSDecorator>(std::make_unique<EmptyNotifier>());
	
	auto email_and_telegram = std::make_unique<TelegramDecorator>(
		std::make_unique<EmailDecorator>(
			std::make_unique<EmptyNotifier>()
			)
		);

	auto all = std::make_unique<TelegramDecorator>(
		std::make_unique<SMSDecorator>(
			std::make_unique<EmailDecorator>(
				std::make_unique<EmptyNotifier>()
				)
			)
		);

	sms->Send("sms");
	email_and_telegram->Send("email and telegram");
	all->Send("all");
}