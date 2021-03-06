///
//
// LibSourcey
// Copyright (c) 2005, Sourcey <http://sourcey.com>
//
// SPDX-License-Identifier:	LGPL-2.1+
//
/// @addtogroup av
/// @{


#ifndef SCY_AV_Format_H
#define SCY_AV_Format_H


#include "scy/av/codec.h"

#include <iostream>
#include <string>
#include <vector>


namespace scy {
namespace av {

/// Defines a media container format which is available through the
/// Format Registry for encoding/decoding. A format defined preferred
/// default values for each codec.
struct Format
{
    enum Type
    {
        None        = 0,
        Video       = 1,    ///< video only
        Audio       = 2,    ///< audio only
        Multiplex   = 3     ///< both video & audio
    };

    ///
    /// Base Format Variables
    //
    std::string name;        ///< The display name of this format.
    std::string id;          ///< The short name of this format.

    VideoCodec video;        ///< The video codec.
    AudioCodec audio;        ///< The audio codec.

    int priority;            ///< The priority this format will be displayed on the list.

    ///
    /// Ctors/Dtors
    //
    Format();

    Format(const std::string& name, const std::string& id,    // Multiplex format constructor
        const VideoCodec& video, const AudioCodec& audio, int priority = 0);


    Format(const std::string& name, const std::string& id,    // Video only format constructor
        const VideoCodec& video, int priority = 0);


    Format(const std::string& name, const std::string& id,    // Audio only format constructor
        const AudioCodec& audio, int priority = 0);


    Format(const Format& r);

    /// The format type.
    Type type() const;

    virtual std::string toString() const;
    virtual void print(std::ostream& ost);

    static bool preferable(const Format& first, const Format& second) {
        return first.priority > second.priority;
    }
};


typedef std::vector<Format> FormatList;
typedef std::vector<Format*> FormatPList;


} // namespace av
} // namespace scy


#endif
