#ifndef H_TOOLS
#define H_TOOLS

//#include <unistd.h>
#include <BaseTsd.h>
#include <string>
#include "globals.hpp"

static inline int mod_abs (int a, int b) {
  return ((a % b) + b) % b;
}
static inline int div_floor (int a, int b) {
  return a % b < 0 ? (a - b) / b : a / b;
}

template<typename T>
struct ReadResult
{
	bool success;
	T data;
};
extern uint64_t total_bytes_received;
SSIZE_T recv_all (int client_fd, void *buf, size_t n, uint8_t require_first);
SSIZE_T send_all (int client_fd, const void *buf, SSIZE_T len);

SSIZE_T writeByte (int client_fd, uint8_t byte);
SSIZE_T writeUint16 (int client_fd, uint16_t num);
SSIZE_T writeUint32 (int client_fd, uint32_t num);
SSIZE_T writeUint64 (int client_fd, uint64_t num);
SSIZE_T writeFloat (int client_fd, float num);
SSIZE_T writeDouble (int client_fd, double num);

uint8_t readByte (int client_fd);
uint16_t readUint16 (int client_fd);
int16_t readInt16 (int client_fd);
uint32_t readUint32 (int client_fd);
uint64_t readUint64 (int client_fd);
int64_t readInt64 (int client_fd);
float readFloat (int client_fd);
double readDouble (int client_fd);

ReadResult<std::string> readString (int client_fd);

uint32_t fast_rand ();
uint64_t splitmix64 (uint64_t state);

#ifdef ESP_PLATFORM
  #include "esp_timer.h"
  #define get_program_time esp_timer_get_time
#else
  int64_t get_program_time ();
#endif

#endif
