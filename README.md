# tradeBotCPP

Git test

## API

### Scource: Polygon.io
#### Why WebSocket?

Polygon only provides either RESTful API or WebSocket API. As for why I chose WebSocket over RESTful is because WebSocket has three advantages over RESTful.

1. Real-time data which is very important because it allows the bot to react to market changes instantly and make quicker decisions.
2. Eliminate the need for repeated polling resulting in lower latency and more efficient data transfer.
3. Faster order execution compared to RESTful in real-time trading scenarios.