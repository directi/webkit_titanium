#ifndef QuickCurlSettings_H
#define QuickCurlSettings_H

#ifdef WEBKIT_EXPORTS
#define QUICKCURLSETTINGS_API __declspec(dllexport)
#else
#define QUICKCURLSETTINGS_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif
	QUICKCURLSETTINGS_API typedef void(*ProxyForURLCallback)(const char*, char*, int);
	QUICKCURLSETTINGS_API void setProxyCallback(ProxyForURLCallback cb);
	QUICKCURLSETTINGS_API void setCookieJarFileName(const char* filename);
#ifdef __cplusplus
}
#endif

#endif