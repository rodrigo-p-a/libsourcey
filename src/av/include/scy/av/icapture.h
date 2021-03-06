///
//
// LibSourcey
// Copyright (c) 2005, Sourcey <http://sourcey.com>
//
// SPDX-License-Identifier:	LGPL-2.1+
//
/// @addtogroup av
/// @{


#ifndef SCY_AV_ICapture_H
#define SCY_AV_ICapture_H


#include "scy/packetstream.h"

#include <list>


namespace scy {
namespace av {
    struct Format;


class ICapture: public PacketSource, public async::Startable
{
public:
    ICapture() : PacketSource(this->emitter) {};
    virtual ~ICapture() {};

    virtual void start() = 0;
    virtual void stop() = 0;    /// Sets the input format for encoding with this capture device.
    virtual void getEncoderFormat(Format& iformat) = 0;


    virtual void onStreamStateChange(const PacketStreamState& state)
    {
        switch (state.id()) {
            case PacketStreamState::Active: start(); break;
            case PacketStreamState::Stopping: stop(); break;
        }
    }

    PacketSignal emitter;
};


} // namespace av
} // namespace scy


#endif // SCY_AV_ICapture_H

/// @\}
