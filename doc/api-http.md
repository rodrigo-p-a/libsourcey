# Module <!-- group --> `http`



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`namespace `[``scy::http``](#namespacescy_1_1http)    | 
`namespace `[``scy::http::ws``](#namespacescy_1_1http_1_1ws)    | 
`class `[``scy::http::Authenticator``](#classscy_1_1http_1_1Authenticator)    | 
`class `[``scy::http::BasicAuthenticator``](#classscy_1_1http_1_1BasicAuthenticator)    | 
`class `[``scy::http::ClientConnection``](#classscy_1_1http_1_1ClientConnection)    | 
`class `[``scy::http::ClientAdapter``](#classscy_1_1http_1_1ClientAdapter)    | 
`class `[``scy::http::Client``](#classscy_1_1http_1_1Client)    | 
`class `[``scy::http::ProgressSignal``](#classscy_1_1http_1_1ProgressSignal)    | 
`class `[``scy::http::Connection``](#classscy_1_1http_1_1Connection)    | 
`class `[``scy::http::ConnectionAdapter``](#classscy_1_1http_1_1ConnectionAdapter)    | Default HTTP socket adapter for reading and writing HTTP messages.
`class `[``scy::http::Cookie``](#classscy_1_1http_1_1Cookie)    | 
`class `[``scy::http::FormWriter``](#classscy_1_1http_1_1FormWriter)    | 
`class `[``scy::http::FormPart``](#classscy_1_1http_1_1FormPart)    | An implementation of [FormPart](#classscy_1_1http_1_1FormPart).
`class `[``scy::http::FilePart``](#classscy_1_1http_1_1FilePart)    | An implementation of [FilePart](#classscy_1_1http_1_1FilePart) for plain files.
`class `[``scy::http::StringPart``](#classscy_1_1http_1_1StringPart)    | An implementation of [StringPart](#classscy_1_1http_1_1StringPart) for plain files.
`class `[``scy::http::Message``](#classscy_1_1http_1_1Message)    | 
`class `[``scy::http::ChunkedAdapter``](#classscy_1_1http_1_1ChunkedAdapter)    | 
`class `[``scy::http::MultipartAdapter``](#classscy_1_1http_1_1MultipartAdapter)    | 
`class `[``scy::http::ParserObserver``](#classscy_1_1http_1_1ParserObserver)    | 
`class `[``scy::http::Parser``](#classscy_1_1http_1_1Parser)    | 
`class `[``scy::http::Request``](#classscy_1_1http_1_1Request)    | 
`class `[``scy::http::Response``](#classscy_1_1http_1_1Response)    | This class encapsulates an HTTP response message.
`class `[``scy::http::ServerConnection``](#classscy_1_1http_1_1ServerConnection)    | 
`class `[``scy::http::ServerAdapter``](#classscy_1_1http_1_1ServerAdapter)    | 
`class `[``scy::http::ServerResponder``](#classscy_1_1http_1_1ServerResponder)    | 
`class `[``scy::http::ServerResponderFactory``](#classscy_1_1http_1_1ServerResponderFactory)    | 
`class `[``scy::http::Server``](#classscy_1_1http_1_1Server)    | 
`class `[``scy::http::BadRequestHandler``](#classscy_1_1http_1_1BadRequestHandler)    | 
`class `[``scy::http::URL``](#classscy_1_1http_1_1URL)    | 
`class `[``scy::http::ws::WebSocketFramer``](#classscy_1_1http_1_1ws_1_1WebSocketFramer)    | 
`class `[``scy::http::ws::WebSocketAdapter``](#classscy_1_1http_1_1ws_1_1WebSocketAdapter)    | 
`class `[``scy::http::ws::WebSocket``](#classscy_1_1http_1_1ws_1_1WebSocket)    | Standalone [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) class.
`class `[``scy::http::ws::ConnectionAdapter``](#classscy_1_1http_1_1ws_1_1ConnectionAdapter)    | [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) class which belongs to a HTTP [Connection](#classscy_1_1http_1_1Connection).
`struct `[``scy::http::FormWriter::Part``](#structscy_1_1http_1_1FormWriter_1_1Part)    | 
`struct `[``scy::http::ParserError``](#structscy_1_1http_1_1ParserError)    | 
`struct `[``scy::http::Method``](#structscy_1_1http_1_1Method)    | HTTP request methods.
# namespace `scy::http`



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[``scy::http::Authenticator``](#classscy_1_1http_1_1Authenticator)    | 
`class `[``scy::http::BadRequestHandler``](#classscy_1_1http_1_1BadRequestHandler)    | 
`class `[``scy::http::BasicAuthenticator``](#classscy_1_1http_1_1BasicAuthenticator)    | 
`class `[``scy::http::ChunkedAdapter``](#classscy_1_1http_1_1ChunkedAdapter)    | 
`class `[``scy::http::Client``](#classscy_1_1http_1_1Client)    | 
`class `[``scy::http::ClientAdapter``](#classscy_1_1http_1_1ClientAdapter)    | 
`class `[``scy::http::ClientConnection``](#classscy_1_1http_1_1ClientConnection)    | 
`class `[``scy::http::Connection``](#classscy_1_1http_1_1Connection)    | 
`class `[``scy::http::ConnectionAdapter``](#classscy_1_1http_1_1ConnectionAdapter)    | Default HTTP socket adapter for reading and writing HTTP messages.
`class `[``scy::http::Cookie``](#classscy_1_1http_1_1Cookie)    | 
`class `[``scy::http::FilePart``](#classscy_1_1http_1_1FilePart)    | An implementation of [FilePart](#classscy_1_1http_1_1FilePart) for plain files.
`class `[``scy::http::FormPart``](#classscy_1_1http_1_1FormPart)    | An implementation of [FormPart](#classscy_1_1http_1_1FormPart).
`class `[``scy::http::FormWriter``](#classscy_1_1http_1_1FormWriter)    | 
`class `[``scy::http::Message``](#classscy_1_1http_1_1Message)    | 
`class `[``scy::http::MultipartAdapter``](#classscy_1_1http_1_1MultipartAdapter)    | 
`class `[``scy::http::Parser``](#classscy_1_1http_1_1Parser)    | 
`class `[``scy::http::ParserObserver``](#classscy_1_1http_1_1ParserObserver)    | 
`class `[``scy::http::ProgressSignal``](#classscy_1_1http_1_1ProgressSignal)    | 
`class `[``scy::http::Request``](#classscy_1_1http_1_1Request)    | 
`class `[``scy::http::Response``](#classscy_1_1http_1_1Response)    | This class encapsulates an HTTP response message.
`class `[``scy::http::Server``](#classscy_1_1http_1_1Server)    | 
`class `[``scy::http::ServerAdapter``](#classscy_1_1http_1_1ServerAdapter)    | 
`class `[``scy::http::ServerConnection``](#classscy_1_1http_1_1ServerConnection)    | 
`class `[``scy::http::ServerResponder``](#classscy_1_1http_1_1ServerResponder)    | 
`class `[``scy::http::ServerResponderFactory``](#classscy_1_1http_1_1ServerResponderFactory)    | 
`class `[``scy::http::StringPart``](#classscy_1_1http_1_1StringPart)    | An implementation of [StringPart](#classscy_1_1http_1_1StringPart) for plain files.
`class `[``scy::http::URL``](#classscy_1_1http_1_1URL)    | 
`struct `[``scy::http::Method``](#structscy_1_1http_1_1Method)    | HTTP request methods.
`struct `[``scy::http::ParserError``](#structscy_1_1http_1_1ParserError)    | 
# class `scy::http::Authenticator` 




This is a utility class for working with HTTP authentication (basic or digest) in [http::Request](http::Request) objects.

Note: Do not forget to read the entire response stream from the 401 response before sending the authenticated request, otherwise there may be problems if a persistent connection is used.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  Authenticator()` | Creates an empty [Authenticator](#classscy_1_1http_1_1Authenticator) object.
`public  Authenticator(const std::string & username,const std::string & password)` | Creates an [Authenticator](#classscy_1_1http_1_1Authenticator) object with the given username and password.
`public  ~Authenticator()` | Destroys the [Authenticator](#classscy_1_1http_1_1Authenticator).
`public void fromUserInfo(const std::string & userInfo)` | 
`public void fromURI(const `[`http::URL`](#classscy_1_1http_1_1URL)` & uri)` | 
`public inline void setUsername(const std::string & username)` | Sets the username.
`public inline const std::string & username() const` | Returns the username.
`public inline void setPassword(const std::string & password)` | Sets the password.
`public inline const std::string & password() const` | Returns the password.
`public void authenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,const `[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | 
`public void updateAuthInfo(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` | 
`public void proxyAuthenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,const `[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | 
`public void updateProxyAuthInfo(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` | 

## Members

#### `public  Authenticator()` 

Creates an empty [Authenticator](#classscy_1_1http_1_1Authenticator) object.



#### `public  Authenticator(const std::string & username,const std::string & password)` 

Creates an [Authenticator](#classscy_1_1http_1_1Authenticator) object with the given username and password.



#### `public  ~Authenticator()` 

Destroys the [Authenticator](#classscy_1_1http_1_1Authenticator).



#### `public void fromUserInfo(const std::string & userInfo)` 



Parses username:password std::string and sets username and password of the credentials object. Throws SyntaxException on invalid user information.

#### `public void fromURI(const `[`http::URL`](#classscy_1_1http_1_1URL)` & uri)` 



Extracts username and password from the given URI and sets username and password of the credentials object. Does nothing if URI has no user info part.

#### `public inline void setUsername(const std::string & username)` 

Sets the username.



#### `public inline const std::string & username() const` 

Returns the username.



#### `public inline void setPassword(const std::string & password)` 

Sets the password.



#### `public inline const std::string & password() const` 

Returns the password.



#### `public void authenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,const `[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 



Inspects WWW-Authenticate header of the response, initializes the internal state (in case of digest authentication) and adds required information to the given [http::Request](http::Request).

Does nothing if there is no WWW-Authenticate header in the [http::Response](http::Response).

#### `public void updateAuthInfo(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` 



Updates internal state (in case of digest authentication) and replaces authentication information in the request accordingly.

#### `public void proxyAuthenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,const `[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 



Inspects Proxy-Authenticate header of the response, initializes the internal state (in case of digest authentication) and adds required information to the given [http::Request](http::Request).

Does nothing if there is no Proxy-Authenticate header in the [http::Response](http::Response).

#### `public void updateProxyAuthInfo(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` 



Updates internal state (in case of digest authentication) and replaces proxy authentication information in the request accordingly.

# class `scy::http::BadRequestHandler` 

```
class scy::http::BadRequestHandler
  : public scy::http::ServerResponder
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  BadRequestHandler(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` | 
`public inline virtual void onRequest(`[`Request`](#classscy_1_1http_1_1Request)` &,`[`Response`](#classscy_1_1http_1_1Response)` & response)` | 

## Members

#### `public inline  BadRequestHandler(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` 





#### `public inline virtual void onRequest(`[`Request`](#classscy_1_1http_1_1Request)` &,`[`Response`](#classscy_1_1http_1_1Response)` & response)` 





# class `scy::http::BasicAuthenticator` 




This is a utility class for working with HTTP Basic Authentication in [http::Request](http::Request) objects.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  BasicAuthenticator()` | Creates an empty [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object.
`public  BasicAuthenticator(const std::string & username,const std::string & password)` | Creates a [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object with the given username and password.
`public  explicit BasicAuthenticator(const `[`http::Request`](#classscy_1_1http_1_1Request)` & request)` | 
`public  explicit BasicAuthenticator(const std::string & authInfo)` | 
`public  ~BasicAuthenticator()` | Destroys the [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator).
`public void setUsername(const std::string & username)` | Sets the username.
`public const std::string & username() const` | Returns the username.
`public void setPassword(const std::string & password)` | Sets the password.
`public const std::string & password() const` | Returns the password.
`public void authenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request) const` | Adds authentication information to the given [http::Request](http::Request).
`public void proxyAuthenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request) const` | Adds proxy authentication information to the given [http::Request](http::Request).
`protected void parseAuthInfo(const std::string & authInfo)` | 

## Members

#### `public  BasicAuthenticator()` 

Creates an empty [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object.



#### `public  BasicAuthenticator(const std::string & username,const std::string & password)` 

Creates a [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object with the given username and password.



#### `public  explicit BasicAuthenticator(const `[`http::Request`](#classscy_1_1http_1_1Request)` & request)` 



Creates a [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object with the authentication information from the given request.

Throws a NotAuthenticatedException if the request does not contain basic authentication information.

#### `public  explicit BasicAuthenticator(const std::string & authInfo)` 



Creates a [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object with the authentication information in the given std::string. The authentication information can be extracted from a [http::Request](http::Request) object by calling [http::Request::getCredentials()](http::Request::getCredentials()).

#### `public  ~BasicAuthenticator()` 

Destroys the [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator).



#### `public void setUsername(const std::string & username)` 

Sets the username.



#### `public const std::string & username() const` 

Returns the username.



#### `public void setPassword(const std::string & password)` 

Sets the password.



#### `public const std::string & password() const` 

Returns the password.



#### `public void authenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request) const` 

Adds authentication information to the given [http::Request](http::Request).



#### `public void proxyAuthenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request) const` 

Adds proxy authentication information to the given [http::Request](http::Request).



#### `protected void parseAuthInfo(const std::string & authInfo)` 



Extracts username and password from Basic authentication info by base64-decoding authInfo and splitting the resulting std::string at the ':' delimiter.

# class `scy::http::ChunkedAdapter` 

```
class scy::http::ChunkedAdapter
  : public scy::PacketProcessor
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`Connection`](#classscy_1_1http_1_1Connection)` * connection` | 
`public std::string contentType` | 
`public std::string frameSeparator` | 
`public bool initial` | 
`public bool nocopy` | 
`public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` | 
`public inline  ChunkedAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` * connection,const std::string & frameSeparator,bool nocopy)` | 
`public inline  ChunkedAdapter(const std::string & contentType,const std::string & frameSeparator,bool nocopy)` | 
`public inline virtual  ~ChunkedAdapter()` | 
`public inline virtual void emitHeader()` | 
`public inline virtual void process(`[`IPacket`](#classscy_1_1IPacket)` & packet)` | 

## Members

#### `public `[`Connection`](#classscy_1_1http_1_1Connection)` * connection` 





#### `public std::string contentType` 





#### `public std::string frameSeparator` 





#### `public bool initial` 





#### `public bool nocopy` 





#### `public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` 





#### `public inline  ChunkedAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` * connection,const std::string & frameSeparator,bool nocopy)` 





#### `public inline  ChunkedAdapter(const std::string & contentType,const std::string & frameSeparator,bool nocopy)` 





#### `public inline virtual  ~ChunkedAdapter()` 





#### `public inline virtual void emitHeader()` 



Sets HTTP headers for the initial response. This method must not include the final carriage return.

#### `public inline virtual void process(`[`IPacket`](#classscy_1_1IPacket)` & packet)` 



This method performs processing on the given packet and emits the result.

Note: If packet processing is async (the packet is not in the current thread scope) then packet data must be copied. Copied data can be freed directly aFter the async call to emit() the outgoing packet.

# class `scy::http::Client` 






## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`NullSignal`](#classscy_1_1NullSignal)` Shutdown` | 
`public  Client()` | 
`public virtual  ~Client()` | 
`public void shutdown()` | Shutdown the [Client](#classscy_1_1http_1_1Client) and close all connections.
`public template<class ConnectionT>`  <br/>`inline ClientConnection::Ptr createConnectionT(const `[`URL`](#classscy_1_1http_1_1URL)` & url,uv::Loop * loop)` | 
`public inline ClientConnection::Ptr createConnection(const `[`URL`](#classscy_1_1http_1_1URL)` & url,uv::Loop * loop)` | 
`public virtual void addConnection(ClientConnection::Ptr conn)` | 
`public virtual void removeConnection(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` * conn)` | 
`protected ClientConnectionPtrVec _connections` | 
`protected void onConnectionClose(void *)` | 

## Members

#### `public `[`NullSignal`](#classscy_1_1NullSignal)` Shutdown` 





#### `public  Client()` 





#### `public virtual  ~Client()` 





#### `public void shutdown()` 

Shutdown the [Client](#classscy_1_1http_1_1Client) and close all connections.



#### `public template<class ConnectionT>`  <br/>`inline ClientConnection::Ptr createConnectionT(const `[`URL`](#classscy_1_1http_1_1URL)` & url,uv::Loop * loop)` 





#### `public inline ClientConnection::Ptr createConnection(const `[`URL`](#classscy_1_1http_1_1URL)` & url,uv::Loop * loop)` 





#### `public virtual void addConnection(ClientConnection::Ptr conn)` 





#### `public virtual void removeConnection(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` * conn)` 





#### `protected ClientConnectionPtrVec _connections` 





#### `protected void onConnectionClose(void *)` 





# class `scy::http::ClientAdapter` 

```
class scy::http::ClientAdapter
  : public scy::http::ConnectionAdapter
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  ClientAdapter(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & connection)` | 

## Members

#### `public inline  ClientAdapter(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & connection)` 





# class `scy::http::ClientConnection` 

```
class scy::http::ClientConnection
  : public scy::http::Connection
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void * opaque` | Optional unmanaged client data pointer.
`public `[`NullSignal`](#classscy_1_1NullSignal)` Connect` | [Signal](#classscy_1_1Signal) when the client socket is connected and data can flow.
`public `[`Signal](#classscy_1_1Signal)< [Response`](#classscy_1_1http_1_1Response)` & > Headers` | [Signal](#classscy_1_1Signal) when the response HTTP header has been received.
`public `[`Signal](#classscy_1_1Signal)< const [MutableBuffer`](#classscy_1_1MutableBuffer)` & > Payload` | [Signal](#classscy_1_1Signal) when raw data is received.
`public `[`Signal](#classscy_1_1Signal)< const [Response`](#classscy_1_1http_1_1Response)` & > Complete` | [Signal](#classscy_1_1Signal) when the HTTP transaction is complete.
`public  ClientConnection(const `[`URL`](#classscy_1_1http_1_1URL)` & url,const net::Socket::Ptr & socket)` | Create a standalone connection with the given host.
`public virtual  ~ClientConnection()` | 
`public virtual void send()` | 
`public virtual void send(`[`http::Request`](#classscy_1_1http_1_1Request)` & req)` | 
`public virtual int send(const char * data,std::size_t len,int flags)` | Send raw data to the peer.
`public virtual void close()` | Forcefully closes the HTTP connection.
`public virtual void setReadStream(std::ostream * os)` | 
`public template<class StreamT>`  <br/>`inline StreamT & readStream()` | Return the cast read stream pointer or nullptr.
`public virtual void onHeaders()` | 
`public virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer)` | 
`public virtual void onMessage()` | 
`public virtual void onComplete()` | 
`public virtual void onClose()` | 
`protected `[`URL`](#classscy_1_1http_1_1URL)` _url` | 
`protected std::vector< std::string > _outgoingBuffer` | 
`protected bool _connect` | 
`protected bool _active` | 
`protected bool _complete` | 
`protected virtual void connect()` | 
`protected `[`http::Client`](#classscy_1_1http_1_1Client)` * client()` | 
`protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` | 
`protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` | 
`protected virtual void onSocketConnect()` | 
`protected void onHostResolved(void *,const `[`net::DNSResult`](#structscy_1_1net_1_1DNSResult)` & result)` | 

## Members

#### `public void * opaque` 

Optional unmanaged client data pointer.



#### `public `[`NullSignal`](#classscy_1_1NullSignal)` Connect` 

[Signal](#classscy_1_1Signal) when the client socket is connected and data can flow.



#### `public `[`Signal](#classscy_1_1Signal)< [Response`](#classscy_1_1http_1_1Response)` & > Headers` 

[Signal](#classscy_1_1Signal) when the response HTTP header has been received.



#### `public `[`Signal](#classscy_1_1Signal)< const [MutableBuffer`](#classscy_1_1MutableBuffer)` & > Payload` 

[Signal](#classscy_1_1Signal) when raw data is received.



#### `public `[`Signal](#classscy_1_1Signal)< const [Response`](#classscy_1_1http_1_1Response)` & > Complete` 

[Signal](#classscy_1_1Signal) when the HTTP transaction is complete.



#### `public  ClientConnection(const `[`URL`](#classscy_1_1http_1_1URL)` & url,const net::Socket::Ptr & socket)` 

Create a standalone connection with the given host.



#### `public virtual  ~ClientConnection()` 





#### `public virtual void send()` 



Send the HTTP request.

Calls [connect()](#group__http_1ga3fe2e8385f1720882a418cbd6aa59766) internally if the socket is not already connecting or connected. The actual request will be sent when the socket is connected.

#### `public virtual void send(`[`http::Request`](#classscy_1_1http_1_1Request)` & req)` 



Send the given HTTP request. The given request will overwrite the internal HTTP request object.

Calls [connect()](#group__http_1ga3fe2e8385f1720882a418cbd6aa59766) internally if the socket is not already connecting or connected. The actual request will be sent when the socket is connected.

#### `public virtual int send(const char * data,std::size_t len,int flags)` 

Send raw data to the peer.



#### `public virtual void close()` 

Forcefully closes the HTTP connection.



#### `public virtual void setReadStream(std::ostream * os)` 



Set the output stream for writing response data to. The stream pointer is managed internally, and will be freed along with the connection.

#### `public template<class StreamT>`  <br/>`inline StreamT & readStream()` 

Return the cast read stream pointer or nullptr.



#### `public virtual void onHeaders()` 



Return true if the server did not give us a proper response within the allotted time. bool expired() const;

#### `public virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer)` 





#### `public virtual void onMessage()` 





#### `public virtual void onComplete()` 





#### `public virtual void onClose()` 





#### `protected `[`URL`](#classscy_1_1http_1_1URL)` _url` 





#### `protected std::vector< std::string > _outgoingBuffer` 





#### `protected bool _connect` 





#### `protected bool _active` 





#### `protected bool _complete` 





#### `protected virtual void connect()` 



Connects to the server endpoint. All sent data is buffered until the connection is made.

#### `protected `[`http::Client`](#classscy_1_1http_1_1Client)` * client()` 





#### `protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` 





#### `protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` 





#### `protected virtual void onSocketConnect()` 



These virtual methods can be overridden as necessary to intercept socket events before they hit the application.

#### `protected void onHostResolved(void *,const `[`net::DNSResult`](#structscy_1_1net_1_1DNSResult)` & result)` 





# class `scy::http::Connection` 

```
class scy::http::Connection
  : public scy::net::SocketAdapter
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`PacketStream`](#classscy_1_1PacketStream)` Outgoing` | 
`public `[`PacketStream`](#classscy_1_1PacketStream)` Incoming` | 
`public `[`ProgressSignal`](#classscy_1_1http_1_1ProgressSignal)` IncomingProgress` | Fired on download progress.
`public `[`ProgressSignal`](#classscy_1_1http_1_1ProgressSignal)` OutgoingProgress` | Fired on upload progress.
`public  Connection(const net::Socket::Ptr & socket)` | 
`public virtual  ~Connection()` | 
`public virtual int send(const char * data,std::size_t len,int flags)` | Send raw data to the peer.
`public virtual int sendHeader()` | Send the outdoing HTTP header.
`public virtual void close()` | 
`public bool closed() const` | Return true if the connection is closed.
`public `[`scy::Error`](#structscy_1_1Error)` error() const` | Return the error object if any.
`public void onHeaders()` | 
`public inline virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` &)` | 
`public void onMessage()` | 
`public virtual void onClose()` | 
`public bool shouldSendHeader() const` | 
`public void shouldSendHeader(bool flag)` | Set true to prevent auto-sending HTTP headers.
`public void replaceAdapter(`[`net::SocketAdapter`](#classscy_1_1net_1_1SocketAdapter)` * adapter)` | 
`public net::Socket::Ptr & socket()` | Return the underlying socket pointer.
`public `[`Request`](#classscy_1_1http_1_1Request)` & request()` | The HTTP request headers.
`public `[`Response`](#classscy_1_1http_1_1Response)` & response()` | The HTTP response headers.
`public `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` | 
`public `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` | 
`protected net::Socket::Ptr _socket` | 
`protected `[`SocketAdapter`](#group__net_1gaf9ced47f3c1aa08ccea3042997a2a320)` * _adapter` | 
`protected `[`Request`](#classscy_1_1http_1_1Request)` _request` | 
`protected `[`Response`](#classscy_1_1http_1_1Response)` _response` | 
`protected `[`scy::Error`](#structscy_1_1Error)` _error` | 
`protected bool _closed` | 
`protected bool _shouldSendHeader` | 
`protected virtual void onSocketConnect()` | 
`protected virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` | 
`protected virtual void onSocketError(const `[`scy::Error`](#structscy_1_1Error)` & error)` | 
`protected virtual void onSocketClose()` | 
`protected virtual void setError(const `[`scy::Error`](#structscy_1_1Error)` & err)` | Set the internal error.

## Members

#### `public `[`PacketStream`](#classscy_1_1PacketStream)` Outgoing` 



The Outgoing stream is responsible for packetizing raw application data into the agreed upon HTTP format and sending it to the peer.

#### `public `[`PacketStream`](#classscy_1_1PacketStream)` Incoming` 



The Incoming stream emits incoming HTTP packets for processing by the application.

This is useful for example when writing incoming data to a file.

#### `public `[`ProgressSignal`](#classscy_1_1http_1_1ProgressSignal)` IncomingProgress` 

Fired on download progress.



#### `public `[`ProgressSignal`](#classscy_1_1http_1_1ProgressSignal)` OutgoingProgress` 

Fired on upload progress.



#### `public  Connection(const net::Socket::Ptr & socket)` 





#### `public virtual  ~Connection()` 





#### `public virtual int send(const char * data,std::size_t len,int flags)` 

Send raw data to the peer.



#### `public virtual int sendHeader()` 

Send the outdoing HTTP header.



#### `public virtual void close()` 



Close the connection and schedule the object for deferred deletion.

#### `public bool closed() const` 

Return true if the connection is closed.



#### `public `[`scy::Error`](#structscy_1_1Error)` error() const` 

Return the error object if any.



#### `public void onHeaders()` 



Return true if the server did not give us a proper response within the allotted time. bool expired() const;

#### `public inline virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` &)` 





#### `public void onMessage()` 





#### `public virtual void onClose()` 





#### `public bool shouldSendHeader() const` 





#### `public void shouldSendHeader(bool flag)` 

Set true to prevent auto-sending HTTP headers.



#### `public void replaceAdapter(`[`net::SocketAdapter`](#classscy_1_1net_1_1SocketAdapter)` * adapter)` 



Assign the new [ConnectionAdapter](#classscy_1_1http_1_1ConnectionAdapter) and setup the chain The flow is: [Connection](#classscy_1_1http_1_1Connection) <-> [ConnectionAdapter](#classscy_1_1http_1_1ConnectionAdapter) <-> Socket

#### `public net::Socket::Ptr & socket()` 

Return the underlying socket pointer.



#### `public `[`Request`](#classscy_1_1http_1_1Request)` & request()` 

The HTTP request headers.



#### `public `[`Response`](#classscy_1_1http_1_1Response)` & response()` 

The HTTP response headers.



#### `public `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` 





#### `public `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` 





#### `protected net::Socket::Ptr _socket` 





#### `protected `[`SocketAdapter`](#group__net_1gaf9ced47f3c1aa08ccea3042997a2a320)` * _adapter` 





#### `protected `[`Request`](#classscy_1_1http_1_1Request)` _request` 





#### `protected `[`Response`](#classscy_1_1http_1_1Response)` _response` 





#### `protected `[`scy::Error`](#structscy_1_1Error)` _error` 





#### `protected bool _closed` 





#### `protected bool _shouldSendHeader` 





#### `protected virtual void onSocketConnect()` 



These virtual methods can be overridden as necessary to intercept socket events before they hit the application.

#### `protected virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` 





#### `protected virtual void onSocketError(const `[`scy::Error`](#structscy_1_1Error)` & error)` 





#### `protected virtual void onSocketClose()` 





#### `protected virtual void setError(const `[`scy::Error`](#structscy_1_1Error)` & err)` 

Set the internal error.



# class `scy::http::ConnectionAdapter` 

```
class scy::http::ConnectionAdapter
  : public scy::http::ParserObserver
  : public scy::net::SocketAdapter
```  

Default HTTP socket adapter for reading and writing HTTP messages.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  ConnectionAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` & connection,http_parser_type type)` | 
`public virtual  ~ConnectionAdapter()` | 
`public virtual int send(const char * data,std::size_t len,int flags)` | 
`public `[`Parser`](#classscy_1_1http_1_1Parser)` & parser()` | 
`public `[`Connection`](#classscy_1_1http_1_1Connection)` & connection()` | 
`protected `[`Connection`](#classscy_1_1http_1_1Connection)` & _connection` | 
`protected `[`Parser`](#classscy_1_1http_1_1Parser)` _parser` | 
`protected virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` | 
`protected virtual void onParserHeader(const std::string & name,const std::string & value)` | 
`protected virtual void onParserHeadersEnd()` | 
`protected virtual void onParserChunk(const char * buf,std::size_t len)` | 
`protected virtual void onParserError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` | 
`protected virtual void onParserEnd()` | 

## Members

#### `public  ConnectionAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` & connection,http_parser_type type)` 





#### `public virtual  ~ConnectionAdapter()` 





#### `public virtual int send(const char * data,std::size_t len,int flags)` 



Sends the given data buffer to the connected peer. Returns the number of bytes sent or -1 on error. No exception will be thrown. For TCP sockets the given peer address must match the connected peer address.

#### `public `[`Parser`](#classscy_1_1http_1_1Parser)` & parser()` 





#### `public `[`Connection`](#classscy_1_1http_1_1Connection)` & connection()` 





#### `protected `[`Connection`](#classscy_1_1http_1_1Connection)` & _connection` 





#### `protected `[`Parser`](#classscy_1_1http_1_1Parser)` _parser` 





#### `protected virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` 





#### `protected virtual void onParserHeader(const std::string & name,const std::string & value)` 





#### `protected virtual void onParserHeadersEnd()` 





#### `protected virtual void onParserChunk(const char * buf,std::size_t len)` 





#### `protected virtual void onParserError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` 





#### `protected virtual void onParserEnd()` 





# class `scy::http::Cookie` 




This class represents a HTTP [Cookie](#classscy_1_1http_1_1Cookie).

A cookie is a small amount of information sent by a Web server to a Web browser, saved by the browser, and later sent back to the server. A cookie's value can uniquely identify a client, so cookies are commonly used for session management.

A cookie has a name, a single value, and optional attributes such as a comment, path and domain qualifiers, a maximum age, and a version number.

This class supports both the Version 0 (by Netscape) and Version 1 (by RFC 2109) cookie specifications. By default, cookies are created using Version 0 to ensure the best interoperability.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  Cookie()` | Creates an empty [Cookie](#classscy_1_1http_1_1Cookie).
`public  explicit Cookie(const std::string & name)` | 
`public  explicit Cookie(const `[`NVCollection`](#classscy_1_1NVCollection)` & nvc)` | Creates a cookie from the given [NVCollection](#classscy_1_1NVCollection).
`public  Cookie(const std::string & name,const std::string & value)` | 
`public  Cookie(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` | Creates the [Cookie](#classscy_1_1http_1_1Cookie) by copying another one.
`public  ~Cookie()` | Destroys the [Cookie](#classscy_1_1http_1_1Cookie).
`public `[`Cookie`](#classscy_1_1http_1_1Cookie)` & operator=(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` | Assigns a cookie.
`public void setVersion(int version)` | 
`public inline int getVersion() const` | 
`public void setName(const std::string & name)` | Sets the name of the cookie.
`public inline const std::string & getName() const` | Returns the name of the cookie.
`public void setValue(const std::string & value)` | 
`public inline const std::string & getValue() const` | Returns the value of the cookie.
`public void setComment(const std::string & comment)` | 
`public inline const std::string & getComment() const` | Returns the comment for the cookie.
`public void setDomain(const std::string & domain)` | Sets the domain for the cookie.
`public inline const std::string & getDomain() const` | Returns the domain for the cookie.
`public void setPath(const std::string & path)` | Sets the path for the cookie.
`public inline const std::string & getPath() const` | Returns the path for the cookie.
`public void setSecure(bool secure)` | 
`public inline bool getSecure() const` | 
`public void setMaxAge(int maxAge)` | 
`public inline int getMaxAge() const` | 
`public void setHttpOnly(bool flag)` | Sets the HttpOnly flag for the cookie.
`public inline bool getHttpOnly() const` | Returns true if the cookie's HttpOnly flag is set.
`public std::string toString() const` | 

## Members

#### `public  Cookie()` 

Creates an empty [Cookie](#classscy_1_1http_1_1Cookie).



#### `public  explicit Cookie(const std::string & name)` 



Creates a cookie with the given name. The cookie never expires.

#### `public  explicit Cookie(const `[`NVCollection`](#classscy_1_1NVCollection)` & nvc)` 

Creates a cookie from the given [NVCollection](#classscy_1_1NVCollection).



#### `public  Cookie(const std::string & name,const std::string & value)` 



Creates a cookie with the given name and value. The cookie never expires.

Note: If value contains whitespace or non-alphanumeric characters, the value should be escaped by calling [escape()](#group__http_1ga5dc9fb3d11c40a91b69c562135a4a5f8) before passing it to the constructor.

#### `public  Cookie(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` 

Creates the [Cookie](#classscy_1_1http_1_1Cookie) by copying another one.



#### `public  ~Cookie()` 

Destroys the [Cookie](#classscy_1_1http_1_1Cookie).



#### `public `[`Cookie`](#classscy_1_1http_1_1Cookie)` & operator=(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` 

Assigns a cookie.



#### `public void setVersion(int version)` 



Sets the version of the cookie.

Version must be either 0 (denoting a Netscape cookie) or 1 (denoting a RFC 2109 cookie).

#### `public inline int getVersion() const` 



Returns the version of the cookie, which is either 0 or 1.

#### `public void setName(const std::string & name)` 

Sets the name of the cookie.



#### `public inline const std::string & getName() const` 

Returns the name of the cookie.



#### `public void setValue(const std::string & value)` 



Sets the value of the cookie.

According to the cookie specification, the size of the value should not exceed 4 Kbytes.

Note: If value contains whitespace or non-alphanumeric characters, the value should be escaped by calling [escape()](#group__http_1ga5dc9fb3d11c40a91b69c562135a4a5f8) prior to passing it to [setName()](#group__http_1gad8867c1d8c54497acc3b251b9086f73d).

#### `public inline const std::string & getValue() const` 

Returns the value of the cookie.



#### `public void setComment(const std::string & comment)` 



Sets the comment for the cookie.

Comments are only supported for version 1 cookies.

#### `public inline const std::string & getComment() const` 

Returns the comment for the cookie.



#### `public void setDomain(const std::string & domain)` 

Sets the domain for the cookie.



#### `public inline const std::string & getDomain() const` 

Returns the domain for the cookie.



#### `public void setPath(const std::string & path)` 

Sets the path for the cookie.



#### `public inline const std::string & getPath() const` 

Returns the path for the cookie.



#### `public void setSecure(bool secure)` 



Sets the value of the secure flag for the cookie.

#### `public inline bool getSecure() const` 



Returns the value of the secure flag for the cookie.

#### `public void setMaxAge(int maxAge)` 



Sets the maximum age in seconds for the cookie.

A value of -1 causes the cookie to never expire on the client.

A value of 0 deletes the cookie on the client.

#### `public inline int getMaxAge() const` 



Returns the maximum age in seconds for the cookie.

#### `public void setHttpOnly(bool flag)` 

Sets the HttpOnly flag for the cookie.



#### `public inline bool getHttpOnly() const` 

Returns true if the cookie's HttpOnly flag is set.



#### `public std::string toString() const` 



Returns a std::string representation of the cookie, suitable for use in a Set-Cookie header.

# class `scy::http::FilePart` 

```
class scy::http::FilePart
  : public scy::http::FormPart
```  

An implementation of [FilePart](#classscy_1_1http_1_1FilePart) for plain files.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  FilePart(const std::string & path)` | 
`public  FilePart(const std::string & path,const std::string & contentType)` | 
`public  FilePart(const std::string & path,const std::string & filename,const std::string & contentType)` | 
`public virtual  ~FilePart()` | Destroys the [FilePart](#classscy_1_1http_1_1FilePart).
`public virtual void open()` | 
`public virtual void reset()` | Reset the internal state and write position to the start.
`public virtual bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | 
`public virtual void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | Writes the form data to the given HTTP client connection.
`public virtual void write(std::ostream & ostr)` | Writes the form data to the given output stream.
`public const std::string & filename() const` | Returns the filename portion of the path.
`public std::ifstream & stream()` | Returns the file input stream.
`public virtual std::uint64_t length() const` | Returns the length of the current part.
`protected std::string _path` | 
`protected std::string _filename` | 
`protected std::ifstream _istr` | 
`protected std::uint64_t _fileSize` | 

## Members

#### `public  FilePart(const std::string & path)` 



Creates the [FilePart](#classscy_1_1http_1_1FilePart) for the given path.

The MIME type is set to application/octet-stream.

Throws an FileException if the file cannot be opened.

#### `public  FilePart(const std::string & path,const std::string & contentType)` 



Creates the [FilePart](#classscy_1_1http_1_1FilePart) for the given path and MIME type.

Throws an FileException if the file cannot be opened.

#### `public  FilePart(const std::string & path,const std::string & filename,const std::string & contentType)` 



Creates the [FilePart](#classscy_1_1http_1_1FilePart) for the given path and MIME type. The given filename is used as part filename (see [filename()](#group__http_1gad2765df66b173afe804630d0294b57d2)) only.

Throws an FileException if the file cannot be opened.

#### `public virtual  ~FilePart()` 

Destroys the [FilePart](#classscy_1_1http_1_1FilePart).



#### `public virtual void open()` 



Opens the file.

Throws an FileException if the file cannot be opened.

#### `public virtual void reset()` 

Reset the internal state and write position to the start.



#### `public virtual bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 



Writes a form data chunk to the given HTTP client connection. Returns true if there is more data to be written.

#### `public virtual void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 

Writes the form data to the given HTTP client connection.



#### `public virtual void write(std::ostream & ostr)` 

Writes the form data to the given output stream.



#### `public const std::string & filename() const` 

Returns the filename portion of the path.



#### `public std::ifstream & stream()` 

Returns the file input stream.



#### `public virtual std::uint64_t length() const` 

Returns the length of the current part.



#### `protected std::string _path` 





#### `protected std::string _filename` 





#### `protected std::ifstream _istr` 





#### `protected std::uint64_t _fileSize` 





# class `scy::http::FormPart` 


An implementation of [FormPart](#classscy_1_1http_1_1FormPart).



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  FormPart(const std::string & contentType)` | Creates the [FormPart](#classscy_1_1http_1_1FormPart) with the given MIME type.
`public virtual  ~FormPart()` | Destroys the [FormPart](#classscy_1_1http_1_1FormPart).
`public virtual void reset()` | Reset the internal state and write position to the start.
`public bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | 
`public void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | Writes the form data to the given HTTP client connection.
`public void write(std::ostream & ostr)` | Writes the form data to the given output stream.
`public `[`NVCollection`](#classscy_1_1NVCollection)` & headers()` | 
`public virtual bool initialWrite() const` | Returns true if this is the initial write.
`public const std::string & contentType() const` | Returns the MIME type for this part or attachment.
`public std::uint64_t length() const` | Returns the length of the current part.
`protected std::string _contentType` | 
`protected std::uint64_t _length` | 
`protected `[`NVCollection`](#classscy_1_1NVCollection)` _headers` | 
`protected bool _initialWrite` | 

## Members

#### `public  FormPart(const std::string & contentType)` 

Creates the [FormPart](#classscy_1_1http_1_1FormPart) with the given MIME type.



#### `public virtual  ~FormPart()` 

Destroys the [FormPart](#classscy_1_1http_1_1FormPart).



#### `public virtual void reset()` 

Reset the internal state and write position to the start.



#### `public bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 



Writes a form data chunk to the given HTTP client connection. Returns true if there is more data to be written.

#### `public void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 

Writes the form data to the given HTTP client connection.



#### `public void write(std::ostream & ostr)` 

Writes the form data to the given output stream.



#### `public `[`NVCollection`](#classscy_1_1NVCollection)` & headers()` 



Returns a [NVCollection](#classscy_1_1NVCollection) containing additional header fields for the part.

#### `public virtual bool initialWrite() const` 

Returns true if this is the initial write.



#### `public const std::string & contentType() const` 

Returns the MIME type for this part or attachment.



#### `public std::uint64_t length() const` 

Returns the length of the current part.



#### `protected std::string _contentType` 





#### `protected std::uint64_t _length` 





#### `protected `[`NVCollection`](#classscy_1_1NVCollection)` _headers` 





#### `protected bool _initialWrite` 





# class `scy::http::FormWriter` 

```
class scy::http::FormWriter
  : public scy::NVCollection
  : public scy::PacketStreamAdapter
  : public scy::async::Startable
```  



[FormWriter](#classscy_1_1http_1_1FormWriter) is a HTTP client connection adapter for writing HTML forms.

This class runs in its own thread so as not to block the event loop while uploading big files. Class members are not synchronized hence they should not be accessed while the form is sending, not that there would be any reason to do so.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` | The outgoing packet emitter.
`public virtual  ~FormWriter()` | Destroys the [FormWriter](#classscy_1_1http_1_1FormWriter).
`public void addPart(const std::string & name,`[`FormPart`](#classscy_1_1http_1_1FormPart)` * part)` | 
`public virtual void start()` | Starts the sending thread.
`public virtual void stop()` | Stops the sending thread.
`public bool complete() const` | Returns true if the request is complete.
`public bool cancelled() const` | Returns true if the request is cancelled.
`public void prepareSubmit()` | 
`public std::uint64_t calculateMultipartContentLength()` | 
`public void writeUrl(std::ostream & ostr)` | 
`public void writeMultipartChunk()` | 
`public void writeAsync()` | 
`public void setEncoding(const std::string & encoding)` | 
`public const std::string & encoding() const` | Returns the encoding used for posting the form.
`public void setBoundary(const std::string & boundary)` | 
`public const std::string & boundary() const` | Returns the MIME boundary used for writing multipart form data.
`public `[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & connection()` | The associated HTTP client connection.
`protected `[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & _connection` | 
`protected async::Runner::Ptr _runner` | 
`protected std::string _encoding` | 
`protected std::string _boundary` | 
`protected PartQueue _parts` | 
`protected std::uint64_t _filesLength` | 
`protected int _writeState` | 
`protected bool _initial` | 
`protected bool _complete` | 
`protected  FormWriter(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & conn,async::Runner::Ptr runner,const std::string & encoding)` | 
`protected  FormWriter(const `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` &)` | 
`protected `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & operator=(const `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` &)` | 
`protected void writePartHeader(const `[`NVCollection`](#classscy_1_1NVCollection)` & header,std::ostream & ostr)` | 
`protected void writeEnd(std::ostream & ostr)` | Writes the final boundary std::string to the output stream.
`protected virtual void updateProgress(int nread)` | 

## Members

#### `public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` 

The outgoing packet emitter.



#### `public virtual  ~FormWriter()` 

Destroys the [FormWriter](#classscy_1_1http_1_1FormWriter).



#### `public void addPart(const std::string & name,`[`FormPart`](#classscy_1_1http_1_1FormPart)` * part)` 



Adds an part/attachment (file upload) to the form.

The form takes ownership of the [FilePart](#classscy_1_1http_1_1FilePart) and deletes it when it is no longer needed. The part will only be sent if the encoding set for the form is "multipart/form-data"

#### `public virtual void start()` 

Starts the sending thread.



#### `public virtual void stop()` 

Stops the sending thread.



#### `public bool complete() const` 

Returns true if the request is complete.



#### `public bool cancelled() const` 

Returns true if the request is cancelled.



#### `public void prepareSubmit()` 



Prepares the outgoing HTTP request object for submitting the form.

If the request method is GET, the encoded form is appended to the request URI as query std::string. Otherwise (the method is POST), the form's content type is set to the form's encoding. The form's parameters must be written to the request body separately, with a call to write. If the request's HTTP version is HTTP/1.0:

* persistent connections are disabled


* the content transfer encoding is set to identity encoding Otherwise, if the request's HTTP version is HTTP/1.1:


* the request's persistent connection state is left unchanged


* the content transfer encoding is set to chunked

#### `public std::uint64_t calculateMultipartContentLength()` 



Processes the entire stream and calculates the content length. Not used for chunked encoding.

#### `public void writeUrl(std::ostream & ostr)` 



Writes "application/x-www-form-urlencoded" encoded data to the client connection.

#### `public void writeMultipartChunk()` 



Writes the next multipart "multipart/form-data" encoded to the client connection. This method is non-blocking, // and is suitable for use with the event loop.

#### `public void writeAsync()` 



Called asynchronously by the Runner to write the next message chunk. If "multipart/form-data" the next multipart chunk will be written. If "application/x-www-form-urlencoded" the entire message will be written. The complete flag will be set when the entire request has been written.

#### `public void setEncoding(const std::string & encoding)` 



Sets the encoding used for posting the form.

Encoding must be either "application/x-www-form-urlencoded" (which is the default) or "multipart/form-data".

#### `public const std::string & encoding() const` 

Returns the encoding used for posting the form.



#### `public void setBoundary(const std::string & boundary)` 



Sets the boundary to use for separating form parts. Must be set before [prepareSubmit()](#group__http_1gaa5769359cbcdf8addf6da8dc3f45d283) is called.

#### `public const std::string & boundary() const` 

Returns the MIME boundary used for writing multipart form data.



#### `public `[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & connection()` 

The associated HTTP client connection.



#### `protected `[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & _connection` 





#### `protected async::Runner::Ptr _runner` 





#### `protected std::string _encoding` 





#### `protected std::string _boundary` 





#### `protected PartQueue _parts` 





#### `protected std::uint64_t _filesLength` 





#### `protected int _writeState` 





#### `protected bool _initial` 





#### `protected bool _complete` 





#### `protected  FormWriter(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & conn,async::Runner::Ptr runner,const std::string & encoding)` 



Creates the [FormWriter](#classscy_1_1http_1_1FormWriter) that uses the given encoding.

Encoding must be either "application/x-www-form-urlencoded" (which is the default) or "multipart/form-data".

#### `protected  FormWriter(const `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` &)` 





#### `protected `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & operator=(const `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` &)` 





#### `protected void writePartHeader(const `[`NVCollection`](#classscy_1_1NVCollection)` & header,std::ostream & ostr)` 



Writes the message boundary std::string, followed by the message header to the output stream.

#### `protected void writeEnd(std::ostream & ostr)` 

Writes the final boundary std::string to the output stream.



#### `protected virtual void updateProgress(int nread)` 



Updates the upload progress via the associated [ClientConnection](#classscy_1_1http_1_1ClientConnection) object.

# class `scy::http::Message` 

```
class scy::http::Message
  : public scy::NVCollection
```  



The base class for [Request](#classscy_1_1http_1_1Request) and [Response](#classscy_1_1http_1_1Response).

Defines the common properties of all HTTP messages. These are version, content length, content type and transfer encoding.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void setVersion(const std::string & version)` | Sets the HTTP version for this message.
`public const std::string & getVersion() const` | Returns the HTTP version for this message.
`public void setContentLength(std::uint64_t length)` | 
`public std::uint64_t getContentLength() const` | 
`public bool hasContentLength() const` | Returns true if a Content-Length header is present.
`public void setTransferEncoding(const std::string & transferEncoding)` | 
`public const std::string & getTransferEncoding() const` | 
`public void setChunkedTransferEncoding(bool flag)` | 
`public bool isChunkedTransferEncoding() const` | 
`public void setContentType(const std::string & contentType)` | 
`public const std::string & getContentType() const` | 
`public void setKeepAlive(bool keepAlive)` | 
`public bool getKeepAlive() const` | 
`public virtual void write(std::ostream & ostr) const` | 
`protected  Message()` | Creates the [Message](#classscy_1_1http_1_1Message) with version HTTP/1.0.
`protected  Message(const std::string & version)` | 
`protected virtual  ~Message()` | Destroys the [Message](#classscy_1_1http_1_1Message).

## Members

#### `public void setVersion(const std::string & version)` 

Sets the HTTP version for this message.



#### `public const std::string & getVersion() const` 

Returns the HTTP version for this message.



#### `public void setContentLength(std::uint64_t length)` 



Sets the Content-Length header.

If length is UNKNOWN_CONTENT_LENGTH, removes the Content-Length header.

#### `public std::uint64_t getContentLength() const` 



Returns the content length for this message, which may be UNKNOWN_CONTENT_LENGTH if no Content-Length header is present.

#### `public bool hasContentLength() const` 

Returns true if a Content-Length header is present.



#### `public void setTransferEncoding(const std::string & transferEncoding)` 



Sets the transfer encoding for this message.

The value should be either IDENTITY_TRANSFER_CODING or CHUNKED_TRANSFER_CODING.

#### `public const std::string & getTransferEncoding() const` 



Returns the transfer encoding used for this message.

Normally, this is the value of the Transfer-Encoding header field. If no such field is present, returns IDENTITY_TRANSFER_CODING.

#### `public void setChunkedTransferEncoding(bool flag)` 



If flag is true, sets the Transfer-Encoding header to chunked. Otherwise, removes the Transfer-Encoding header.

#### `public bool isChunkedTransferEncoding() const` 



Returns true if the Transfer-Encoding header is set and its value is chunked.

#### `public void setContentType(const std::string & contentType)` 



Sets the content type for this message.

Specify NO_CONTENT_TYPE to remove the Content-Type header.

#### `public const std::string & getContentType() const` 



Returns the content type for this message.

If no Content-Type header is present, returns UNKNOWN_CONTENT_TYPE.

#### `public void setKeepAlive(bool keepAlive)` 



Sets the value of the [Connection](#classscy_1_1http_1_1Connection) header field.

The value is set to "Keep-Alive" if keepAlive is true, or to "Close" otherwise.

#### `public bool getKeepAlive() const` 



Returns true if

* the message has a [Connection](#classscy_1_1http_1_1Connection) header field and its value is "Keep-Alive"


* the message is a HTTP/1.1 message and not [Connection](#classscy_1_1http_1_1Connection) header is set Returns false otherwise.

#### `public virtual void write(std::ostream & ostr) const` 



Writes the message header to the given output stream.

The format is one name-value pair per line, with name and value separated by a colon and lines delimited by a carriage return and a linefeed character. See RFC 2822 for details.

#### `protected  Message()` 

Creates the [Message](#classscy_1_1http_1_1Message) with version HTTP/1.0.



#### `protected  Message(const std::string & version)` 



Creates the [Message](#classscy_1_1http_1_1Message) and sets the version.

#### `protected virtual  ~Message()` 

Destroys the [Message](#classscy_1_1http_1_1Message).



# class `scy::http::MultipartAdapter` 

```
class scy::http::MultipartAdapter
  : public scy::PacketProcessor
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`Connection`](#classscy_1_1http_1_1Connection)` * connection` | 
`public std::string contentType` | 
`public bool isBase64` | 
`public bool initial` | 
`public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` | 
`public inline  MultipartAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` * connection,bool base64)` | 
`public inline  MultipartAdapter(const std::string & contentType,bool base64)` | 
`public inline virtual  ~MultipartAdapter()` | 
`public inline virtual void emitHeader()` | 
`public inline virtual void emitChunkHeader()` | Sets HTTP header for the current chunk.
`public inline virtual void process(`[`IPacket`](#classscy_1_1IPacket)` & packet)` | 

## Members

#### `public `[`Connection`](#classscy_1_1http_1_1Connection)` * connection` 





#### `public std::string contentType` 





#### `public bool isBase64` 





#### `public bool initial` 





#### `public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` 





#### `public inline  MultipartAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` * connection,bool base64)` 





#### `public inline  MultipartAdapter(const std::string & contentType,bool base64)` 





#### `public inline virtual  ~MultipartAdapter()` 





#### `public inline virtual void emitHeader()` 





#### `public inline virtual void emitChunkHeader()` 

Sets HTTP header for the current chunk.



#### `public inline virtual void process(`[`IPacket`](#classscy_1_1IPacket)` & packet)` 



This method performs processing on the given packet and emits the result.

Note: If packet processing is async (the packet is not in the current thread scope) then packet data must be copied. Copied data can be freed directly aFter the async call to emit() the outgoing packet.

# class `scy::http::Parser` 






## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * _observer` | 
`public `[`http::Request`](#classscy_1_1http_1_1Request)` * _request` | 
`public `[`http::Response`](#classscy_1_1http_1_1Response)` * _response` | 
`public `[`http::Message`](#classscy_1_1http_1_1Message)` * _message` | 
`public http_parser _parser` | 
`public http_parser_settings _settings` | 
`public bool _wasHeaderValue` | 
`public std::string _lastHeaderField` | 
`public std::string _lastHeaderValue` | 
`public bool _complete` | 
`public `[`ParserError`](#structscy_1_1http_1_1ParserError)` * _error` | 
`public  Parser(`[`http::Response`](#classscy_1_1http_1_1Response)` * response)` | 
`public  Parser(`[`http::Request`](#classscy_1_1http_1_1Request)` * request)` | 
`public  Parser(http_parser_type type)` | 
`public  ~Parser()` | 
`public void init(http_parser_type type)` | 
`public std::size_t parse(const char * data,std::size_t length)` | 
`public void reset()` | 
`public bool complete() const` | 
`public void setParserError(const std::string & message)` | 
`public void setRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` * request)` | 
`public void setResponse(`[`http::Response`](#classscy_1_1http_1_1Response)` * response)` | 
`public void setObserver(`[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * observer)` | 
`public `[`http::Message`](#classscy_1_1http_1_1Message)` * message()` | 
`public `[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * observer() const` | 
`public bool upgrade() const` | 
`public bool shouldKeepAlive() const` | 
`public void onURL(const std::string & value)` | 
`public void onHeader(const std::string & name,const std::string & value)` | 
`public void onHeadersEnd()` | 
`public void onBody(const char * buf,std::size_t len)` | 
`public void onMessageEnd()` | 
`public void onError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` | 

## Members

#### `public `[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * _observer` 





#### `public `[`http::Request`](#classscy_1_1http_1_1Request)` * _request` 





#### `public `[`http::Response`](#classscy_1_1http_1_1Response)` * _response` 





#### `public `[`http::Message`](#classscy_1_1http_1_1Message)` * _message` 





#### `public http_parser _parser` 





#### `public http_parser_settings _settings` 





#### `public bool _wasHeaderValue` 





#### `public std::string _lastHeaderField` 





#### `public std::string _lastHeaderValue` 





#### `public bool _complete` 





#### `public `[`ParserError`](#structscy_1_1http_1_1ParserError)` * _error` 





#### `public  Parser(`[`http::Response`](#classscy_1_1http_1_1Response)` * response)` 





#### `public  Parser(`[`http::Request`](#classscy_1_1http_1_1Request)` * request)` 





#### `public  Parser(http_parser_type type)` 





#### `public  ~Parser()` 





#### `public void init(http_parser_type type)` 





#### `public std::size_t parse(const char * data,std::size_t length)` 





#### `public void reset()` 



Feed data read from socket into the http_parser.

Returns true of the message is complete, false if incomplete. Reset the parser state for a new message

#### `public bool complete() const` 



Returns true if parsing is complete, either in success or error.

#### `public void setParserError(const std::string & message)` 





#### `public void setRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` * request)` 





#### `public void setResponse(`[`http::Response`](#classscy_1_1http_1_1Response)` * response)` 





#### `public void setObserver(`[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * observer)` 





#### `public `[`http::Message`](#classscy_1_1http_1_1Message)` * message()` 





#### `public `[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * observer() const` 





#### `public bool upgrade() const` 





#### `public bool shouldKeepAlive() const` 





#### `public void onURL(const std::string & value)` 





#### `public void onHeader(const std::string & name,const std::string & value)` 





#### `public void onHeadersEnd()` 





#### `public void onBody(const char * buf,std::size_t len)` 





#### `public void onMessageEnd()` 





#### `public void onError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` 





# class `scy::http::ParserObserver` 






## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void onParserHeader(const std::string & name,const std::string & value)` | 
`public void onParserHeadersEnd()` | 
`public void onParserChunk(const char * data,std::size_t len)` | 
`public void onParserEnd()` | 
`public void onParserError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` | 

## Members

#### `public void onParserHeader(const std::string & name,const std::string & value)` 





#### `public void onParserHeadersEnd()` 





#### `public void onParserChunk(const char * data,std::size_t len)` 





#### `public void onParserEnd()` 





#### `public void onParserError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` 





# class `scy::http::ProgressSignal` 

```
class scy::http::ProgressSignal
  : public scy::Signal< const double &>
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void * sender` | 
`public std::uint64_t current` | 
`public std::uint64_t total` | 
`public inline  ProgressSignal()` | 
`public inline double progress() const` | 
`public inline void update(int nread)` | 

## Members

#### `public void * sender` 





#### `public std::uint64_t current` 





#### `public std::uint64_t total` 





#### `public inline  ProgressSignal()` 





#### `public inline double progress() const` 





#### `public inline void update(int nread)` 





# class `scy::http::Request` 

```
class scy::http::Request
  : public scy::http::Message
```  



This class encapsulates an HTTP request message.

In addition to the properties common to all HTTP messages, a HTTP request has a method (e.g. GET, HEAD, POST, etc.) and a request URI.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  Request()` | Creates a GET / HTTP/1.1 HTTP request.
`public  Request(const std::string & version)` | 
`public  Request(const std::string & method,const std::string & uri)` | Creates a HTTP/1.0 request with the given method and URI.
`public  Request(const std::string & method,const std::string & uri,const std::string & version)` | Creates a HTTP request with the given method, URI and version.
`public virtual  ~Request()` | Destroys the [Request](#classscy_1_1http_1_1Request).
`public void setMethod(const std::string & method)` | Sets the method.
`public const std::string & getMethod() const` | Returns the method.
`public void setURI(const std::string & uri)` | Sets the request URI.
`public const std::string & getURI() const` | Returns the request URI.
`public void setHost(const std::string & host)` | Sets the value of the Host header field.
`public void setHost(const std::string & host,std::uint16_t port)` | 
`public const std::string & getHost() const` | 
`public void setCookies(const `[`NVCollection`](#classscy_1_1NVCollection)` & cookies)` | 
`public void getCookies(`[`NVCollection`](#classscy_1_1NVCollection)` & cookies) const` | 
`public void getURIParameters(`[`NVCollection`](#classscy_1_1NVCollection)` & params) const` | Returns the request URI parameters.
`public bool hasCredentials() const` | 
`public void getCredentials(std::string & scheme,std::string & authInfo) const` | 
`public void setCredentials(const std::string & scheme,const std::string & authInfo)` | 
`public bool hasProxyCredentials() const` | 
`public void getProxyCredentials(std::string & scheme,std::string & authInfo) const` | 
`public void setProxyCredentials(const std::string & scheme,const std::string & authInfo)` | Sets the proxy authentication scheme and information for this request.
`public virtual void write(std::ostream & ostr) const` | Writes the HTTP request to the given output stream.
`protected void getCredentials(const std::string & header,std::string & scheme,std::string & authInfo) const` | 
`protected void setCredentials(const std::string & header,const std::string & scheme,const std::string & authInfo)` | 

## Members

#### `public  Request()` 

Creates a GET / HTTP/1.1 HTTP request.



#### `public  Request(const std::string & version)` 



Creates a GET / HTTP/1.x request with the given version (HTTP/1.0 or HTTP/1.1).

#### `public  Request(const std::string & method,const std::string & uri)` 

Creates a HTTP/1.0 request with the given method and URI.



#### `public  Request(const std::string & method,const std::string & uri,const std::string & version)` 

Creates a HTTP request with the given method, URI and version.



#### `public virtual  ~Request()` 

Destroys the [Request](#classscy_1_1http_1_1Request).



#### `public void setMethod(const std::string & method)` 

Sets the method.



#### `public const std::string & getMethod() const` 

Returns the method.



#### `public void setURI(const std::string & uri)` 

Sets the request URI.



#### `public const std::string & getURI() const` 

Returns the request URI.



#### `public void setHost(const std::string & host)` 

Sets the value of the Host header field.



#### `public void setHost(const std::string & host,std::uint16_t port)` 



Sets the value of the Host header field.

If the given port number is a non-standard port number (other than 80 or 443), it is included in the Host header field.

#### `public const std::string & getHost() const` 



Returns the value of the Host header field.

Throws a NotFoundException if the request does not have a Host header field.

#### `public void setCookies(const `[`NVCollection`](#classscy_1_1NVCollection)` & cookies)` 



Adds a [Cookie](#classscy_1_1http_1_1Cookie) header with the names and values from cookies.

#### `public void getCookies(`[`NVCollection`](#classscy_1_1NVCollection)` & cookies) const` 



Fills cookies with the cookies extracted from the [Cookie](#classscy_1_1http_1_1Cookie) headers in the request.

#### `public void getURIParameters(`[`NVCollection`](#classscy_1_1NVCollection)` & params) const` 

Returns the request URI parameters.



#### `public bool hasCredentials() const` 



Returns true if the request contains authentication information in the form of an Authorization header.

#### `public void getCredentials(std::string & scheme,std::string & authInfo) const` 



Returns the authentication scheme and additional authentication information contained in this request.

Throws a std::exception if no authentication information is contained in the request.

#### `public void setCredentials(const std::string & scheme,const std::string & authInfo)` 



Sets the authentication scheme and information for this request.

#### `public bool hasProxyCredentials() const` 



Returns true if the request contains proxy authentication information in the form of an Proxy-Authorization header.

#### `public void getProxyCredentials(std::string & scheme,std::string & authInfo) const` 



Returns the proxy authentication scheme and additional proxy authentication information contained in this request.

Throws a std::exception if no proxy authentication information is contained in the request.

#### `public void setProxyCredentials(const std::string & scheme,const std::string & authInfo)` 

Sets the proxy authentication scheme and information for this request.



#### `public virtual void write(std::ostream & ostr) const` 

Writes the HTTP request to the given output stream.



#### `protected void getCredentials(const std::string & header,std::string & scheme,std::string & authInfo) const` 



Returns the authentication scheme and additional authentication information contained in the given header of request.

Throws a NotAuthenticatedException if no authentication information is contained in the request.

#### `protected void setCredentials(const std::string & header,const std::string & scheme,const std::string & authInfo)` 



Writes the authentication scheme and information for this request to the given header.

# class `scy::http::Response` 

```
class scy::http::Response
  : public scy::http::Message
```  

This class encapsulates an HTTP response message.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  Response()` | typedef std::shared_ptr<Response> Ptr;
`public  Response(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` | Creates the [Response](#classscy_1_1http_1_1Response) with the given status and reason phrase.
`public  Response(const std::string & version,`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` | Creates the [Response](#classscy_1_1http_1_1Response) with the given version, status and reason phrase.
`public  Response(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` | 
`public  Response(const std::string & version,`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` | 
`public virtual  ~Response()` | Destroys the [Response](#classscy_1_1http_1_1Response).
`public void setStatus(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` | 
`public `[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` getStatus() const` | Returns the HTTP status code.
`public void setReason(const std::string & reason)` | Sets the HTTP reason phrase.
`public const std::string & getReason() const` | Returns the HTTP reason phrase.
`public void setStatusAndReason(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` | Sets the HTTP status code and reason phrase.
`public void setDate(const `[`Timestamp`](#classscy_1_1Timestamp)` & dateTime)` | Sets the Date header to the given date/time value.
`public `[`Timestamp`](#classscy_1_1Timestamp)` getDate() const` | Returns the value of the Date header.
`public void addCookie(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` | 
`public void getCookies(std::vector< `[`Cookie`](#classscy_1_1http_1_1Cookie)` > & cookies) const` | 
`public virtual void write(std::ostream & ostr) const` | Writes the HTTP response headers to the given output stream.
`public virtual bool success() const` | Returns true if the HTTP response code was successful (>= 400).

## Members

#### `public  Response()` 

typedef std::shared_ptr<Response> Ptr;

Creates the [Response](#classscy_1_1http_1_1Response) with OK status.

#### `public  Response(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` 

Creates the [Response](#classscy_1_1http_1_1Response) with the given status and reason phrase.



#### `public  Response(const std::string & version,`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` 

Creates the [Response](#classscy_1_1http_1_1Response) with the given version, status and reason phrase.



#### `public  Response(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` 



Creates the [Response](#classscy_1_1http_1_1Response) with the given status an an appropriate reason phrase.

#### `public  Response(const std::string & version,`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` 



Creates the [Response](#classscy_1_1http_1_1Response) with the given version, status an an appropriate reason phrase.

#### `public virtual  ~Response()` 

Destroys the [Response](#classscy_1_1http_1_1Response).



#### `public void setStatus(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` 



Sets the HTTP status code.

The reason phrase is set according to the status code.

#### `public `[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` getStatus() const` 

Returns the HTTP status code.



#### `public void setReason(const std::string & reason)` 

Sets the HTTP reason phrase.



#### `public const std::string & getReason() const` 

Returns the HTTP reason phrase.



#### `public void setStatusAndReason(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` 

Sets the HTTP status code and reason phrase.



#### `public void setDate(const `[`Timestamp`](#classscy_1_1Timestamp)` & dateTime)` 

Sets the Date header to the given date/time value.



#### `public `[`Timestamp`](#classscy_1_1Timestamp)` getDate() const` 

Returns the value of the Date header.



#### `public void addCookie(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` 



Adds the cookie to the response by adding a Set-Cookie header.

#### `public void getCookies(std::vector< `[`Cookie`](#classscy_1_1http_1_1Cookie)` > & cookies) const` 



Returns a vector with all the cookies set in the response header.

May throw an exception in case of a malformed Set-Cookie header.

#### `public virtual void write(std::ostream & ostr) const` 

Writes the HTTP response headers to the given output stream.



#### `public virtual bool success() const` 

Returns true if the HTTP response code was successful (>= 400).



# class `scy::http::Server` 




DISCLAIMER: This HTTP server is not standards compliant. It was created to be a fast (nocopy where possible) solution for streaming video to web browsers.

TODO:

* SSL [Server](#classscy_1_1http_1_1Server)


* Enable responders (controllers?) to be instantiated via registered routes.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public net::TCPSocket::Ptr socket` | 
`public `[`ServerResponderFactory`](#classscy_1_1http_1_1ServerResponderFactory)` * factory` | 
`public ServerConnectionList connections` | 
`public `[`net::Address`](#classscy_1_1net_1_1Address)` address` | 
`public `[`NullSignal`](#classscy_1_1NullSignal)` Shutdown` | 
`public  Server(short port,`[`ServerResponderFactory`](#classscy_1_1http_1_1ServerResponderFactory)` * factory)` | 
`public virtual  ~Server()` | 
`public void start()` | 
`public void shutdown()` | 
`public std::uint16_t port()` | 
`protected ServerConnection::Ptr createConnection(const net::Socket::Ptr & sock)` | 
`protected `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * createResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & conn)` | 
`protected virtual void addConnection(ServerConnection::Ptr conn)` | 
`protected virtual void removeConnection(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` * conn)` | 
`protected void onAccept(const net::TCPSocket::Ptr & sock)` | 
`protected void onClose()` | 
`protected void onConnectionClose(void *)` | 

## Members

#### `public net::TCPSocket::Ptr socket` 





#### `public `[`ServerResponderFactory`](#classscy_1_1http_1_1ServerResponderFactory)` * factory` 





#### `public ServerConnectionList connections` 





#### `public `[`net::Address`](#classscy_1_1net_1_1Address)` address` 





#### `public `[`NullSignal`](#classscy_1_1NullSignal)` Shutdown` 





#### `public  Server(short port,`[`ServerResponderFactory`](#classscy_1_1http_1_1ServerResponderFactory)` * factory)` 





#### `public virtual  ~Server()` 





#### `public void start()` 





#### `public void shutdown()` 





#### `public std::uint16_t port()` 





#### `protected ServerConnection::Ptr createConnection(const net::Socket::Ptr & sock)` 





#### `protected `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * createResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & conn)` 





#### `protected virtual void addConnection(ServerConnection::Ptr conn)` 





#### `protected virtual void removeConnection(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` * conn)` 





#### `protected void onAccept(const net::TCPSocket::Ptr & sock)` 





#### `protected void onClose()` 





#### `protected void onConnectionClose(void *)` 





# class `scy::http::ServerAdapter` 

```
class scy::http::ServerAdapter
  : public scy::http::ConnectionAdapter
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  ServerAdapter(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` | 

## Members

#### `public inline  ServerAdapter(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` 





# class `scy::http::ServerConnection` 

```
class scy::http::ServerConnection
  : public scy::http::Connection
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  ServerConnection(`[`Server`](#classscy_1_1http_1_1Server)` & server,net::Socket::Ptr socket)` | 
`public virtual  ~ServerConnection()` | 
`public virtual void close()` | Sends the HTTP response.
`protected `[`Server`](#classscy_1_1http_1_1Server)` & _server` | 
`protected `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * _responder` | 
`protected bool _upgrade` | 
`protected bool _requestComplete` | 
`protected virtual void onHeaders()` | 
`protected virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer)` | 
`protected virtual void onMessage()` | 
`protected virtual void onClose()` | 
`protected `[`Server`](#classscy_1_1http_1_1Server)` & server()` | 
`protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` | 
`protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` | 

## Members

#### `public  ServerConnection(`[`Server`](#classscy_1_1http_1_1Server)` & server,net::Socket::Ptr socket)` 





#### `public virtual  ~ServerConnection()` 





#### `public virtual void close()` 

Sends the HTTP response.

Closes the HTTP connection

#### `protected `[`Server`](#classscy_1_1http_1_1Server)` & _server` 





#### `protected `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * _responder` 





#### `protected bool _upgrade` 





#### `protected bool _requestComplete` 





#### `protected virtual void onHeaders()` 



Return true if the server did not give us a proper response within the allotted time. bool expired() const;

#### `protected virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer)` 





#### `protected virtual void onMessage()` 





#### `protected virtual void onClose()` 





#### `protected `[`Server`](#classscy_1_1http_1_1Server)` & server()` 





#### `protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` 





#### `protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` 





# class `scy::http::ServerResponder` 




The abstract base class for HTTP ServerResponders created by HTTP [Server](#classscy_1_1http_1_1Server).

Derived classes must override the handleRequest() method.

A new HTTPServerResponder object will be created for each new HTTP request that is received by the HTTP [Server](#classscy_1_1http_1_1Server).

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  ServerResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` | 
`public inline virtual  ~ServerResponder()` | 
`public inline virtual void onHeaders(`[`Request`](#classscy_1_1http_1_1Request)` &)` | 
`public inline virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` &)` | 
`public inline virtual void onRequest(`[`Request`](#classscy_1_1http_1_1Request)` &,`[`Response`](#classscy_1_1http_1_1Response)` &)` | 
`public inline virtual void onClose()` | 
`public inline `[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection()` | 
`public inline `[`Request`](#classscy_1_1http_1_1Request)` & request()` | 
`public inline `[`Response`](#classscy_1_1http_1_1Response)` & response()` | 
`protected `[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & _connection` | 

## Members

#### `public inline  ServerResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` 





#### `public inline virtual  ~ServerResponder()` 





#### `public inline virtual void onHeaders(`[`Request`](#classscy_1_1http_1_1Request)` &)` 





#### `public inline virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` &)` 





#### `public inline virtual void onRequest(`[`Request`](#classscy_1_1http_1_1Request)` &,`[`Response`](#classscy_1_1http_1_1Response)` &)` 





#### `public inline virtual void onClose()` 





#### `public inline `[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection()` 





#### `public inline `[`Request`](#classscy_1_1http_1_1Request)` & request()` 





#### `public inline `[`Response`](#classscy_1_1http_1_1Response)` & response()` 





#### `protected `[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & _connection` 





# class `scy::http::ServerResponderFactory` 




This implementation of a [ServerResponderFactory](#classscy_1_1http_1_1ServerResponderFactory) is used by HTTPServer to create [ServerResponder](#classscy_1_1http_1_1ServerResponder) objects.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  ServerResponderFactory()` | 
`public inline virtual  ~ServerResponderFactory()` | 
`public `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * createResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` | 

## Members

#### `public inline  ServerResponderFactory()` 





#### `public inline virtual  ~ServerResponderFactory()` 





#### `public `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * createResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` 



Factory method for instantiating the [ServerResponder](#classscy_1_1http_1_1ServerResponder) instance using the given [ServerConnection](#classscy_1_1http_1_1ServerConnection).

# class `scy::http::StringPart` 

```
class scy::http::StringPart
  : public scy::http::FormPart
```  

An implementation of [StringPart](#classscy_1_1http_1_1StringPart) for plain files.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  StringPart(const std::string & path)` | Creates the [StringPart](#classscy_1_1http_1_1StringPart) for the given string.
`public  StringPart(const std::string & data,const std::string & contentType)` | Creates the [StringPart](#classscy_1_1http_1_1StringPart) for the given string and MIME type.
`public virtual  ~StringPart()` | Destroys the [StringPart](#classscy_1_1http_1_1StringPart).
`public virtual bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | 
`public virtual void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | Writes the form data to the given HTTP client connection.
`public virtual void write(std::ostream & ostr)` | Writes the form data to the given output stream.
`public virtual std::uint64_t length() const` | Returns the length of the current part.
`protected std::string _data` | 

## Members

#### `public  StringPart(const std::string & path)` 

Creates the [StringPart](#classscy_1_1http_1_1StringPart) for the given string.



#### `public  StringPart(const std::string & data,const std::string & contentType)` 

Creates the [StringPart](#classscy_1_1http_1_1StringPart) for the given string and MIME type.



#### `public virtual  ~StringPart()` 

Destroys the [StringPart](#classscy_1_1http_1_1StringPart).



#### `public virtual bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 



Writes a form data chunk to the given HTTP client connection. Returns true if there is more data to be written.

#### `public virtual void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 

Writes the form data to the given HTTP client connection.



#### `public virtual void write(std::ostream & ostr)` 

Writes the form data to the given output stream.



#### `public virtual std::uint64_t length() const` 

Returns the length of the current part.



#### `protected std::string _data` 





# class `scy::http::URL` 




An RFC 3986 based [URL](#classscy_1_1http_1_1URL) which uses an external c library to do the heavy lifting. Constructors and assignment operators will throw a SyntaxException if the [URL](#classscy_1_1http_1_1URL) is invalid.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  URL()` | 
`public  URL(const char * url)` | 
`public  URL(const std::string & url)` | 
`public  URL(const std::string & scheme,const std::string & authority)` | 
`public  URL(const std::string & scheme,const std::string & authority,const std::string & pathEtc)` | 
`public  URL(const std::string & scheme,const std::string & authority,const std::string & path,const std::string & query,const std::string & fragment)` | 
`public  ~URL()` | 
`public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const `[`URL`](#classscy_1_1http_1_1URL)` & uri)` | 
`public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const std::string & uri)` | 
`public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const char * uri)` | 
`public bool parse(const std::string & url,bool whiny)` | 
`public std::string scheme() const` | 
`public std::string userInfo() const` | 
`public std::string host() const` | 
`public std::uint16_t port() const` | 
`public std::string authority() const` | 
`public std::string path() const` | 
`public std::string pathEtc() const` | 
`public std::string query() const` | 
`public std::string fragment() const` | 
`public bool hasSchema() const` | 
`public bool hasUserInfo() const` | 
`public bool hasHost() const` | 
`public bool hasPort() const` | 
`public bool hasPath() const` | 
`public bool hasQuery() const` | 
`public bool hasFragment() const` | 
`public bool valid() const` | 
`public std::string str() const` | 
`protected http_parser_url _parser` | 
`protected std::string _buf` | 

## Members

#### `public  URL()` 





#### `public  URL(const char * url)` 





#### `public  URL(const std::string & url)` 





#### `public  URL(const std::string & scheme,const std::string & authority)` 





#### `public  URL(const std::string & scheme,const std::string & authority,const std::string & pathEtc)` 





#### `public  URL(const std::string & scheme,const std::string & authority,const std::string & path,const std::string & query,const std::string & fragment)` 





#### `public  ~URL()` 





#### `public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const `[`URL`](#classscy_1_1http_1_1URL)` & uri)` 





#### `public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const std::string & uri)` 





#### `public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const char * uri)` 





#### `public bool parse(const std::string & url,bool whiny)` 



Parses and assigns an URI from the given std::string. Throws a SyntaxException if whiny is set and the given url is invalid.

#### `public std::string scheme() const` 





#### `public std::string userInfo() const` 





#### `public std::string host() const` 





#### `public std::uint16_t port() const` 





#### `public std::string authority() const` 





#### `public std::string path() const` 





#### `public std::string pathEtc() const` 





#### `public std::string query() const` 





#### `public std::string fragment() const` 





#### `public bool hasSchema() const` 





#### `public bool hasUserInfo() const` 





#### `public bool hasHost() const` 





#### `public bool hasPort() const` 





#### `public bool hasPath() const` 





#### `public bool hasQuery() const` 





#### `public bool hasFragment() const` 





#### `public bool valid() const` 





#### `public std::string str() const` 





#### `protected http_parser_url _parser` 





#### `protected std::string _buf` 





# struct `scy::http::Method` 


HTTP request methods.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

## Members

# struct `scy::http::ParserError` 






## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public http_errno code` | 
`public std::string message` | 

## Members

#### `public http_errno code` 





#### `public std::string message` 





# namespace `scy::http::ws`



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[``scy::http::ws::ConnectionAdapter``](#classscy_1_1http_1_1ws_1_1ConnectionAdapter)    | [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) class which belongs to a HTTP [Connection](#classscy_1_1http_1_1Connection).
`class `[``scy::http::ws::WebSocket``](#classscy_1_1http_1_1ws_1_1WebSocket)    | Standalone [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) class.
`class `[``scy::http::ws::WebSocketAdapter``](#classscy_1_1http_1_1ws_1_1WebSocketAdapter)    | 
`class `[``scy::http::ws::WebSocketFramer``](#classscy_1_1http_1_1ws_1_1WebSocketFramer)    | 
# class `scy::http::ws::ConnectionAdapter` 

```
class scy::http::ws::ConnectionAdapter
  : public scy::http::ws::WebSocketAdapter
```  

[WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) class which belongs to a HTTP [Connection](#classscy_1_1http_1_1Connection).



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  ConnectionAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` & connection,`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode)` | 
`public virtual  ~ConnectionAdapter()` | 
`public virtual void onHandshakeComplete()` | virtual int sendHeader();
`protected `[`Connection`](#classscy_1_1http_1_1Connection)` & _connection` | 

## Members

#### `public  ConnectionAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` & connection,`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode)` 





#### `public virtual  ~ConnectionAdapter()` 





#### `public virtual void onHandshakeComplete()` 

virtual int sendHeader();



#### `protected `[`Connection`](#classscy_1_1http_1_1Connection)` & _connection` 





# class `scy::http::ws::WebSocket` 

```
class scy::http::ws::WebSocket
  : public scy::http::ws::WebSocketAdapter
```  

Standalone [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) class.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  WebSocket(const net::Socket::Ptr & socket)` | 
`public virtual  ~WebSocket()` | 
`public `[`http::Request`](#classscy_1_1http_1_1Request)` & request()` | 
`public `[`http::Response`](#classscy_1_1http_1_1Response)` & response()` | 
`protected `[`http::Request`](#classscy_1_1http_1_1Request)` _request` | 
`protected `[`http::Response`](#classscy_1_1http_1_1Response)` _response` | 

## Members

#### `public  WebSocket(const net::Socket::Ptr & socket)` 



Creates the [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) with the given Socket. The Socket should be a TCPSocket or a SSLSocket, depending on the protocol used (ws or wss).

#### `public virtual  ~WebSocket()` 





#### `public `[`http::Request`](#classscy_1_1http_1_1Request)` & request()` 





#### `public `[`http::Response`](#classscy_1_1http_1_1Response)` & response()` 





#### `protected `[`http::Request`](#classscy_1_1http_1_1Request)` _request` 





#### `protected `[`http::Response`](#classscy_1_1http_1_1Response)` _response` 





# class `scy::http::ws::WebSocketAdapter` 

```
class scy::http::ws::WebSocketAdapter
  : public scy::net::SocketAdapter
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public net::Socket::Ptr socket` | 
`public  WebSocketAdapter(const net::Socket::Ptr & socket,`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode,`[`http::Request`](#classscy_1_1http_1_1Request)` & request,`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | 
`public virtual int send(const char * data,std::size_t len,int flags)` | 
`public virtual int send(const char * data,std::size_t len,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr,int flags)` | 
`public virtual bool shutdown(std::uint16_t statusCode,const std::string & statusMessage)` | 
`public virtual void sendClientRequest()` | 
`public virtual void handleClientResponse(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr)` | 
`public virtual void handleServerRequest(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr)` | 
`public virtual void onSocketConnect()` | 
`public virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` | 
`public virtual void onSocketClose()` | 
`public virtual void onHandshakeComplete()` | 
`protected `[`WebSocketFramer`](#classscy_1_1http_1_1ws_1_1WebSocketFramer)` framer` | 
`protected `[`http::Request`](#classscy_1_1http_1_1Request)` & _request` | 
`protected `[`http::Response`](#classscy_1_1http_1_1Response)` & _response` | 
`protected virtual  ~WebSocketAdapter()` | 

## Members

#### `public net::Socket::Ptr socket` 



Pointer to the underlying socket. Sent data will be proxied to this socket.

#### `public  WebSocketAdapter(const net::Socket::Ptr & socket,`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode,`[`http::Request`](#classscy_1_1http_1_1Request)` & request,`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 





#### `public virtual int send(const char * data,std::size_t len,int flags)` 



Sends the given data buffer to the connected peer. Returns the number of bytes sent or -1 on error. No exception will be thrown. For TCP sockets the given peer address must match the connected peer address.

#### `public virtual int send(const char * data,std::size_t len,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr,int flags)` 





#### `public virtual bool shutdown(std::uint16_t statusCode,const std::string & statusMessage)` 





#### `public virtual void sendClientRequest()` 





#### `public virtual void handleClientResponse(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr)` 





#### `public virtual void handleServerRequest(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr)` 





#### `public virtual void onSocketConnect()` 



These virtual methods can be overridden as necessary to intercept socket events before they hit the application.

#### `public virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` 





#### `public virtual void onSocketClose()` 





#### `public virtual void onHandshakeComplete()` 





#### `protected `[`WebSocketFramer`](#classscy_1_1http_1_1ws_1_1WebSocketFramer)` framer` 





#### `protected `[`http::Request`](#classscy_1_1http_1_1Request)` & _request` 





#### `protected `[`http::Response`](#classscy_1_1http_1_1Response)` & _response` 





#### `protected virtual  ~WebSocketAdapter()` 





# class `scy::http::ws::WebSocketFramer` 




This class implements a [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) parser according to the [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) protocol described in RFC 6455.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  WebSocketFramer(`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode)` | Creates a Socket using the given Socket.
`public virtual  ~WebSocketFramer()` | 
`public virtual std::size_t writeFrame(const char * data,std::size_t len,int flags,`[`BitWriter`](#classscy_1_1BitWriter)` & frame)` | Writes a [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) protocol frame from the given data.
`public virtual std::uint64_t readFrame(`[`BitReader`](#classscy_1_1BitReader)` & frame,char *& payload)` | 
`public bool handshakeComplete() const` | 
`public void acceptServerRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | 
`public void createClientHandshakeRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` | Appends the WS hanshake HTTP request hearers.
`public bool checkClientHandshakeResponse(`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | 
`public void completeClientHandshake(`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | Verifies the handshake response or thrown and exception.
`protected int frameFlags() const` | 
`protected bool mustMaskPayload() const` | 
`protected `[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode() const` | 

## Members

#### `public  WebSocketFramer(`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode)` 

Creates a Socket using the given Socket.



#### `public virtual  ~WebSocketFramer()` 





#### `public virtual std::size_t writeFrame(const char * data,std::size_t len,int flags,`[`BitWriter`](#classscy_1_1BitWriter)` & frame)` 

Writes a [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) protocol frame from the given data.



#### `public virtual std::uint64_t readFrame(`[`BitReader`](#classscy_1_1BitReader)` & frame,char *& payload)` 



Reads a single [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) frame from the given buffer (frame).

The actual payload length is returned, and the beginning of the payload buffer will be assigned in the second (payload) argument. No data is copied.

If the frame is invalid or too big an exception will be thrown. Return true when the handshake has completed successfully.

#### `public bool handshakeComplete() const` 





#### `public void acceptServerRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 





#### `public void createClientHandshakeRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` 

Appends the WS hanshake HTTP request hearers.

[Client](#classscy_1_1http_1_1Client) side Sends the initial WS handshake HTTP request. void sendHandshakeRequest();

#### `public bool checkClientHandshakeResponse(`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 



Checks the veracity the HTTP handshake response. Returns true on success, false if the request should be resent (in case of authentication), or throws on error.

#### `public void completeClientHandshake(`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 

Verifies the handshake response or thrown and exception.



#### `protected int frameFlags() const` 



Returns the frame flags of the most recently received frame. Set by [readFrame()](#group__http_1ga60fc4167796de84fb0718cef38a8cd45)

#### `protected bool mustMaskPayload() const` 



Returns true if the payload must be masked. Used by [writeFrame()](#group__http_1ga33423fa89193d26b9d18d08ec62906a4)

#### `protected `[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode() const` 





# class `scy::http::Authenticator` 




This is a utility class for working with HTTP authentication (basic or digest) in [http::Request](http::Request) objects.

Note: Do not forget to read the entire response stream from the 401 response before sending the authenticated request, otherwise there may be problems if a persistent connection is used.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  Authenticator()` | Creates an empty [Authenticator](#classscy_1_1http_1_1Authenticator) object.
`public  Authenticator(const std::string & username,const std::string & password)` | Creates an [Authenticator](#classscy_1_1http_1_1Authenticator) object with the given username and password.
`public  ~Authenticator()` | Destroys the [Authenticator](#classscy_1_1http_1_1Authenticator).
`public void fromUserInfo(const std::string & userInfo)` | 
`public void fromURI(const `[`http::URL`](#classscy_1_1http_1_1URL)` & uri)` | 
`public inline void setUsername(const std::string & username)` | Sets the username.
`public inline const std::string & username() const` | Returns the username.
`public inline void setPassword(const std::string & password)` | Sets the password.
`public inline const std::string & password() const` | Returns the password.
`public void authenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,const `[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | 
`public void updateAuthInfo(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` | 
`public void proxyAuthenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,const `[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | 
`public void updateProxyAuthInfo(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` | 

## Members

#### `public  Authenticator()` 

Creates an empty [Authenticator](#classscy_1_1http_1_1Authenticator) object.



#### `public  Authenticator(const std::string & username,const std::string & password)` 

Creates an [Authenticator](#classscy_1_1http_1_1Authenticator) object with the given username and password.



#### `public  ~Authenticator()` 

Destroys the [Authenticator](#classscy_1_1http_1_1Authenticator).



#### `public void fromUserInfo(const std::string & userInfo)` 



Parses username:password std::string and sets username and password of the credentials object. Throws SyntaxException on invalid user information.

#### `public void fromURI(const `[`http::URL`](#classscy_1_1http_1_1URL)` & uri)` 



Extracts username and password from the given URI and sets username and password of the credentials object. Does nothing if URI has no user info part.

#### `public inline void setUsername(const std::string & username)` 

Sets the username.



#### `public inline const std::string & username() const` 

Returns the username.



#### `public inline void setPassword(const std::string & password)` 

Sets the password.



#### `public inline const std::string & password() const` 

Returns the password.



#### `public void authenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,const `[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 



Inspects WWW-Authenticate header of the response, initializes the internal state (in case of digest authentication) and adds required information to the given [http::Request](http::Request).

Does nothing if there is no WWW-Authenticate header in the [http::Response](http::Response).

#### `public void updateAuthInfo(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` 



Updates internal state (in case of digest authentication) and replaces authentication information in the request accordingly.

#### `public void proxyAuthenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,const `[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 



Inspects Proxy-Authenticate header of the response, initializes the internal state (in case of digest authentication) and adds required information to the given [http::Request](http::Request).

Does nothing if there is no Proxy-Authenticate header in the [http::Response](http::Response).

#### `public void updateProxyAuthInfo(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` 



Updates internal state (in case of digest authentication) and replaces proxy authentication information in the request accordingly.

# class `scy::http::BasicAuthenticator` 




This is a utility class for working with HTTP Basic Authentication in [http::Request](http::Request) objects.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  BasicAuthenticator()` | Creates an empty [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object.
`public  BasicAuthenticator(const std::string & username,const std::string & password)` | Creates a [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object with the given username and password.
`public  explicit BasicAuthenticator(const `[`http::Request`](#classscy_1_1http_1_1Request)` & request)` | 
`public  explicit BasicAuthenticator(const std::string & authInfo)` | 
`public  ~BasicAuthenticator()` | Destroys the [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator).
`public void setUsername(const std::string & username)` | Sets the username.
`public const std::string & username() const` | Returns the username.
`public void setPassword(const std::string & password)` | Sets the password.
`public const std::string & password() const` | Returns the password.
`public void authenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request) const` | Adds authentication information to the given [http::Request](http::Request).
`public void proxyAuthenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request) const` | Adds proxy authentication information to the given [http::Request](http::Request).
`protected void parseAuthInfo(const std::string & authInfo)` | 

## Members

#### `public  BasicAuthenticator()` 

Creates an empty [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object.



#### `public  BasicAuthenticator(const std::string & username,const std::string & password)` 

Creates a [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object with the given username and password.



#### `public  explicit BasicAuthenticator(const `[`http::Request`](#classscy_1_1http_1_1Request)` & request)` 



Creates a [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object with the authentication information from the given request.

Throws a NotAuthenticatedException if the request does not contain basic authentication information.

#### `public  explicit BasicAuthenticator(const std::string & authInfo)` 



Creates a [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator) object with the authentication information in the given std::string. The authentication information can be extracted from a [http::Request](http::Request) object by calling [http::Request::getCredentials()](http::Request::getCredentials()).

#### `public  ~BasicAuthenticator()` 

Destroys the [BasicAuthenticator](#classscy_1_1http_1_1BasicAuthenticator).



#### `public void setUsername(const std::string & username)` 

Sets the username.



#### `public const std::string & username() const` 

Returns the username.



#### `public void setPassword(const std::string & password)` 

Sets the password.



#### `public const std::string & password() const` 

Returns the password.



#### `public void authenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request) const` 

Adds authentication information to the given [http::Request](http::Request).



#### `public void proxyAuthenticate(`[`http::Request`](#classscy_1_1http_1_1Request)` & request) const` 

Adds proxy authentication information to the given [http::Request](http::Request).



#### `protected void parseAuthInfo(const std::string & authInfo)` 



Extracts username and password from Basic authentication info by base64-decoding authInfo and splitting the resulting std::string at the ':' delimiter.

# class `scy::http::ClientConnection` 

```
class scy::http::ClientConnection
  : public scy::http::Connection
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void * opaque` | Optional unmanaged client data pointer.
`public `[`NullSignal`](#classscy_1_1NullSignal)` Connect` | [Signal](#classscy_1_1Signal) when the client socket is connected and data can flow.
`public `[`Signal](#classscy_1_1Signal)< [Response`](#classscy_1_1http_1_1Response)` & > Headers` | [Signal](#classscy_1_1Signal) when the response HTTP header has been received.
`public `[`Signal](#classscy_1_1Signal)< const [MutableBuffer`](#classscy_1_1MutableBuffer)` & > Payload` | [Signal](#classscy_1_1Signal) when raw data is received.
`public `[`Signal](#classscy_1_1Signal)< const [Response`](#classscy_1_1http_1_1Response)` & > Complete` | [Signal](#classscy_1_1Signal) when the HTTP transaction is complete.
`public  ClientConnection(const `[`URL`](#classscy_1_1http_1_1URL)` & url,const net::Socket::Ptr & socket)` | Create a standalone connection with the given host.
`public virtual  ~ClientConnection()` | 
`public virtual void send()` | 
`public virtual void send(`[`http::Request`](#classscy_1_1http_1_1Request)` & req)` | 
`public virtual int send(const char * data,std::size_t len,int flags)` | Send raw data to the peer.
`public virtual void close()` | Forcefully closes the HTTP connection.
`public virtual void setReadStream(std::ostream * os)` | 
`public template<class StreamT>`  <br/>`inline StreamT & readStream()` | Return the cast read stream pointer or nullptr.
`public virtual void onHeaders()` | 
`public virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer)` | 
`public virtual void onMessage()` | 
`public virtual void onComplete()` | 
`public virtual void onClose()` | 
`protected `[`URL`](#classscy_1_1http_1_1URL)` _url` | 
`protected std::vector< std::string > _outgoingBuffer` | 
`protected bool _connect` | 
`protected bool _active` | 
`protected bool _complete` | 
`protected virtual void connect()` | 
`protected `[`http::Client`](#classscy_1_1http_1_1Client)` * client()` | 
`protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` | 
`protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` | 
`protected virtual void onSocketConnect()` | 
`protected void onHostResolved(void *,const `[`net::DNSResult`](#structscy_1_1net_1_1DNSResult)` & result)` | 

## Members

#### `public void * opaque` 

Optional unmanaged client data pointer.



#### `public `[`NullSignal`](#classscy_1_1NullSignal)` Connect` 

[Signal](#classscy_1_1Signal) when the client socket is connected and data can flow.



#### `public `[`Signal](#classscy_1_1Signal)< [Response`](#classscy_1_1http_1_1Response)` & > Headers` 

[Signal](#classscy_1_1Signal) when the response HTTP header has been received.



#### `public `[`Signal](#classscy_1_1Signal)< const [MutableBuffer`](#classscy_1_1MutableBuffer)` & > Payload` 

[Signal](#classscy_1_1Signal) when raw data is received.



#### `public `[`Signal](#classscy_1_1Signal)< const [Response`](#classscy_1_1http_1_1Response)` & > Complete` 

[Signal](#classscy_1_1Signal) when the HTTP transaction is complete.



#### `public  ClientConnection(const `[`URL`](#classscy_1_1http_1_1URL)` & url,const net::Socket::Ptr & socket)` 

Create a standalone connection with the given host.



#### `public virtual  ~ClientConnection()` 





#### `public virtual void send()` 



Send the HTTP request.

Calls [connect()](#group__http_1ga3fe2e8385f1720882a418cbd6aa59766) internally if the socket is not already connecting or connected. The actual request will be sent when the socket is connected.

#### `public virtual void send(`[`http::Request`](#classscy_1_1http_1_1Request)` & req)` 



Send the given HTTP request. The given request will overwrite the internal HTTP request object.

Calls [connect()](#group__http_1ga3fe2e8385f1720882a418cbd6aa59766) internally if the socket is not already connecting or connected. The actual request will be sent when the socket is connected.

#### `public virtual int send(const char * data,std::size_t len,int flags)` 

Send raw data to the peer.



#### `public virtual void close()` 

Forcefully closes the HTTP connection.



#### `public virtual void setReadStream(std::ostream * os)` 



Set the output stream for writing response data to. The stream pointer is managed internally, and will be freed along with the connection.

#### `public template<class StreamT>`  <br/>`inline StreamT & readStream()` 

Return the cast read stream pointer or nullptr.



#### `public virtual void onHeaders()` 



Return true if the server did not give us a proper response within the allotted time. bool expired() const;

#### `public virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer)` 





#### `public virtual void onMessage()` 





#### `public virtual void onComplete()` 





#### `public virtual void onClose()` 





#### `protected `[`URL`](#classscy_1_1http_1_1URL)` _url` 





#### `protected std::vector< std::string > _outgoingBuffer` 





#### `protected bool _connect` 





#### `protected bool _active` 





#### `protected bool _complete` 





#### `protected virtual void connect()` 



Connects to the server endpoint. All sent data is buffered until the connection is made.

#### `protected `[`http::Client`](#classscy_1_1http_1_1Client)` * client()` 





#### `protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` 





#### `protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` 





#### `protected virtual void onSocketConnect()` 



These virtual methods can be overridden as necessary to intercept socket events before they hit the application.

#### `protected void onHostResolved(void *,const `[`net::DNSResult`](#structscy_1_1net_1_1DNSResult)` & result)` 





# class `scy::http::ClientAdapter` 

```
class scy::http::ClientAdapter
  : public scy::http::ConnectionAdapter
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  ClientAdapter(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & connection)` | 

## Members

#### `public inline  ClientAdapter(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & connection)` 





# class `scy::http::Client` 






## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`NullSignal`](#classscy_1_1NullSignal)` Shutdown` | 
`public  Client()` | 
`public virtual  ~Client()` | 
`public void shutdown()` | Shutdown the [Client](#classscy_1_1http_1_1Client) and close all connections.
`public template<class ConnectionT>`  <br/>`inline ClientConnection::Ptr createConnectionT(const `[`URL`](#classscy_1_1http_1_1URL)` & url,uv::Loop * loop)` | 
`public inline ClientConnection::Ptr createConnection(const `[`URL`](#classscy_1_1http_1_1URL)` & url,uv::Loop * loop)` | 
`public virtual void addConnection(ClientConnection::Ptr conn)` | 
`public virtual void removeConnection(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` * conn)` | 
`protected ClientConnectionPtrVec _connections` | 
`protected void onConnectionClose(void *)` | 

## Members

#### `public `[`NullSignal`](#classscy_1_1NullSignal)` Shutdown` 





#### `public  Client()` 





#### `public virtual  ~Client()` 





#### `public void shutdown()` 

Shutdown the [Client](#classscy_1_1http_1_1Client) and close all connections.



#### `public template<class ConnectionT>`  <br/>`inline ClientConnection::Ptr createConnectionT(const `[`URL`](#classscy_1_1http_1_1URL)` & url,uv::Loop * loop)` 





#### `public inline ClientConnection::Ptr createConnection(const `[`URL`](#classscy_1_1http_1_1URL)` & url,uv::Loop * loop)` 





#### `public virtual void addConnection(ClientConnection::Ptr conn)` 





#### `public virtual void removeConnection(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` * conn)` 





#### `protected ClientConnectionPtrVec _connections` 





#### `protected void onConnectionClose(void *)` 





# class `scy::http::ProgressSignal` 

```
class scy::http::ProgressSignal
  : public scy::Signal< const double &>
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void * sender` | 
`public std::uint64_t current` | 
`public std::uint64_t total` | 
`public inline  ProgressSignal()` | 
`public inline double progress() const` | 
`public inline void update(int nread)` | 

## Members

#### `public void * sender` 





#### `public std::uint64_t current` 





#### `public std::uint64_t total` 





#### `public inline  ProgressSignal()` 





#### `public inline double progress() const` 





#### `public inline void update(int nread)` 





# class `scy::http::Connection` 

```
class scy::http::Connection
  : public scy::net::SocketAdapter
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`PacketStream`](#classscy_1_1PacketStream)` Outgoing` | 
`public `[`PacketStream`](#classscy_1_1PacketStream)` Incoming` | 
`public `[`ProgressSignal`](#classscy_1_1http_1_1ProgressSignal)` IncomingProgress` | Fired on download progress.
`public `[`ProgressSignal`](#classscy_1_1http_1_1ProgressSignal)` OutgoingProgress` | Fired on upload progress.
`public  Connection(const net::Socket::Ptr & socket)` | 
`public virtual  ~Connection()` | 
`public virtual int send(const char * data,std::size_t len,int flags)` | Send raw data to the peer.
`public virtual int sendHeader()` | Send the outdoing HTTP header.
`public virtual void close()` | 
`public bool closed() const` | Return true if the connection is closed.
`public `[`scy::Error`](#structscy_1_1Error)` error() const` | Return the error object if any.
`public void onHeaders()` | 
`public inline virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` &)` | 
`public void onMessage()` | 
`public virtual void onClose()` | 
`public bool shouldSendHeader() const` | 
`public void shouldSendHeader(bool flag)` | Set true to prevent auto-sending HTTP headers.
`public void replaceAdapter(`[`net::SocketAdapter`](#classscy_1_1net_1_1SocketAdapter)` * adapter)` | 
`public net::Socket::Ptr & socket()` | Return the underlying socket pointer.
`public `[`Request`](#classscy_1_1http_1_1Request)` & request()` | The HTTP request headers.
`public `[`Response`](#classscy_1_1http_1_1Response)` & response()` | The HTTP response headers.
`public `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` | 
`public `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` | 
`protected net::Socket::Ptr _socket` | 
`protected `[`SocketAdapter`](#group__net_1gaf9ced47f3c1aa08ccea3042997a2a320)` * _adapter` | 
`protected `[`Request`](#classscy_1_1http_1_1Request)` _request` | 
`protected `[`Response`](#classscy_1_1http_1_1Response)` _response` | 
`protected `[`scy::Error`](#structscy_1_1Error)` _error` | 
`protected bool _closed` | 
`protected bool _shouldSendHeader` | 
`protected virtual void onSocketConnect()` | 
`protected virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` | 
`protected virtual void onSocketError(const `[`scy::Error`](#structscy_1_1Error)` & error)` | 
`protected virtual void onSocketClose()` | 
`protected virtual void setError(const `[`scy::Error`](#structscy_1_1Error)` & err)` | Set the internal error.

## Members

#### `public `[`PacketStream`](#classscy_1_1PacketStream)` Outgoing` 



The Outgoing stream is responsible for packetizing raw application data into the agreed upon HTTP format and sending it to the peer.

#### `public `[`PacketStream`](#classscy_1_1PacketStream)` Incoming` 



The Incoming stream emits incoming HTTP packets for processing by the application.

This is useful for example when writing incoming data to a file.

#### `public `[`ProgressSignal`](#classscy_1_1http_1_1ProgressSignal)` IncomingProgress` 

Fired on download progress.



#### `public `[`ProgressSignal`](#classscy_1_1http_1_1ProgressSignal)` OutgoingProgress` 

Fired on upload progress.



#### `public  Connection(const net::Socket::Ptr & socket)` 





#### `public virtual  ~Connection()` 





#### `public virtual int send(const char * data,std::size_t len,int flags)` 

Send raw data to the peer.



#### `public virtual int sendHeader()` 

Send the outdoing HTTP header.



#### `public virtual void close()` 



Close the connection and schedule the object for deferred deletion.

#### `public bool closed() const` 

Return true if the connection is closed.



#### `public `[`scy::Error`](#structscy_1_1Error)` error() const` 

Return the error object if any.



#### `public void onHeaders()` 



Return true if the server did not give us a proper response within the allotted time. bool expired() const;

#### `public inline virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` &)` 





#### `public void onMessage()` 





#### `public virtual void onClose()` 





#### `public bool shouldSendHeader() const` 





#### `public void shouldSendHeader(bool flag)` 

Set true to prevent auto-sending HTTP headers.



#### `public void replaceAdapter(`[`net::SocketAdapter`](#classscy_1_1net_1_1SocketAdapter)` * adapter)` 



Assign the new [ConnectionAdapter](#classscy_1_1http_1_1ConnectionAdapter) and setup the chain The flow is: [Connection](#classscy_1_1http_1_1Connection) <-> [ConnectionAdapter](#classscy_1_1http_1_1ConnectionAdapter) <-> Socket

#### `public net::Socket::Ptr & socket()` 

Return the underlying socket pointer.



#### `public `[`Request`](#classscy_1_1http_1_1Request)` & request()` 

The HTTP request headers.



#### `public `[`Response`](#classscy_1_1http_1_1Response)` & response()` 

The HTTP response headers.



#### `public `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` 





#### `public `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` 





#### `protected net::Socket::Ptr _socket` 





#### `protected `[`SocketAdapter`](#group__net_1gaf9ced47f3c1aa08ccea3042997a2a320)` * _adapter` 





#### `protected `[`Request`](#classscy_1_1http_1_1Request)` _request` 





#### `protected `[`Response`](#classscy_1_1http_1_1Response)` _response` 





#### `protected `[`scy::Error`](#structscy_1_1Error)` _error` 





#### `protected bool _closed` 





#### `protected bool _shouldSendHeader` 





#### `protected virtual void onSocketConnect()` 



These virtual methods can be overridden as necessary to intercept socket events before they hit the application.

#### `protected virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` 





#### `protected virtual void onSocketError(const `[`scy::Error`](#structscy_1_1Error)` & error)` 





#### `protected virtual void onSocketClose()` 





#### `protected virtual void setError(const `[`scy::Error`](#structscy_1_1Error)` & err)` 

Set the internal error.



# class `scy::http::ConnectionAdapter` 

```
class scy::http::ConnectionAdapter
  : public scy::http::ParserObserver
  : public scy::net::SocketAdapter
```  

Default HTTP socket adapter for reading and writing HTTP messages.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  ConnectionAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` & connection,http_parser_type type)` | 
`public virtual  ~ConnectionAdapter()` | 
`public virtual int send(const char * data,std::size_t len,int flags)` | 
`public `[`Parser`](#classscy_1_1http_1_1Parser)` & parser()` | 
`public `[`Connection`](#classscy_1_1http_1_1Connection)` & connection()` | 
`protected `[`Connection`](#classscy_1_1http_1_1Connection)` & _connection` | 
`protected `[`Parser`](#classscy_1_1http_1_1Parser)` _parser` | 
`protected virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` | 
`protected virtual void onParserHeader(const std::string & name,const std::string & value)` | 
`protected virtual void onParserHeadersEnd()` | 
`protected virtual void onParserChunk(const char * buf,std::size_t len)` | 
`protected virtual void onParserError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` | 
`protected virtual void onParserEnd()` | 

## Members

#### `public  ConnectionAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` & connection,http_parser_type type)` 





#### `public virtual  ~ConnectionAdapter()` 





#### `public virtual int send(const char * data,std::size_t len,int flags)` 



Sends the given data buffer to the connected peer. Returns the number of bytes sent or -1 on error. No exception will be thrown. For TCP sockets the given peer address must match the connected peer address.

#### `public `[`Parser`](#classscy_1_1http_1_1Parser)` & parser()` 





#### `public `[`Connection`](#classscy_1_1http_1_1Connection)` & connection()` 





#### `protected `[`Connection`](#classscy_1_1http_1_1Connection)` & _connection` 





#### `protected `[`Parser`](#classscy_1_1http_1_1Parser)` _parser` 





#### `protected virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` 





#### `protected virtual void onParserHeader(const std::string & name,const std::string & value)` 





#### `protected virtual void onParserHeadersEnd()` 





#### `protected virtual void onParserChunk(const char * buf,std::size_t len)` 





#### `protected virtual void onParserError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` 





#### `protected virtual void onParserEnd()` 





# class `scy::http::Cookie` 




This class represents a HTTP [Cookie](#classscy_1_1http_1_1Cookie).

A cookie is a small amount of information sent by a Web server to a Web browser, saved by the browser, and later sent back to the server. A cookie's value can uniquely identify a client, so cookies are commonly used for session management.

A cookie has a name, a single value, and optional attributes such as a comment, path and domain qualifiers, a maximum age, and a version number.

This class supports both the Version 0 (by Netscape) and Version 1 (by RFC 2109) cookie specifications. By default, cookies are created using Version 0 to ensure the best interoperability.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  Cookie()` | Creates an empty [Cookie](#classscy_1_1http_1_1Cookie).
`public  explicit Cookie(const std::string & name)` | 
`public  explicit Cookie(const `[`NVCollection`](#classscy_1_1NVCollection)` & nvc)` | Creates a cookie from the given [NVCollection](#classscy_1_1NVCollection).
`public  Cookie(const std::string & name,const std::string & value)` | 
`public  Cookie(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` | Creates the [Cookie](#classscy_1_1http_1_1Cookie) by copying another one.
`public  ~Cookie()` | Destroys the [Cookie](#classscy_1_1http_1_1Cookie).
`public `[`Cookie`](#classscy_1_1http_1_1Cookie)` & operator=(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` | Assigns a cookie.
`public void setVersion(int version)` | 
`public inline int getVersion() const` | 
`public void setName(const std::string & name)` | Sets the name of the cookie.
`public inline const std::string & getName() const` | Returns the name of the cookie.
`public void setValue(const std::string & value)` | 
`public inline const std::string & getValue() const` | Returns the value of the cookie.
`public void setComment(const std::string & comment)` | 
`public inline const std::string & getComment() const` | Returns the comment for the cookie.
`public void setDomain(const std::string & domain)` | Sets the domain for the cookie.
`public inline const std::string & getDomain() const` | Returns the domain for the cookie.
`public void setPath(const std::string & path)` | Sets the path for the cookie.
`public inline const std::string & getPath() const` | Returns the path for the cookie.
`public void setSecure(bool secure)` | 
`public inline bool getSecure() const` | 
`public void setMaxAge(int maxAge)` | 
`public inline int getMaxAge() const` | 
`public void setHttpOnly(bool flag)` | Sets the HttpOnly flag for the cookie.
`public inline bool getHttpOnly() const` | Returns true if the cookie's HttpOnly flag is set.
`public std::string toString() const` | 

## Members

#### `public  Cookie()` 

Creates an empty [Cookie](#classscy_1_1http_1_1Cookie).



#### `public  explicit Cookie(const std::string & name)` 



Creates a cookie with the given name. The cookie never expires.

#### `public  explicit Cookie(const `[`NVCollection`](#classscy_1_1NVCollection)` & nvc)` 

Creates a cookie from the given [NVCollection](#classscy_1_1NVCollection).



#### `public  Cookie(const std::string & name,const std::string & value)` 



Creates a cookie with the given name and value. The cookie never expires.

Note: If value contains whitespace or non-alphanumeric characters, the value should be escaped by calling [escape()](#group__http_1ga5dc9fb3d11c40a91b69c562135a4a5f8) before passing it to the constructor.

#### `public  Cookie(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` 

Creates the [Cookie](#classscy_1_1http_1_1Cookie) by copying another one.



#### `public  ~Cookie()` 

Destroys the [Cookie](#classscy_1_1http_1_1Cookie).



#### `public `[`Cookie`](#classscy_1_1http_1_1Cookie)` & operator=(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` 

Assigns a cookie.



#### `public void setVersion(int version)` 



Sets the version of the cookie.

Version must be either 0 (denoting a Netscape cookie) or 1 (denoting a RFC 2109 cookie).

#### `public inline int getVersion() const` 



Returns the version of the cookie, which is either 0 or 1.

#### `public void setName(const std::string & name)` 

Sets the name of the cookie.



#### `public inline const std::string & getName() const` 

Returns the name of the cookie.



#### `public void setValue(const std::string & value)` 



Sets the value of the cookie.

According to the cookie specification, the size of the value should not exceed 4 Kbytes.

Note: If value contains whitespace or non-alphanumeric characters, the value should be escaped by calling [escape()](#group__http_1ga5dc9fb3d11c40a91b69c562135a4a5f8) prior to passing it to [setName()](#group__http_1gad8867c1d8c54497acc3b251b9086f73d).

#### `public inline const std::string & getValue() const` 

Returns the value of the cookie.



#### `public void setComment(const std::string & comment)` 



Sets the comment for the cookie.

Comments are only supported for version 1 cookies.

#### `public inline const std::string & getComment() const` 

Returns the comment for the cookie.



#### `public void setDomain(const std::string & domain)` 

Sets the domain for the cookie.



#### `public inline const std::string & getDomain() const` 

Returns the domain for the cookie.



#### `public void setPath(const std::string & path)` 

Sets the path for the cookie.



#### `public inline const std::string & getPath() const` 

Returns the path for the cookie.



#### `public void setSecure(bool secure)` 



Sets the value of the secure flag for the cookie.

#### `public inline bool getSecure() const` 



Returns the value of the secure flag for the cookie.

#### `public void setMaxAge(int maxAge)` 



Sets the maximum age in seconds for the cookie.

A value of -1 causes the cookie to never expire on the client.

A value of 0 deletes the cookie on the client.

#### `public inline int getMaxAge() const` 



Returns the maximum age in seconds for the cookie.

#### `public void setHttpOnly(bool flag)` 

Sets the HttpOnly flag for the cookie.



#### `public inline bool getHttpOnly() const` 

Returns true if the cookie's HttpOnly flag is set.



#### `public std::string toString() const` 



Returns a std::string representation of the cookie, suitable for use in a Set-Cookie header.

# class `scy::http::FormWriter` 

```
class scy::http::FormWriter
  : public scy::NVCollection
  : public scy::PacketStreamAdapter
  : public scy::async::Startable
```  



[FormWriter](#classscy_1_1http_1_1FormWriter) is a HTTP client connection adapter for writing HTML forms.

This class runs in its own thread so as not to block the event loop while uploading big files. Class members are not synchronized hence they should not be accessed while the form is sending, not that there would be any reason to do so.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` | The outgoing packet emitter.
`public virtual  ~FormWriter()` | Destroys the [FormWriter](#classscy_1_1http_1_1FormWriter).
`public void addPart(const std::string & name,`[`FormPart`](#classscy_1_1http_1_1FormPart)` * part)` | 
`public virtual void start()` | Starts the sending thread.
`public virtual void stop()` | Stops the sending thread.
`public bool complete() const` | Returns true if the request is complete.
`public bool cancelled() const` | Returns true if the request is cancelled.
`public void prepareSubmit()` | 
`public std::uint64_t calculateMultipartContentLength()` | 
`public void writeUrl(std::ostream & ostr)` | 
`public void writeMultipartChunk()` | 
`public void writeAsync()` | 
`public void setEncoding(const std::string & encoding)` | 
`public const std::string & encoding() const` | Returns the encoding used for posting the form.
`public void setBoundary(const std::string & boundary)` | 
`public const std::string & boundary() const` | Returns the MIME boundary used for writing multipart form data.
`public `[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & connection()` | The associated HTTP client connection.
`protected `[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & _connection` | 
`protected async::Runner::Ptr _runner` | 
`protected std::string _encoding` | 
`protected std::string _boundary` | 
`protected PartQueue _parts` | 
`protected std::uint64_t _filesLength` | 
`protected int _writeState` | 
`protected bool _initial` | 
`protected bool _complete` | 
`protected  FormWriter(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & conn,async::Runner::Ptr runner,const std::string & encoding)` | 
`protected  FormWriter(const `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` &)` | 
`protected `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & operator=(const `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` &)` | 
`protected void writePartHeader(const `[`NVCollection`](#classscy_1_1NVCollection)` & header,std::ostream & ostr)` | 
`protected void writeEnd(std::ostream & ostr)` | Writes the final boundary std::string to the output stream.
`protected virtual void updateProgress(int nread)` | 

## Members

#### `public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` 

The outgoing packet emitter.



#### `public virtual  ~FormWriter()` 

Destroys the [FormWriter](#classscy_1_1http_1_1FormWriter).



#### `public void addPart(const std::string & name,`[`FormPart`](#classscy_1_1http_1_1FormPart)` * part)` 



Adds an part/attachment (file upload) to the form.

The form takes ownership of the [FilePart](#classscy_1_1http_1_1FilePart) and deletes it when it is no longer needed. The part will only be sent if the encoding set for the form is "multipart/form-data"

#### `public virtual void start()` 

Starts the sending thread.



#### `public virtual void stop()` 

Stops the sending thread.



#### `public bool complete() const` 

Returns true if the request is complete.



#### `public bool cancelled() const` 

Returns true if the request is cancelled.



#### `public void prepareSubmit()` 



Prepares the outgoing HTTP request object for submitting the form.

If the request method is GET, the encoded form is appended to the request URI as query std::string. Otherwise (the method is POST), the form's content type is set to the form's encoding. The form's parameters must be written to the request body separately, with a call to write. If the request's HTTP version is HTTP/1.0:

* persistent connections are disabled


* the content transfer encoding is set to identity encoding Otherwise, if the request's HTTP version is HTTP/1.1:


* the request's persistent connection state is left unchanged


* the content transfer encoding is set to chunked

#### `public std::uint64_t calculateMultipartContentLength()` 



Processes the entire stream and calculates the content length. Not used for chunked encoding.

#### `public void writeUrl(std::ostream & ostr)` 



Writes "application/x-www-form-urlencoded" encoded data to the client connection.

#### `public void writeMultipartChunk()` 



Writes the next multipart "multipart/form-data" encoded to the client connection. This method is non-blocking, // and is suitable for use with the event loop.

#### `public void writeAsync()` 



Called asynchronously by the Runner to write the next message chunk. If "multipart/form-data" the next multipart chunk will be written. If "application/x-www-form-urlencoded" the entire message will be written. The complete flag will be set when the entire request has been written.

#### `public void setEncoding(const std::string & encoding)` 



Sets the encoding used for posting the form.

Encoding must be either "application/x-www-form-urlencoded" (which is the default) or "multipart/form-data".

#### `public const std::string & encoding() const` 

Returns the encoding used for posting the form.



#### `public void setBoundary(const std::string & boundary)` 



Sets the boundary to use for separating form parts. Must be set before [prepareSubmit()](#group__http_1gaa5769359cbcdf8addf6da8dc3f45d283) is called.

#### `public const std::string & boundary() const` 

Returns the MIME boundary used for writing multipart form data.



#### `public `[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & connection()` 

The associated HTTP client connection.



#### `protected `[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & _connection` 





#### `protected async::Runner::Ptr _runner` 





#### `protected std::string _encoding` 





#### `protected std::string _boundary` 





#### `protected PartQueue _parts` 





#### `protected std::uint64_t _filesLength` 





#### `protected int _writeState` 





#### `protected bool _initial` 





#### `protected bool _complete` 





#### `protected  FormWriter(`[`ClientConnection`](#classscy_1_1http_1_1ClientConnection)` & conn,async::Runner::Ptr runner,const std::string & encoding)` 



Creates the [FormWriter](#classscy_1_1http_1_1FormWriter) that uses the given encoding.

Encoding must be either "application/x-www-form-urlencoded" (which is the default) or "multipart/form-data".

#### `protected  FormWriter(const `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` &)` 





#### `protected `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & operator=(const `[`FormWriter`](#classscy_1_1http_1_1FormWriter)` &)` 





#### `protected void writePartHeader(const `[`NVCollection`](#classscy_1_1NVCollection)` & header,std::ostream & ostr)` 



Writes the message boundary std::string, followed by the message header to the output stream.

#### `protected void writeEnd(std::ostream & ostr)` 

Writes the final boundary std::string to the output stream.



#### `protected virtual void updateProgress(int nread)` 



Updates the upload progress via the associated [ClientConnection](#classscy_1_1http_1_1ClientConnection) object.

# class `scy::http::FormPart` 


An implementation of [FormPart](#classscy_1_1http_1_1FormPart).



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  FormPart(const std::string & contentType)` | Creates the [FormPart](#classscy_1_1http_1_1FormPart) with the given MIME type.
`public virtual  ~FormPart()` | Destroys the [FormPart](#classscy_1_1http_1_1FormPart).
`public virtual void reset()` | Reset the internal state and write position to the start.
`public bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | 
`public void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | Writes the form data to the given HTTP client connection.
`public void write(std::ostream & ostr)` | Writes the form data to the given output stream.
`public `[`NVCollection`](#classscy_1_1NVCollection)` & headers()` | 
`public virtual bool initialWrite() const` | Returns true if this is the initial write.
`public const std::string & contentType() const` | Returns the MIME type for this part or attachment.
`public std::uint64_t length() const` | Returns the length of the current part.
`protected std::string _contentType` | 
`protected std::uint64_t _length` | 
`protected `[`NVCollection`](#classscy_1_1NVCollection)` _headers` | 
`protected bool _initialWrite` | 

## Members

#### `public  FormPart(const std::string & contentType)` 

Creates the [FormPart](#classscy_1_1http_1_1FormPart) with the given MIME type.



#### `public virtual  ~FormPart()` 

Destroys the [FormPart](#classscy_1_1http_1_1FormPart).



#### `public virtual void reset()` 

Reset the internal state and write position to the start.



#### `public bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 



Writes a form data chunk to the given HTTP client connection. Returns true if there is more data to be written.

#### `public void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 

Writes the form data to the given HTTP client connection.



#### `public void write(std::ostream & ostr)` 

Writes the form data to the given output stream.



#### `public `[`NVCollection`](#classscy_1_1NVCollection)` & headers()` 



Returns a [NVCollection](#classscy_1_1NVCollection) containing additional header fields for the part.

#### `public virtual bool initialWrite() const` 

Returns true if this is the initial write.



#### `public const std::string & contentType() const` 

Returns the MIME type for this part or attachment.



#### `public std::uint64_t length() const` 

Returns the length of the current part.



#### `protected std::string _contentType` 





#### `protected std::uint64_t _length` 





#### `protected `[`NVCollection`](#classscy_1_1NVCollection)` _headers` 





#### `protected bool _initialWrite` 





# class `scy::http::FilePart` 

```
class scy::http::FilePart
  : public scy::http::FormPart
```  

An implementation of [FilePart](#classscy_1_1http_1_1FilePart) for plain files.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  FilePart(const std::string & path)` | 
`public  FilePart(const std::string & path,const std::string & contentType)` | 
`public  FilePart(const std::string & path,const std::string & filename,const std::string & contentType)` | 
`public virtual  ~FilePart()` | Destroys the [FilePart](#classscy_1_1http_1_1FilePart).
`public virtual void open()` | 
`public virtual void reset()` | Reset the internal state and write position to the start.
`public virtual bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | 
`public virtual void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | Writes the form data to the given HTTP client connection.
`public virtual void write(std::ostream & ostr)` | Writes the form data to the given output stream.
`public const std::string & filename() const` | Returns the filename portion of the path.
`public std::ifstream & stream()` | Returns the file input stream.
`public virtual std::uint64_t length() const` | Returns the length of the current part.
`protected std::string _path` | 
`protected std::string _filename` | 
`protected std::ifstream _istr` | 
`protected std::uint64_t _fileSize` | 

## Members

#### `public  FilePart(const std::string & path)` 



Creates the [FilePart](#classscy_1_1http_1_1FilePart) for the given path.

The MIME type is set to application/octet-stream.

Throws an FileException if the file cannot be opened.

#### `public  FilePart(const std::string & path,const std::string & contentType)` 



Creates the [FilePart](#classscy_1_1http_1_1FilePart) for the given path and MIME type.

Throws an FileException if the file cannot be opened.

#### `public  FilePart(const std::string & path,const std::string & filename,const std::string & contentType)` 



Creates the [FilePart](#classscy_1_1http_1_1FilePart) for the given path and MIME type. The given filename is used as part filename (see [filename()](#group__http_1gad2765df66b173afe804630d0294b57d2)) only.

Throws an FileException if the file cannot be opened.

#### `public virtual  ~FilePart()` 

Destroys the [FilePart](#classscy_1_1http_1_1FilePart).



#### `public virtual void open()` 



Opens the file.

Throws an FileException if the file cannot be opened.

#### `public virtual void reset()` 

Reset the internal state and write position to the start.



#### `public virtual bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 



Writes a form data chunk to the given HTTP client connection. Returns true if there is more data to be written.

#### `public virtual void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 

Writes the form data to the given HTTP client connection.



#### `public virtual void write(std::ostream & ostr)` 

Writes the form data to the given output stream.



#### `public const std::string & filename() const` 

Returns the filename portion of the path.



#### `public std::ifstream & stream()` 

Returns the file input stream.



#### `public virtual std::uint64_t length() const` 

Returns the length of the current part.



#### `protected std::string _path` 





#### `protected std::string _filename` 





#### `protected std::ifstream _istr` 





#### `protected std::uint64_t _fileSize` 





# class `scy::http::StringPart` 

```
class scy::http::StringPart
  : public scy::http::FormPart
```  

An implementation of [StringPart](#classscy_1_1http_1_1StringPart) for plain files.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  StringPart(const std::string & path)` | Creates the [StringPart](#classscy_1_1http_1_1StringPart) for the given string.
`public  StringPart(const std::string & data,const std::string & contentType)` | Creates the [StringPart](#classscy_1_1http_1_1StringPart) for the given string and MIME type.
`public virtual  ~StringPart()` | Destroys the [StringPart](#classscy_1_1http_1_1StringPart).
`public virtual bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | 
`public virtual void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` | Writes the form data to the given HTTP client connection.
`public virtual void write(std::ostream & ostr)` | Writes the form data to the given output stream.
`public virtual std::uint64_t length() const` | Returns the length of the current part.
`protected std::string _data` | 

## Members

#### `public  StringPart(const std::string & path)` 

Creates the [StringPart](#classscy_1_1http_1_1StringPart) for the given string.



#### `public  StringPart(const std::string & data,const std::string & contentType)` 

Creates the [StringPart](#classscy_1_1http_1_1StringPart) for the given string and MIME type.



#### `public virtual  ~StringPart()` 

Destroys the [StringPart](#classscy_1_1http_1_1StringPart).



#### `public virtual bool writeChunk(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 



Writes a form data chunk to the given HTTP client connection. Returns true if there is more data to be written.

#### `public virtual void write(`[`FormWriter`](#classscy_1_1http_1_1FormWriter)` & writer)` 

Writes the form data to the given HTTP client connection.



#### `public virtual void write(std::ostream & ostr)` 

Writes the form data to the given output stream.



#### `public virtual std::uint64_t length() const` 

Returns the length of the current part.



#### `protected std::string _data` 





# class `scy::http::Message` 

```
class scy::http::Message
  : public scy::NVCollection
```  



The base class for [Request](#classscy_1_1http_1_1Request) and [Response](#classscy_1_1http_1_1Response).

Defines the common properties of all HTTP messages. These are version, content length, content type and transfer encoding.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void setVersion(const std::string & version)` | Sets the HTTP version for this message.
`public const std::string & getVersion() const` | Returns the HTTP version for this message.
`public void setContentLength(std::uint64_t length)` | 
`public std::uint64_t getContentLength() const` | 
`public bool hasContentLength() const` | Returns true if a Content-Length header is present.
`public void setTransferEncoding(const std::string & transferEncoding)` | 
`public const std::string & getTransferEncoding() const` | 
`public void setChunkedTransferEncoding(bool flag)` | 
`public bool isChunkedTransferEncoding() const` | 
`public void setContentType(const std::string & contentType)` | 
`public const std::string & getContentType() const` | 
`public void setKeepAlive(bool keepAlive)` | 
`public bool getKeepAlive() const` | 
`public virtual void write(std::ostream & ostr) const` | 
`protected  Message()` | Creates the [Message](#classscy_1_1http_1_1Message) with version HTTP/1.0.
`protected  Message(const std::string & version)` | 
`protected virtual  ~Message()` | Destroys the [Message](#classscy_1_1http_1_1Message).

## Members

#### `public void setVersion(const std::string & version)` 

Sets the HTTP version for this message.



#### `public const std::string & getVersion() const` 

Returns the HTTP version for this message.



#### `public void setContentLength(std::uint64_t length)` 



Sets the Content-Length header.

If length is UNKNOWN_CONTENT_LENGTH, removes the Content-Length header.

#### `public std::uint64_t getContentLength() const` 



Returns the content length for this message, which may be UNKNOWN_CONTENT_LENGTH if no Content-Length header is present.

#### `public bool hasContentLength() const` 

Returns true if a Content-Length header is present.



#### `public void setTransferEncoding(const std::string & transferEncoding)` 



Sets the transfer encoding for this message.

The value should be either IDENTITY_TRANSFER_CODING or CHUNKED_TRANSFER_CODING.

#### `public const std::string & getTransferEncoding() const` 



Returns the transfer encoding used for this message.

Normally, this is the value of the Transfer-Encoding header field. If no such field is present, returns IDENTITY_TRANSFER_CODING.

#### `public void setChunkedTransferEncoding(bool flag)` 



If flag is true, sets the Transfer-Encoding header to chunked. Otherwise, removes the Transfer-Encoding header.

#### `public bool isChunkedTransferEncoding() const` 



Returns true if the Transfer-Encoding header is set and its value is chunked.

#### `public void setContentType(const std::string & contentType)` 



Sets the content type for this message.

Specify NO_CONTENT_TYPE to remove the Content-Type header.

#### `public const std::string & getContentType() const` 



Returns the content type for this message.

If no Content-Type header is present, returns UNKNOWN_CONTENT_TYPE.

#### `public void setKeepAlive(bool keepAlive)` 



Sets the value of the [Connection](#classscy_1_1http_1_1Connection) header field.

The value is set to "Keep-Alive" if keepAlive is true, or to "Close" otherwise.

#### `public bool getKeepAlive() const` 



Returns true if

* the message has a [Connection](#classscy_1_1http_1_1Connection) header field and its value is "Keep-Alive"


* the message is a HTTP/1.1 message and not [Connection](#classscy_1_1http_1_1Connection) header is set Returns false otherwise.

#### `public virtual void write(std::ostream & ostr) const` 



Writes the message header to the given output stream.

The format is one name-value pair per line, with name and value separated by a colon and lines delimited by a carriage return and a linefeed character. See RFC 2822 for details.

#### `protected  Message()` 

Creates the [Message](#classscy_1_1http_1_1Message) with version HTTP/1.0.



#### `protected  Message(const std::string & version)` 



Creates the [Message](#classscy_1_1http_1_1Message) and sets the version.

#### `protected virtual  ~Message()` 

Destroys the [Message](#classscy_1_1http_1_1Message).



# class `scy::http::ChunkedAdapter` 

```
class scy::http::ChunkedAdapter
  : public scy::PacketProcessor
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`Connection`](#classscy_1_1http_1_1Connection)` * connection` | 
`public std::string contentType` | 
`public std::string frameSeparator` | 
`public bool initial` | 
`public bool nocopy` | 
`public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` | 
`public inline  ChunkedAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` * connection,const std::string & frameSeparator,bool nocopy)` | 
`public inline  ChunkedAdapter(const std::string & contentType,const std::string & frameSeparator,bool nocopy)` | 
`public inline virtual  ~ChunkedAdapter()` | 
`public inline virtual void emitHeader()` | 
`public inline virtual void process(`[`IPacket`](#classscy_1_1IPacket)` & packet)` | 

## Members

#### `public `[`Connection`](#classscy_1_1http_1_1Connection)` * connection` 





#### `public std::string contentType` 





#### `public std::string frameSeparator` 





#### `public bool initial` 





#### `public bool nocopy` 





#### `public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` 





#### `public inline  ChunkedAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` * connection,const std::string & frameSeparator,bool nocopy)` 





#### `public inline  ChunkedAdapter(const std::string & contentType,const std::string & frameSeparator,bool nocopy)` 





#### `public inline virtual  ~ChunkedAdapter()` 





#### `public inline virtual void emitHeader()` 



Sets HTTP headers for the initial response. This method must not include the final carriage return.

#### `public inline virtual void process(`[`IPacket`](#classscy_1_1IPacket)` & packet)` 



This method performs processing on the given packet and emits the result.

Note: If packet processing is async (the packet is not in the current thread scope) then packet data must be copied. Copied data can be freed directly aFter the async call to emit() the outgoing packet.

# class `scy::http::MultipartAdapter` 

```
class scy::http::MultipartAdapter
  : public scy::PacketProcessor
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`Connection`](#classscy_1_1http_1_1Connection)` * connection` | 
`public std::string contentType` | 
`public bool isBase64` | 
`public bool initial` | 
`public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` | 
`public inline  MultipartAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` * connection,bool base64)` | 
`public inline  MultipartAdapter(const std::string & contentType,bool base64)` | 
`public inline virtual  ~MultipartAdapter()` | 
`public inline virtual void emitHeader()` | 
`public inline virtual void emitChunkHeader()` | Sets HTTP header for the current chunk.
`public inline virtual void process(`[`IPacket`](#classscy_1_1IPacket)` & packet)` | 

## Members

#### `public `[`Connection`](#classscy_1_1http_1_1Connection)` * connection` 





#### `public std::string contentType` 





#### `public bool isBase64` 





#### `public bool initial` 





#### `public `[`PacketSignal`](#classscy_1_1SignalBase)` emitter` 





#### `public inline  MultipartAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` * connection,bool base64)` 





#### `public inline  MultipartAdapter(const std::string & contentType,bool base64)` 





#### `public inline virtual  ~MultipartAdapter()` 





#### `public inline virtual void emitHeader()` 





#### `public inline virtual void emitChunkHeader()` 

Sets HTTP header for the current chunk.



#### `public inline virtual void process(`[`IPacket`](#classscy_1_1IPacket)` & packet)` 



This method performs processing on the given packet and emits the result.

Note: If packet processing is async (the packet is not in the current thread scope) then packet data must be copied. Copied data can be freed directly aFter the async call to emit() the outgoing packet.

# class `scy::http::ParserObserver` 






## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void onParserHeader(const std::string & name,const std::string & value)` | 
`public void onParserHeadersEnd()` | 
`public void onParserChunk(const char * data,std::size_t len)` | 
`public void onParserEnd()` | 
`public void onParserError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` | 

## Members

#### `public void onParserHeader(const std::string & name,const std::string & value)` 





#### `public void onParserHeadersEnd()` 





#### `public void onParserChunk(const char * data,std::size_t len)` 





#### `public void onParserEnd()` 





#### `public void onParserError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` 





# class `scy::http::Parser` 






## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * _observer` | 
`public `[`http::Request`](#classscy_1_1http_1_1Request)` * _request` | 
`public `[`http::Response`](#classscy_1_1http_1_1Response)` * _response` | 
`public `[`http::Message`](#classscy_1_1http_1_1Message)` * _message` | 
`public http_parser _parser` | 
`public http_parser_settings _settings` | 
`public bool _wasHeaderValue` | 
`public std::string _lastHeaderField` | 
`public std::string _lastHeaderValue` | 
`public bool _complete` | 
`public `[`ParserError`](#structscy_1_1http_1_1ParserError)` * _error` | 
`public  Parser(`[`http::Response`](#classscy_1_1http_1_1Response)` * response)` | 
`public  Parser(`[`http::Request`](#classscy_1_1http_1_1Request)` * request)` | 
`public  Parser(http_parser_type type)` | 
`public  ~Parser()` | 
`public void init(http_parser_type type)` | 
`public std::size_t parse(const char * data,std::size_t length)` | 
`public void reset()` | 
`public bool complete() const` | 
`public void setParserError(const std::string & message)` | 
`public void setRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` * request)` | 
`public void setResponse(`[`http::Response`](#classscy_1_1http_1_1Response)` * response)` | 
`public void setObserver(`[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * observer)` | 
`public `[`http::Message`](#classscy_1_1http_1_1Message)` * message()` | 
`public `[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * observer() const` | 
`public bool upgrade() const` | 
`public bool shouldKeepAlive() const` | 
`public void onURL(const std::string & value)` | 
`public void onHeader(const std::string & name,const std::string & value)` | 
`public void onHeadersEnd()` | 
`public void onBody(const char * buf,std::size_t len)` | 
`public void onMessageEnd()` | 
`public void onError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` | 

## Members

#### `public `[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * _observer` 





#### `public `[`http::Request`](#classscy_1_1http_1_1Request)` * _request` 





#### `public `[`http::Response`](#classscy_1_1http_1_1Response)` * _response` 





#### `public `[`http::Message`](#classscy_1_1http_1_1Message)` * _message` 





#### `public http_parser _parser` 





#### `public http_parser_settings _settings` 





#### `public bool _wasHeaderValue` 





#### `public std::string _lastHeaderField` 





#### `public std::string _lastHeaderValue` 





#### `public bool _complete` 





#### `public `[`ParserError`](#structscy_1_1http_1_1ParserError)` * _error` 





#### `public  Parser(`[`http::Response`](#classscy_1_1http_1_1Response)` * response)` 





#### `public  Parser(`[`http::Request`](#classscy_1_1http_1_1Request)` * request)` 





#### `public  Parser(http_parser_type type)` 





#### `public  ~Parser()` 





#### `public void init(http_parser_type type)` 





#### `public std::size_t parse(const char * data,std::size_t length)` 





#### `public void reset()` 



Feed data read from socket into the http_parser.

Returns true of the message is complete, false if incomplete. Reset the parser state for a new message

#### `public bool complete() const` 



Returns true if parsing is complete, either in success or error.

#### `public void setParserError(const std::string & message)` 





#### `public void setRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` * request)` 





#### `public void setResponse(`[`http::Response`](#classscy_1_1http_1_1Response)` * response)` 





#### `public void setObserver(`[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * observer)` 





#### `public `[`http::Message`](#classscy_1_1http_1_1Message)` * message()` 





#### `public `[`ParserObserver`](#classscy_1_1http_1_1ParserObserver)` * observer() const` 





#### `public bool upgrade() const` 





#### `public bool shouldKeepAlive() const` 





#### `public void onURL(const std::string & value)` 





#### `public void onHeader(const std::string & name,const std::string & value)` 





#### `public void onHeadersEnd()` 





#### `public void onBody(const char * buf,std::size_t len)` 





#### `public void onMessageEnd()` 





#### `public void onError(const `[`ParserError`](#structscy_1_1http_1_1ParserError)` & err)` 





# class `scy::http::Request` 

```
class scy::http::Request
  : public scy::http::Message
```  



This class encapsulates an HTTP request message.

In addition to the properties common to all HTTP messages, a HTTP request has a method (e.g. GET, HEAD, POST, etc.) and a request URI.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  Request()` | Creates a GET / HTTP/1.1 HTTP request.
`public  Request(const std::string & version)` | 
`public  Request(const std::string & method,const std::string & uri)` | Creates a HTTP/1.0 request with the given method and URI.
`public  Request(const std::string & method,const std::string & uri,const std::string & version)` | Creates a HTTP request with the given method, URI and version.
`public virtual  ~Request()` | Destroys the [Request](#classscy_1_1http_1_1Request).
`public void setMethod(const std::string & method)` | Sets the method.
`public const std::string & getMethod() const` | Returns the method.
`public void setURI(const std::string & uri)` | Sets the request URI.
`public const std::string & getURI() const` | Returns the request URI.
`public void setHost(const std::string & host)` | Sets the value of the Host header field.
`public void setHost(const std::string & host,std::uint16_t port)` | 
`public const std::string & getHost() const` | 
`public void setCookies(const `[`NVCollection`](#classscy_1_1NVCollection)` & cookies)` | 
`public void getCookies(`[`NVCollection`](#classscy_1_1NVCollection)` & cookies) const` | 
`public void getURIParameters(`[`NVCollection`](#classscy_1_1NVCollection)` & params) const` | Returns the request URI parameters.
`public bool hasCredentials() const` | 
`public void getCredentials(std::string & scheme,std::string & authInfo) const` | 
`public void setCredentials(const std::string & scheme,const std::string & authInfo)` | 
`public bool hasProxyCredentials() const` | 
`public void getProxyCredentials(std::string & scheme,std::string & authInfo) const` | 
`public void setProxyCredentials(const std::string & scheme,const std::string & authInfo)` | Sets the proxy authentication scheme and information for this request.
`public virtual void write(std::ostream & ostr) const` | Writes the HTTP request to the given output stream.
`protected void getCredentials(const std::string & header,std::string & scheme,std::string & authInfo) const` | 
`protected void setCredentials(const std::string & header,const std::string & scheme,const std::string & authInfo)` | 

## Members

#### `public  Request()` 

Creates a GET / HTTP/1.1 HTTP request.



#### `public  Request(const std::string & version)` 



Creates a GET / HTTP/1.x request with the given version (HTTP/1.0 or HTTP/1.1).

#### `public  Request(const std::string & method,const std::string & uri)` 

Creates a HTTP/1.0 request with the given method and URI.



#### `public  Request(const std::string & method,const std::string & uri,const std::string & version)` 

Creates a HTTP request with the given method, URI and version.



#### `public virtual  ~Request()` 

Destroys the [Request](#classscy_1_1http_1_1Request).



#### `public void setMethod(const std::string & method)` 

Sets the method.



#### `public const std::string & getMethod() const` 

Returns the method.



#### `public void setURI(const std::string & uri)` 

Sets the request URI.



#### `public const std::string & getURI() const` 

Returns the request URI.



#### `public void setHost(const std::string & host)` 

Sets the value of the Host header field.



#### `public void setHost(const std::string & host,std::uint16_t port)` 



Sets the value of the Host header field.

If the given port number is a non-standard port number (other than 80 or 443), it is included in the Host header field.

#### `public const std::string & getHost() const` 



Returns the value of the Host header field.

Throws a NotFoundException if the request does not have a Host header field.

#### `public void setCookies(const `[`NVCollection`](#classscy_1_1NVCollection)` & cookies)` 



Adds a [Cookie](#classscy_1_1http_1_1Cookie) header with the names and values from cookies.

#### `public void getCookies(`[`NVCollection`](#classscy_1_1NVCollection)` & cookies) const` 



Fills cookies with the cookies extracted from the [Cookie](#classscy_1_1http_1_1Cookie) headers in the request.

#### `public void getURIParameters(`[`NVCollection`](#classscy_1_1NVCollection)` & params) const` 

Returns the request URI parameters.



#### `public bool hasCredentials() const` 



Returns true if the request contains authentication information in the form of an Authorization header.

#### `public void getCredentials(std::string & scheme,std::string & authInfo) const` 



Returns the authentication scheme and additional authentication information contained in this request.

Throws a std::exception if no authentication information is contained in the request.

#### `public void setCredentials(const std::string & scheme,const std::string & authInfo)` 



Sets the authentication scheme and information for this request.

#### `public bool hasProxyCredentials() const` 



Returns true if the request contains proxy authentication information in the form of an Proxy-Authorization header.

#### `public void getProxyCredentials(std::string & scheme,std::string & authInfo) const` 



Returns the proxy authentication scheme and additional proxy authentication information contained in this request.

Throws a std::exception if no proxy authentication information is contained in the request.

#### `public void setProxyCredentials(const std::string & scheme,const std::string & authInfo)` 

Sets the proxy authentication scheme and information for this request.



#### `public virtual void write(std::ostream & ostr) const` 

Writes the HTTP request to the given output stream.



#### `protected void getCredentials(const std::string & header,std::string & scheme,std::string & authInfo) const` 



Returns the authentication scheme and additional authentication information contained in the given header of request.

Throws a NotAuthenticatedException if no authentication information is contained in the request.

#### `protected void setCredentials(const std::string & header,const std::string & scheme,const std::string & authInfo)` 



Writes the authentication scheme and information for this request to the given header.

# class `scy::http::Response` 

```
class scy::http::Response
  : public scy::http::Message
```  

This class encapsulates an HTTP response message.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  Response()` | typedef std::shared_ptr<Response> Ptr;
`public  Response(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` | Creates the [Response](#classscy_1_1http_1_1Response) with the given status and reason phrase.
`public  Response(const std::string & version,`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` | Creates the [Response](#classscy_1_1http_1_1Response) with the given version, status and reason phrase.
`public  Response(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` | 
`public  Response(const std::string & version,`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` | 
`public virtual  ~Response()` | Destroys the [Response](#classscy_1_1http_1_1Response).
`public void setStatus(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` | 
`public `[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` getStatus() const` | Returns the HTTP status code.
`public void setReason(const std::string & reason)` | Sets the HTTP reason phrase.
`public const std::string & getReason() const` | Returns the HTTP reason phrase.
`public void setStatusAndReason(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` | Sets the HTTP status code and reason phrase.
`public void setDate(const `[`Timestamp`](#classscy_1_1Timestamp)` & dateTime)` | Sets the Date header to the given date/time value.
`public `[`Timestamp`](#classscy_1_1Timestamp)` getDate() const` | Returns the value of the Date header.
`public void addCookie(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` | 
`public void getCookies(std::vector< `[`Cookie`](#classscy_1_1http_1_1Cookie)` > & cookies) const` | 
`public virtual void write(std::ostream & ostr) const` | Writes the HTTP response headers to the given output stream.
`public virtual bool success() const` | Returns true if the HTTP response code was successful (>= 400).

## Members

#### `public  Response()` 

typedef std::shared_ptr<Response> Ptr;

Creates the [Response](#classscy_1_1http_1_1Response) with OK status.

#### `public  Response(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` 

Creates the [Response](#classscy_1_1http_1_1Response) with the given status and reason phrase.



#### `public  Response(const std::string & version,`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` 

Creates the [Response](#classscy_1_1http_1_1Response) with the given version, status and reason phrase.



#### `public  Response(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` 



Creates the [Response](#classscy_1_1http_1_1Response) with the given status an an appropriate reason phrase.

#### `public  Response(const std::string & version,`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` 



Creates the [Response](#classscy_1_1http_1_1Response) with the given version, status an an appropriate reason phrase.

#### `public virtual  ~Response()` 

Destroys the [Response](#classscy_1_1http_1_1Response).



#### `public void setStatus(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status)` 



Sets the HTTP status code.

The reason phrase is set according to the status code.

#### `public `[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` getStatus() const` 

Returns the HTTP status code.



#### `public void setReason(const std::string & reason)` 

Sets the HTTP reason phrase.



#### `public const std::string & getReason() const` 

Returns the HTTP reason phrase.



#### `public void setStatusAndReason(`[`StatusCode`](#group__http_1ga557c5bc8f0990c42f31cbaca9b756f2b)` status,const std::string & reason)` 

Sets the HTTP status code and reason phrase.



#### `public void setDate(const `[`Timestamp`](#classscy_1_1Timestamp)` & dateTime)` 

Sets the Date header to the given date/time value.



#### `public `[`Timestamp`](#classscy_1_1Timestamp)` getDate() const` 

Returns the value of the Date header.



#### `public void addCookie(const `[`Cookie`](#classscy_1_1http_1_1Cookie)` & cookie)` 



Adds the cookie to the response by adding a Set-Cookie header.

#### `public void getCookies(std::vector< `[`Cookie`](#classscy_1_1http_1_1Cookie)` > & cookies) const` 



Returns a vector with all the cookies set in the response header.

May throw an exception in case of a malformed Set-Cookie header.

#### `public virtual void write(std::ostream & ostr) const` 

Writes the HTTP response headers to the given output stream.



#### `public virtual bool success() const` 

Returns true if the HTTP response code was successful (>= 400).



# class `scy::http::ServerConnection` 

```
class scy::http::ServerConnection
  : public scy::http::Connection
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  ServerConnection(`[`Server`](#classscy_1_1http_1_1Server)` & server,net::Socket::Ptr socket)` | 
`public virtual  ~ServerConnection()` | 
`public virtual void close()` | Sends the HTTP response.
`protected `[`Server`](#classscy_1_1http_1_1Server)` & _server` | 
`protected `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * _responder` | 
`protected bool _upgrade` | 
`protected bool _requestComplete` | 
`protected virtual void onHeaders()` | 
`protected virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer)` | 
`protected virtual void onMessage()` | 
`protected virtual void onClose()` | 
`protected `[`Server`](#classscy_1_1http_1_1Server)` & server()` | 
`protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` | 
`protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` | 

## Members

#### `public  ServerConnection(`[`Server`](#classscy_1_1http_1_1Server)` & server,net::Socket::Ptr socket)` 





#### `public virtual  ~ServerConnection()` 





#### `public virtual void close()` 

Sends the HTTP response.

Closes the HTTP connection

#### `protected `[`Server`](#classscy_1_1http_1_1Server)` & _server` 





#### `protected `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * _responder` 





#### `protected bool _upgrade` 





#### `protected bool _requestComplete` 





#### `protected virtual void onHeaders()` 



Return true if the server did not give us a proper response within the allotted time. bool expired() const;

#### `protected virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer)` 





#### `protected virtual void onMessage()` 





#### `protected virtual void onClose()` 





#### `protected `[`Server`](#classscy_1_1http_1_1Server)` & server()` 





#### `protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * incomingHeader()` 





#### `protected virtual `[`http::Message`](#classscy_1_1http_1_1Message)` * outgoingHeader()` 





# class `scy::http::ServerAdapter` 

```
class scy::http::ServerAdapter
  : public scy::http::ConnectionAdapter
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  ServerAdapter(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` | 

## Members

#### `public inline  ServerAdapter(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` 





# class `scy::http::ServerResponder` 




The abstract base class for HTTP ServerResponders created by HTTP [Server](#classscy_1_1http_1_1Server).

Derived classes must override the handleRequest() method.

A new HTTPServerResponder object will be created for each new HTTP request that is received by the HTTP [Server](#classscy_1_1http_1_1Server).

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  ServerResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` | 
`public inline virtual  ~ServerResponder()` | 
`public inline virtual void onHeaders(`[`Request`](#classscy_1_1http_1_1Request)` &)` | 
`public inline virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` &)` | 
`public inline virtual void onRequest(`[`Request`](#classscy_1_1http_1_1Request)` &,`[`Response`](#classscy_1_1http_1_1Response)` &)` | 
`public inline virtual void onClose()` | 
`public inline `[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection()` | 
`public inline `[`Request`](#classscy_1_1http_1_1Request)` & request()` | 
`public inline `[`Response`](#classscy_1_1http_1_1Response)` & response()` | 
`protected `[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & _connection` | 

## Members

#### `public inline  ServerResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` 





#### `public inline virtual  ~ServerResponder()` 





#### `public inline virtual void onHeaders(`[`Request`](#classscy_1_1http_1_1Request)` &)` 





#### `public inline virtual void onPayload(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` &)` 





#### `public inline virtual void onRequest(`[`Request`](#classscy_1_1http_1_1Request)` &,`[`Response`](#classscy_1_1http_1_1Response)` &)` 





#### `public inline virtual void onClose()` 





#### `public inline `[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection()` 





#### `public inline `[`Request`](#classscy_1_1http_1_1Request)` & request()` 





#### `public inline `[`Response`](#classscy_1_1http_1_1Response)` & response()` 





#### `protected `[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & _connection` 





# class `scy::http::ServerResponderFactory` 




This implementation of a [ServerResponderFactory](#classscy_1_1http_1_1ServerResponderFactory) is used by HTTPServer to create [ServerResponder](#classscy_1_1http_1_1ServerResponder) objects.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  ServerResponderFactory()` | 
`public inline virtual  ~ServerResponderFactory()` | 
`public `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * createResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` | 

## Members

#### `public inline  ServerResponderFactory()` 





#### `public inline virtual  ~ServerResponderFactory()` 





#### `public `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * createResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` 



Factory method for instantiating the [ServerResponder](#classscy_1_1http_1_1ServerResponder) instance using the given [ServerConnection](#classscy_1_1http_1_1ServerConnection).

# class `scy::http::Server` 




DISCLAIMER: This HTTP server is not standards compliant. It was created to be a fast (nocopy where possible) solution for streaming video to web browsers.

TODO:

* SSL [Server](#classscy_1_1http_1_1Server)


* Enable responders (controllers?) to be instantiated via registered routes.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public net::TCPSocket::Ptr socket` | 
`public `[`ServerResponderFactory`](#classscy_1_1http_1_1ServerResponderFactory)` * factory` | 
`public ServerConnectionList connections` | 
`public `[`net::Address`](#classscy_1_1net_1_1Address)` address` | 
`public `[`NullSignal`](#classscy_1_1NullSignal)` Shutdown` | 
`public  Server(short port,`[`ServerResponderFactory`](#classscy_1_1http_1_1ServerResponderFactory)` * factory)` | 
`public virtual  ~Server()` | 
`public void start()` | 
`public void shutdown()` | 
`public std::uint16_t port()` | 
`protected ServerConnection::Ptr createConnection(const net::Socket::Ptr & sock)` | 
`protected `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * createResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & conn)` | 
`protected virtual void addConnection(ServerConnection::Ptr conn)` | 
`protected virtual void removeConnection(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` * conn)` | 
`protected void onAccept(const net::TCPSocket::Ptr & sock)` | 
`protected void onClose()` | 
`protected void onConnectionClose(void *)` | 

## Members

#### `public net::TCPSocket::Ptr socket` 





#### `public `[`ServerResponderFactory`](#classscy_1_1http_1_1ServerResponderFactory)` * factory` 





#### `public ServerConnectionList connections` 





#### `public `[`net::Address`](#classscy_1_1net_1_1Address)` address` 





#### `public `[`NullSignal`](#classscy_1_1NullSignal)` Shutdown` 





#### `public  Server(short port,`[`ServerResponderFactory`](#classscy_1_1http_1_1ServerResponderFactory)` * factory)` 





#### `public virtual  ~Server()` 





#### `public void start()` 





#### `public void shutdown()` 





#### `public std::uint16_t port()` 





#### `protected ServerConnection::Ptr createConnection(const net::Socket::Ptr & sock)` 





#### `protected `[`ServerResponder`](#classscy_1_1http_1_1ServerResponder)` * createResponder(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & conn)` 





#### `protected virtual void addConnection(ServerConnection::Ptr conn)` 





#### `protected virtual void removeConnection(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` * conn)` 





#### `protected void onAccept(const net::TCPSocket::Ptr & sock)` 





#### `protected void onClose()` 





#### `protected void onConnectionClose(void *)` 





# class `scy::http::BadRequestHandler` 

```
class scy::http::BadRequestHandler
  : public scy::http::ServerResponder
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  BadRequestHandler(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` | 
`public inline virtual void onRequest(`[`Request`](#classscy_1_1http_1_1Request)` &,`[`Response`](#classscy_1_1http_1_1Response)` & response)` | 

## Members

#### `public inline  BadRequestHandler(`[`ServerConnection`](#classscy_1_1http_1_1ServerConnection)` & connection)` 





#### `public inline virtual void onRequest(`[`Request`](#classscy_1_1http_1_1Request)` &,`[`Response`](#classscy_1_1http_1_1Response)` & response)` 





# class `scy::http::URL` 




An RFC 3986 based [URL](#classscy_1_1http_1_1URL) which uses an external c library to do the heavy lifting. Constructors and assignment operators will throw a SyntaxException if the [URL](#classscy_1_1http_1_1URL) is invalid.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  URL()` | 
`public  URL(const char * url)` | 
`public  URL(const std::string & url)` | 
`public  URL(const std::string & scheme,const std::string & authority)` | 
`public  URL(const std::string & scheme,const std::string & authority,const std::string & pathEtc)` | 
`public  URL(const std::string & scheme,const std::string & authority,const std::string & path,const std::string & query,const std::string & fragment)` | 
`public  ~URL()` | 
`public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const `[`URL`](#classscy_1_1http_1_1URL)` & uri)` | 
`public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const std::string & uri)` | 
`public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const char * uri)` | 
`public bool parse(const std::string & url,bool whiny)` | 
`public std::string scheme() const` | 
`public std::string userInfo() const` | 
`public std::string host() const` | 
`public std::uint16_t port() const` | 
`public std::string authority() const` | 
`public std::string path() const` | 
`public std::string pathEtc() const` | 
`public std::string query() const` | 
`public std::string fragment() const` | 
`public bool hasSchema() const` | 
`public bool hasUserInfo() const` | 
`public bool hasHost() const` | 
`public bool hasPort() const` | 
`public bool hasPath() const` | 
`public bool hasQuery() const` | 
`public bool hasFragment() const` | 
`public bool valid() const` | 
`public std::string str() const` | 
`protected http_parser_url _parser` | 
`protected std::string _buf` | 

## Members

#### `public  URL()` 





#### `public  URL(const char * url)` 





#### `public  URL(const std::string & url)` 





#### `public  URL(const std::string & scheme,const std::string & authority)` 





#### `public  URL(const std::string & scheme,const std::string & authority,const std::string & pathEtc)` 





#### `public  URL(const std::string & scheme,const std::string & authority,const std::string & path,const std::string & query,const std::string & fragment)` 





#### `public  ~URL()` 





#### `public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const `[`URL`](#classscy_1_1http_1_1URL)` & uri)` 





#### `public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const std::string & uri)` 





#### `public `[`URL`](#classscy_1_1http_1_1URL)` & operator=(const char * uri)` 





#### `public bool parse(const std::string & url,bool whiny)` 



Parses and assigns an URI from the given std::string. Throws a SyntaxException if whiny is set and the given url is invalid.

#### `public std::string scheme() const` 





#### `public std::string userInfo() const` 





#### `public std::string host() const` 





#### `public std::uint16_t port() const` 





#### `public std::string authority() const` 





#### `public std::string path() const` 





#### `public std::string pathEtc() const` 





#### `public std::string query() const` 





#### `public std::string fragment() const` 





#### `public bool hasSchema() const` 





#### `public bool hasUserInfo() const` 





#### `public bool hasHost() const` 





#### `public bool hasPort() const` 





#### `public bool hasPath() const` 





#### `public bool hasQuery() const` 





#### `public bool hasFragment() const` 





#### `public bool valid() const` 





#### `public std::string str() const` 





#### `protected http_parser_url _parser` 





#### `protected std::string _buf` 





# class `scy::http::ws::WebSocketFramer` 




This class implements a [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) parser according to the [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) protocol described in RFC 6455.

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  WebSocketFramer(`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode)` | Creates a Socket using the given Socket.
`public virtual  ~WebSocketFramer()` | 
`public virtual std::size_t writeFrame(const char * data,std::size_t len,int flags,`[`BitWriter`](#classscy_1_1BitWriter)` & frame)` | Writes a [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) protocol frame from the given data.
`public virtual std::uint64_t readFrame(`[`BitReader`](#classscy_1_1BitReader)` & frame,char *& payload)` | 
`public bool handshakeComplete() const` | 
`public void acceptServerRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | 
`public void createClientHandshakeRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` | Appends the WS hanshake HTTP request hearers.
`public bool checkClientHandshakeResponse(`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | 
`public void completeClientHandshake(`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | Verifies the handshake response or thrown and exception.
`protected int frameFlags() const` | 
`protected bool mustMaskPayload() const` | 
`protected `[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode() const` | 

## Members

#### `public  WebSocketFramer(`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode)` 

Creates a Socket using the given Socket.



#### `public virtual  ~WebSocketFramer()` 





#### `public virtual std::size_t writeFrame(const char * data,std::size_t len,int flags,`[`BitWriter`](#classscy_1_1BitWriter)` & frame)` 

Writes a [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) protocol frame from the given data.



#### `public virtual std::uint64_t readFrame(`[`BitReader`](#classscy_1_1BitReader)` & frame,char *& payload)` 



Reads a single [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) frame from the given buffer (frame).

The actual payload length is returned, and the beginning of the payload buffer will be assigned in the second (payload) argument. No data is copied.

If the frame is invalid or too big an exception will be thrown. Return true when the handshake has completed successfully.

#### `public bool handshakeComplete() const` 





#### `public void acceptServerRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` & request,`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 





#### `public void createClientHandshakeRequest(`[`http::Request`](#classscy_1_1http_1_1Request)` & request)` 

Appends the WS hanshake HTTP request hearers.

[Client](#classscy_1_1http_1_1Client) side Sends the initial WS handshake HTTP request. void sendHandshakeRequest();

#### `public bool checkClientHandshakeResponse(`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 



Checks the veracity the HTTP handshake response. Returns true on success, false if the request should be resent (in case of authentication), or throws on error.

#### `public void completeClientHandshake(`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 

Verifies the handshake response or thrown and exception.



#### `protected int frameFlags() const` 



Returns the frame flags of the most recently received frame. Set by [readFrame()](#group__http_1ga60fc4167796de84fb0718cef38a8cd45)

#### `protected bool mustMaskPayload() const` 



Returns true if the payload must be masked. Used by [writeFrame()](#group__http_1ga33423fa89193d26b9d18d08ec62906a4)

#### `protected `[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode() const` 





# class `scy::http::ws::WebSocketAdapter` 

```
class scy::http::ws::WebSocketAdapter
  : public scy::net::SocketAdapter
```  





## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public net::Socket::Ptr socket` | 
`public  WebSocketAdapter(const net::Socket::Ptr & socket,`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode,`[`http::Request`](#classscy_1_1http_1_1Request)` & request,`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` | 
`public virtual int send(const char * data,std::size_t len,int flags)` | 
`public virtual int send(const char * data,std::size_t len,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr,int flags)` | 
`public virtual bool shutdown(std::uint16_t statusCode,const std::string & statusMessage)` | 
`public virtual void sendClientRequest()` | 
`public virtual void handleClientResponse(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr)` | 
`public virtual void handleServerRequest(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr)` | 
`public virtual void onSocketConnect()` | 
`public virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` | 
`public virtual void onSocketClose()` | 
`public virtual void onHandshakeComplete()` | 
`protected `[`WebSocketFramer`](#classscy_1_1http_1_1ws_1_1WebSocketFramer)` framer` | 
`protected `[`http::Request`](#classscy_1_1http_1_1Request)` & _request` | 
`protected `[`http::Response`](#classscy_1_1http_1_1Response)` & _response` | 
`protected virtual  ~WebSocketAdapter()` | 

## Members

#### `public net::Socket::Ptr socket` 



Pointer to the underlying socket. Sent data will be proxied to this socket.

#### `public  WebSocketAdapter(const net::Socket::Ptr & socket,`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode,`[`http::Request`](#classscy_1_1http_1_1Request)` & request,`[`http::Response`](#classscy_1_1http_1_1Response)` & response)` 





#### `public virtual int send(const char * data,std::size_t len,int flags)` 



Sends the given data buffer to the connected peer. Returns the number of bytes sent or -1 on error. No exception will be thrown. For TCP sockets the given peer address must match the connected peer address.

#### `public virtual int send(const char * data,std::size_t len,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr,int flags)` 





#### `public virtual bool shutdown(std::uint16_t statusCode,const std::string & statusMessage)` 





#### `public virtual void sendClientRequest()` 





#### `public virtual void handleClientResponse(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr)` 





#### `public virtual void handleServerRequest(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddr)` 





#### `public virtual void onSocketConnect()` 



These virtual methods can be overridden as necessary to intercept socket events before they hit the application.

#### `public virtual void onSocketRecv(const `[`MutableBuffer`](#classscy_1_1MutableBuffer)` & buffer,const `[`net::Address`](#classscy_1_1net_1_1Address)` & peerAddress)` 





#### `public virtual void onSocketClose()` 





#### `public virtual void onHandshakeComplete()` 





#### `protected `[`WebSocketFramer`](#classscy_1_1http_1_1ws_1_1WebSocketFramer)` framer` 





#### `protected `[`http::Request`](#classscy_1_1http_1_1Request)` & _request` 





#### `protected `[`http::Response`](#classscy_1_1http_1_1Response)` & _response` 





#### `protected virtual  ~WebSocketAdapter()` 





# class `scy::http::ws::WebSocket` 

```
class scy::http::ws::WebSocket
  : public scy::http::ws::WebSocketAdapter
```  

Standalone [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) class.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  WebSocket(const net::Socket::Ptr & socket)` | 
`public virtual  ~WebSocket()` | 
`public `[`http::Request`](#classscy_1_1http_1_1Request)` & request()` | 
`public `[`http::Response`](#classscy_1_1http_1_1Response)` & response()` | 
`protected `[`http::Request`](#classscy_1_1http_1_1Request)` _request` | 
`protected `[`http::Response`](#classscy_1_1http_1_1Response)` _response` | 

## Members

#### `public  WebSocket(const net::Socket::Ptr & socket)` 



Creates the [WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) with the given Socket. The Socket should be a TCPSocket or a SSLSocket, depending on the protocol used (ws or wss).

#### `public virtual  ~WebSocket()` 





#### `public `[`http::Request`](#classscy_1_1http_1_1Request)` & request()` 





#### `public `[`http::Response`](#classscy_1_1http_1_1Response)` & response()` 





#### `protected `[`http::Request`](#classscy_1_1http_1_1Request)` _request` 





#### `protected `[`http::Response`](#classscy_1_1http_1_1Response)` _response` 





# class `scy::http::ws::ConnectionAdapter` 

```
class scy::http::ws::ConnectionAdapter
  : public scy::http::ws::WebSocketAdapter
```  

[WebSocket](#classscy_1_1http_1_1ws_1_1WebSocket) class which belongs to a HTTP [Connection](#classscy_1_1http_1_1Connection).



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public  ConnectionAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` & connection,`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode)` | 
`public virtual  ~ConnectionAdapter()` | 
`public virtual void onHandshakeComplete()` | virtual int sendHeader();
`protected `[`Connection`](#classscy_1_1http_1_1Connection)` & _connection` | 

## Members

#### `public  ConnectionAdapter(`[`Connection`](#classscy_1_1http_1_1Connection)` & connection,`[`ws::Mode`](#group__http_1gaa9edb02676fb90927487e1de2afa287e)` mode)` 





#### `public virtual  ~ConnectionAdapter()` 





#### `public virtual void onHandshakeComplete()` 

virtual int sendHeader();



#### `protected `[`Connection`](#classscy_1_1http_1_1Connection)` & _connection` 





# struct `scy::http::FormWriter::Part` 






## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public std::string name` | 
`public `[`FormPart`](#classscy_1_1http_1_1FormPart)` * part` | 

## Members

#### `public std::string name` 





#### `public `[`FormPart`](#classscy_1_1http_1_1FormPart)` * part` 





# struct `scy::http::ParserError` 






## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public http_errno code` | 
`public std::string message` | 

## Members

#### `public http_errno code` 





#### `public std::string message` 





# struct `scy::http::Method` 


HTTP request methods.



## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

## Members

