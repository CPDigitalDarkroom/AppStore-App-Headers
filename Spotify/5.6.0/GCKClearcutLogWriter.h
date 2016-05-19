/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileHandle;

@interface GCKClearcutLogWriter : NSObject {

	NSString* _logPath;
	unsigned _maxSize;
	NSFileHandle* _fileHandle;
	unsigned _currentSize;

}
-(char)writeVarint32:(int)arg1 ;
-(char)writeBuffer:(const void*)arg1 length:(unsigned long)arg2 ;
-(id)initWithLogPath:(id)arg1 maxSize:(unsigned)arg2 ;
-(int)writeLogEvent:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(char)open;
@end

