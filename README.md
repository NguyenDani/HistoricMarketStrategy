# tradeBotCPP

Git test

## API

### Scource: Polygon.io
Polygon is a prominent provider of market data, catering to the needs of developers seeking real-time financial information. To accommodate different integration preferences, Polygon offers two distinct types of APIs: RESTful APIs and WebSocket APIs which is only availbale to premium accounts.

For this project I will be using RESTful, because I do not have a premium account. This will limit us to 5 API calls per minute so to accommodate for the limited calls we are going to focus on trading 5 stocks at a time, calling each stock once every minute. The reason why we are not focusing on one stock and calling the API 5 times within a minute for that one stock is because that also requires a premium account.

#### Why RESTful?
1. This is a free API that Polygon offers, but limits the user to only 5 API calls per minute.
2. We can take advantage of the limited calls using RESTful since RESTful is slower than WebSocket.

#### Why WebSocket?
WebSock is only available to preimum accounts and allows unlimited API calls. This means we can take advantage of:
1. Real-time data which is very important because it allows the bot to react to market changes instantly and make quicker decisions.
2. Eliminate the need for repeated polling resulting in lower latency and more efficient data transfer.
3. Faster order execution compared to RESTful in real-time trading scenarios.
