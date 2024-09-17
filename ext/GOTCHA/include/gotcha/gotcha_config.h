#ifndef GOTCHA_CONFIG_H
#define GOTCHA_CONFIG_H

#define GOTCHA_GET_VERSION(MAJOR, MINOR, PATCH) (MAJOR * 100000 + MINOR * 100 + PATCH)
#define GOTCHA_VERSION (GOTCHA_GET_VERSION (1, 0, 7))
#define GOTCHA_VERSION_MAJOR (GOTCHA_VERSION / 100000)
#define GOTCHA_VERSION_MINOR ((GOTCHA_VERSION / 100) % 1000)
#define GOTCHA_VERSION_PATCH (GOTCHA_VERSION % 100)

#endif /* GOTCHA_CONFIG_H */