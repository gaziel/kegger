#ifndef Client_h
#define Client_h

#include "Print.h"
#include "ASocket.h"

class Client : public Print {
private:
//  static uint16_t _srcport;
  uint8_t *_ip;
  uint16_t _port;
  ASocket _as;
  
public:
  Client(uint8_t);
  Client(uint8_t *, uint16_t);
  uint8_t status();
  uint8_t connect();
  virtual void write(uint8_t);
  int available();
  int read();
  void flush();
  void stop();
  uint8_t connected();
  uint8_t operator==(int);
  uint8_t operator!=(int);
  operator bool();
  friend class Server;
};

#endif
