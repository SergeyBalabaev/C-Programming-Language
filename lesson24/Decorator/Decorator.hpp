#pragma once

#include <iostream>
#include <string>
#include <memory>

class Notifier {
public:
	virtual ~Notifier() = default;
	virtual void Send(const std::string& message) = 0;
};

class EmptyNotifier : public Notifier {
public:
	void Send(const std::string& message) override {}
};

class NotifierDecorator : public Notifier {
protected:
	std::unique_ptr<Notifier> notifier;
public:
	NotifierDecorator(std::unique_ptr<Notifier> n) : notifier(std::move(n)) {}
};

class EmailDecorator : public NotifierDecorator {
public:
	EmailDecorator(std::unique_ptr<Notifier> n) : NotifierDecorator(std::move(n)) {}

	void Send(const std::string& message) override {
		notifier->Send(message);
		std::cout << "Sending email: " << message << std::endl;
	}
};

class SMSDecorator : public NotifierDecorator {
public:
	SMSDecorator(std::unique_ptr<Notifier> n) : NotifierDecorator(std::move(n)) {}

	void Send(const std::string& message) override {
		notifier->Send(message);
		std::cout << "Sending SMS: " << message << std::endl;
	}
};

class TelegramDecorator : public NotifierDecorator {
public:
	TelegramDecorator(std::unique_ptr<Notifier> n) : NotifierDecorator(std::move(n)) {}

	void Send(const std::string& message) override {
		notifier->Send(message);
		std::cout << "Senging Telegram: " << message << std::endl;
	}
};