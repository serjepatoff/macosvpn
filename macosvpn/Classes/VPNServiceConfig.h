/*
 Copyright (c) 2015 halo. https://github.com/halo/macosvpn

 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the
 "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish,
 distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to
 the following conditions:

 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

@interface VPNServiceConfig : NSObject

@property (atomic) uint8_t type;
@property (strong) NSString *serviceID;
@property (strong) NSString *name;
@property (nonatomic, assign) NSString *endpoint;
@property (strong) NSString *username;
@property (strong) NSString *password;
@property (strong) NSString *sharedSecret;
@property (strong) NSString *localIdentifier;
@property (atomic) BOOL enableSplitTunnel;

@property (readonly) NSString *humanType;

@property (readonly) CFDictionaryRef L2TPPPPConfig;
@property (readonly) CFDictionaryRef L2TPIPSecConfig;
@property (readonly) CFDictionaryRef L2TPIPv4Config;
@property (readonly) CFDictionaryRef ciscoConfig;

@end
