# tradeBotCPP

Git test

## API

Polygon is a prominent provider of market data, catering to the needs of developers seeking real-time financial information. To accommodate different integration preferences, Polygon offers two distinct types of APIs: RESTful APIs and WebSocket APIs which is only availbale to premium accounts.

For this project I will be using RESTful, because I do not have a premium account. This will affect how we are able to utilize the data. For example, since we are on a free account we can not access real time data and we are limited to 5 api calls per minute. Since we cannot access real time data we are going to focus more on how effective our trading strategies are using past data.

## WebSocket vs RESTful

### WebSocket
WebSock is only available to preimum accounts and allows unlimited API calls. This means we can take advantage of:
1. Real-time data which is very important because it allows the bot to react to market changes instantly and make quicker decisions.
2. Eliminate the need for repeated polling resulting in lower latency and more efficient data transfer.
3. Faster order execution compared to RESTful in real-time trading scenarios.

### RESTful
Free to use.

## Resources

### API
#### https://polygon.io/

### Libraries

#### yhirose/cpp-httplib
##### https://github.com/yhirose/cpp-httplib


#### nlohmann/json
##### https://github.com/nlohmann/json
