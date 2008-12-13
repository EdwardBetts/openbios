#include "adb.h"

struct cuda_t {
	uint32_t base;
	adb_bus_t *adb_bus;
};
typedef struct cuda_t cuda_t;

enum {
	CHARDEV_KBD = 0,
	CHARDEV_MOUSE,
	CHARDEV_SERIAL,
	CHARDEV_DISPLAY,
	CHARDEV_LAST,
};


cuda_t *cuda_init (char *path, uint32_t base);
