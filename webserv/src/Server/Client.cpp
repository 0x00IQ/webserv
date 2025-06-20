#include "Webserv.hpp"


Client::Client( ) : _fd(0 ), _allRead( false ), _contentLength( 0 ), _headerParsed(false), _bodyStart(0)
{
}

Client::Client( int fd) : _fd( fd ), _allRead( false ), _contentLength( 0 ), _headerParsed(false), _bodyStart(0)
{
}

Client::Client( const Client& client) : _fd(client._fd), _allRead(client._allRead), _header_len(client._header_len), _contentLength(client._contentLength)
, _giveHeadAndBody(client._giveHeadAndBody), _headerParsed(client._headerParsed), _bodyStart(client._bodyStart) {}

Client& Client::operator=( const Client& client) {
	if (this != &client) {
		_fd = client._fd;
		_allRead = client._allRead;
		_header_len = client._header_len;
		_contentLength = client._contentLength;
		_giveHeadAndBody = client._giveHeadAndBody;
		_headerParsed = client._headerParsed;
		_bodyStart = client._bodyStart;
	}
	return *this;
}

Client::~Client()
{
}

bool Client::getAllRead() const { return ( _allRead ); }

size_t Client::getContentLength() const { return ( _contentLength ); }

std::string Client::getThatBody() { return ( _giveHeadAndBody ); };

void	Client::setContentLength(size_t size) { _contentLength = size; };
void	Client::setAllRead( bool a ) { _allRead = a; }


void Client::addBodyCount( const char *buf, ssize_t count )
{
    _giveHeadAndBody.append(buf, count);

    if (!_headerParsed) {
      size_t hpos = _giveHeadAndBody.find("\r\n\r\n");
      if (hpos != std::string::npos) {
        _headerParsed = true;
        _bodyStart    = hpos + 4;
      }
    }

    if (_headerParsed) {
      size_t bodyLen = _giveHeadAndBody.size() - _bodyStart;
      if (bodyLen >= _contentLength) {
        _allRead = true;
      }
    }
}
