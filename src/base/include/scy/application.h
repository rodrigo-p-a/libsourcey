///
//
// LibSourcey
// Copyright (c) 2005, Sourcey <http://sourcey.com>
//
// SPDX-License-Identifier:	LGPL-2.1+
//
/// @addtogroup base
/// @{


#ifndef SCY_Application_H
#define SCY_Application_H


#include "scy/uv/uvpp.h"
#include "scy/util.h"
#include <functional>
#include <vector>
#include <map>


namespace scy {


/// A simple event based application which runs until the
/// internal event loop is terminated.
///
/// The Application class provides shutdown handling (Ctrl-C).
///
// TODO: Cross platform getopts
///
class Application
{
public:
    /// Returns the default Application singleton, although
    /// Application instances may be initialized individually.
    /// The default runner should be kept for short running
    /// tasks such as timers in order to maintain performance.
    static Application& getDefault();

    /// The active event loop.
    /// May be assigned at construction, otherwise the default
    /// event loop is used.
    uv::Loop* loop;

    Application(uv::Loop* loop = uv::defaultLoop());
    ~Application();

    void run();
    void stop();
    void finalize();

    ///
    /// Shutdown handling
    ///

    /// Bind the shutdown signal.
    void bindShutdownSignal(std::function<void(void*)> callback = nullptr, void* opaque = nullptr);

    /// Bind the shutdown signal and run the main event loop.
    void waitForShutdown(std::function<void(void*)> callback = nullptr, void* opaque = nullptr);

    static void onShutdownSignal(uv_signal_t *req, int signum);
    static void onPrintHandle(uv_handle_t* handle, void* arg);

protected:
    Application(const Application&); // = delete;
    Application(Application&&); // = delete;
    Application& operator=(const Application&); // = delete;
    Application& operator=(Application&&); // = delete;
};


//
// Command Line Option Parser
//


typedef std::map<std::string, std::string> OptionMap;

struct OptionParser
{
    std::string exepath; // TODO: UTF8
    OptionMap args;

    OptionParser(int argc, char* argv[], const char* delim); // "--"

    bool has(const char* key) {
        return args.find(key) != args.end();
    }

    std::string get(const char* key) {
        OptionMap::const_iterator it = args.find(key);
        if (it != args.end())
            return it->second;
        return std::string();
    }

    template<typename NumericType>
    NumericType get(const char* key) {
        OptionMap::const_iterator it = args.find(key);
        if (it != args.end())
            return util::strtoi<NumericType>(it->second);
    }
};


} // namespace scy


#endif // SCY_Application_H

/// @\}
