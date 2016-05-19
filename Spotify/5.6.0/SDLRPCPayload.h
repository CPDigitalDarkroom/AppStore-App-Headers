/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SDLRPCPayload : NSObject {

	unsigned char _rpcType;
	unsigned long _functionID;
	unsigned long _correlationID;
	NSData* _jsonData;
	NSData* _binaryData;

}

@property (assign) unsigned char rpcType;                    //@synthesize rpcType=_rpcType - In the implementation block
@property (assign) unsigned long functionID;                 //@synthesize functionID=_functionID - In the implementation block
@property (assign) unsigned long correlationID;              //@synthesize correlationID=_correlationID - In the implementation block
@property (retain) NSData * jsonData;                        //@synthesize jsonData=_jsonData - In the implementation block
@property (retain) NSData * binaryData;                      //@synthesize binaryData=_binaryData - In the implementation block
+(id)rpcPayloadWithData:(id)arg1 ;
-(unsigned long)functionID;
-(unsigned char)rpcType;
-(NSData *)jsonData;
-(NSData *)binaryData;
-(void)setFunctionID:(unsigned long)arg1 ;
-(void)setJsonData:(NSData *)arg1 ;
-(void)setBinaryData:(NSData *)arg1 ;
-(void)setRpcType:(unsigned char)arg1 ;
-(unsigned long)correlationID;
-(void)setCorrelationID:(unsigned long)arg1 ;
-(unsigned)size;
-(id)init;
-(id)description;
-(id)data;
-(id)initWithData:(id)arg1 ;
@end

