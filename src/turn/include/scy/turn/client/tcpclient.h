///
//
// LibSourcey
// Copyright (c) 2005, Sourcey <http://sourcey.com>
//
// SPDX-License-Identifier:	LGPL-2.1+
//
/// @addtogroup turn
/// @{


#ifndef SCY_TURN_TCPClient_H
#define SCY_TURN_TCPClient_H


#include "scy/turn/client/client.h"
#include "scy/net/tcpsocket.h"
#include "scy/collection.h"

#include <string>
#include <deque>


namespace scy {
namespace turn {


class TCPClient;


struct TCPClientObserver: public ClientObserver
{
    virtual void onRelayConnectionCreated(TCPClient& client, const net::TCPSocket::Ptr& socket, const net::Address& peerAddress) {};
    virtual void onRelayConnectionError(TCPClient& client, const net::TCPSocket::Ptr& socket, const net::Address& peerAddress) {};
    virtual void onRelayConnectionClosed(TCPClient& client, const net::TCPSocket::Ptr& socket, const net::Address& peerAddress) {};
    virtual void onRelayConnectionBindingFailed(TCPClient& client, const net::Address& peerAddress) {};
    virtual bool onPeerConnectionAttempt(TCPClient& client, const net::Address& peerAddress) { return true; };
};


struct RelayConnectionBinding
{
    std::uint32_t connectionID;
    net::Address peerAddress;
};


typedef KVCollection<net::Address, net::TCPSocket::Ptr>    ConnectionManager;
typedef ConnectionManager::Map                            ConnectionManagerMap;


class TCPClient: public Client
{
public:
    TCPClient(TCPClientObserver& observer, const Client::Options& options = Client::Options());
    virtual ~TCPClient();

    virtual void initiate();
    virtual void shutdown();

    virtual void sendConnectRequest(const net::Address& peerAddress);
    virtual void sendData(const char* data, std::size_t size, const net::Address& peerAddress);

    virtual bool handleResponse(const stun::Message& response);
    virtual void handleConnectResponse(const stun::Message& response);
    virtual void handleConnectErrorResponse(const stun::Message& response);
    virtual void handleConnectionBindResponse(const stun::Message& response);
    virtual void handleConnectionBindErrorResponse(const stun::Message& response);
    virtual void handleConnectionAttemptIndication(const stun::Message& response);

    virtual bool createAndBindConnection(std::uint32_t connectionID, const net::Address& peerAddress);
    //virtual void onRelayConnectionStateChange(void* sender, Net::SocketState& state, const Net::SocketState& oldState);

    virtual void onRelayConnectionConnect(void* sender);
    virtual void onRelayDataReceived(void* sender, const MutableBuffer& buffer, const net::Address& peerAddress);
    virtual void onRelayConnectionError(void* sender, const Error& error) ;
    virtual void onRelayConnectionClosed(void* sender);

    void freeConnection(const net::Address& peerAddress);

    virtual int transportProtocol();
    ConnectionManager& connections();

    virtual const char* className() const { return "TURNTCPClient"; };

protected:
    TCPClientObserver& _observer;
    ConnectionManager _connections;
};


} } //  namespace scy::turn


#endif // SCY_TURN_TCPClient_H

/// @\}
