#include "config.h"
#include "QuickCurlSettingsExport.h"

#include "WebKit.h"
#include "WebKitDLL.h"

#include <WebCore/ResourceHandleManager.h>

QUICKCURLSETTINGS_API void setProxyCallback(ProxyForURLCallback cb)
{
    WebCore::ResourceHandleManager::sharedInstance()->setProxyCallback(cb);
}


QUICKCURLSETTINGS_API void setCookieJarFileName(const char* filename)
{
	WebCore::ResourceHandleManager::sharedInstance()->setCookieJarFileName(filename);
}
