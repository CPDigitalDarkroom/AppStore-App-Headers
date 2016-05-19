/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSInputStream, NSDictionary, NSString;

@interface XAAFHTTPBodyPart : NSObject <NSCopying> {

	int _phase;
	NSInputStream* _inputStream;
	unsigned long long _phaseReadOffset;
	char _hasInitialBoundary;
	char _hasFinalBoundary;
	unsigned _stringEncoding;
	NSDictionary* _headers;
	NSString* _boundary;
	id _body;
	unsigned long long _bodyContentLength;

}

@property (assign,nonatomic) unsigned stringEncoding;                                     //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                                      //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) NSString * boundary;                                           //@synthesize boundary=_boundary - In the implementation block
@property (nonatomic,retain) id body;                                                     //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) unsigned long long bodyContentLength;                        //@synthesize bodyContentLength=_bodyContentLength - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                                 //@synthesize inputStream=_inputStream - In the implementation block
@property (assign,nonatomic) char hasInitialBoundary;                                     //@synthesize hasInitialBoundary=_hasInitialBoundary - In the implementation block
@property (assign,nonatomic) char hasFinalBoundary;                                       //@synthesize hasFinalBoundary=_hasFinalBoundary - In the implementation block
@property (getter=hasBytesAvailable,nonatomic,readonly) char bytesAvailable; 
@property (nonatomic,readonly) unsigned long long contentLength; 
-(void)setStringEncoding:(unsigned)arg1 ;
-(void)setBoundary:(NSString *)arg1 ;
-(NSString *)boundary;
-(void)setBodyContentLength:(unsigned long long)arg1 ;
-(void)setHasInitialBoundary:(char)arg1 ;
-(void)setHasFinalBoundary:(char)arg1 ;
-(char)transitionToNextPhase;
-(char)hasInitialBoundary;
-(id)stringForHeaders;
-(char)hasFinalBoundary;
-(int)readData:(id)arg1 intoBuffer:(char*)arg2 maxLength:(unsigned)arg3 ;
-(unsigned long long)bodyContentLength;
-(NSDictionary *)headers;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)body;
-(void)setBody:(id)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(unsigned long long)contentLength;
-(NSInputStream *)inputStream;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(unsigned)stringEncoding;
@end

