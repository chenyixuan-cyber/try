#ifndef SENTRY_PORT_HPP
#define SENTRY_PORT_HPP

#include <boost/asio.hpp>
#include <cstdint>
#include <mutex>
#include <chrono>
#include <string>
#include <vector>
#include <termios.h>

class SentryPort {
public:
  SerialPort();
  ~SerialPort();
  
  bool open(const std::string& port, int baudrate);
  void close();
  bool isOpen() const;
  
  int write(const uint8_t* data, size_t length);
  int read(uint8_t* buffer, size_t length);
  
private:
  int fd_;
  struct termios old_tio_;
  bool is_open_;
};

#endif // SENTRY_PORT_HPP